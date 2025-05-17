#include "common-chax.h"
#include "battle-system.h"
#include "skill-system.h"
#include "combat-art.h"
#include "class-types.h"
#include "constants/skills.h"
#include "unit-expa.h"

STATIC_DECLAR bool CheckUnitNullEffective(struct Unit * unit)
{
    int i;
    u32 attributes = 0;

    /* Check item */
    for (i = 0; i < UNIT_ITEM_COUNT; ++i)
        attributes |= GetItemAttributes(unit->items[i]);

    if (attributes & IA_NEGATE_FLYING)
        return true;

#if (defined(SID_Nullify) && (COMMON_SKILL_VALID(SID_Nullify)))
    /* Check unit */
    if (SkillTester(unit, SID_Nullify))
        return true;
#endif

    return false;
}

LYN_REPLACE_CHECK(IsItemEffectiveAgainst);
bool IsItemEffectiveAgainst(u16 item, struct Unit * unit)
{
    int i, jid;
    const u8 * list;

    if (!unit->pClassData)
        return false;

    jid = UNIT_CLASS_ID(unit);
    list = GetItemEffectiveness(item);

    if (!list)
    {
#if defined(SID_DualWieldPlus) && (COMMON_SKILL_VALID(SID_DualWieldPlus))
        // We have to make the skill holder unit the opposite of whichever side "unit" is on
        struct Unit * skillHolderUnit = (unit == GetUnit(gBattleActor.unit.index)) ? GetUnit(gBattleTarget.unit.index) : GetUnit(gBattleActor.unit.index);
        if (SkillTester(skillHolderUnit, SID_DualWieldPlus))
        {
            for (int i = 1; i < UNIT_MAX_INVENTORY; i++)
            {
                if (GetItemHit(skillHolderUnit->items[i]) > 0 && CanUnitUseWeapon(skillHolderUnit, skillHolderUnit->items[i]))
                {
                    if (GetItemEffectiveness(skillHolderUnit->items[i]))
                    {
                        FORCE_DECLARE const u8 * newListItem = GetItemEffectiveness(skillHolderUnit->items[i]);
                        for (i = 0; newListItem[i]; i++)
                            if (newListItem[i] == jid)
                                goto check_null_effective;
                    }
                }
            }
            
            // We've reached the end and no items the unit has are effective
            return false;
        }
        else 
        {
            return false;
        }
#else   
        return false;
#endif
    }

    for (i = 0; list[i]; i++)
        if (list[i] == jid)
            goto check_null_effective;

    return false;

check_null_effective:
    if (CheckUnitNullEffective(unit))
        return false;

    return true;
}

LYN_REPLACE_CHECK(IsUnitEffectiveAgainst);
bool IsUnitEffectiveAgainst(struct Unit * actor, struct Unit * target)
{
    int jid_target = UNIT_CLASS_ID(target);

    /* Check combat-art */
    if (actor->index == gBattleActor.unit.index)
    {
        int cid = GetCombatArtInForce(actor);
        if (COMBART_VALID(cid))
        {
            switch (GetCombatArtInfo(cid)->effectiveness) {
            case COMBART_EFF_ALL:
                goto check_null_effective;

            case COMBART_EFF_ARMOR:
                if (CheckClassArmor(jid_target))
                    goto check_null_effective;

                break;

            case COMBART_EFF_CAVALRY:
                if (CheckClassCavalry(jid_target))
                    goto check_null_effective;

                break;

            case COMBART_EFF_FLIER:
                if (CheckClassFlier(jid_target))
                    goto check_null_effective;

                break;

            case COMBART_EFF_DRAGON:
                if (CheckClassDragon(jid_target))
                    goto check_null_effective;

                break;

            case COMBART_EFF_MONSTER:
                if (CheckClassBeast(jid_target))
                    goto check_null_effective;

                break;

            case COMBART_EFF_NONE:
            default:
                break;
            }
        }
    }

    /* Check skills */
#if (defined(SID_Slayer) && (COMMON_SKILL_VALID(SID_Slayer)))
    if (SkillTester(actor, SID_Slayer))
    {
        if (CheckClassBeast(jid_target))
            goto check_null_effective;
    }
#endif

#if (defined(SID_Skybreaker) && (COMMON_SKILL_VALID(SID_Skybreaker)))
    if (SkillTester(actor, SID_Skybreaker))
    {
        if (CheckClassFlier(jid_target))
            goto check_null_effective;
    }
#endif

#if (defined(SID_BanditBane) && (COMMON_SKILL_VALID(SID_BanditBane)))
    if (SkillTester(actor, SID_BanditBane))
    {
        if (CheckClassBandit(jid_target))
            goto check_null_effective;
    }
#endif

#if (defined(SID_WyvernCrash) && (COMMON_SKILL_VALID(SID_WyvernCrash)))
    if (SkillTester(actor, SID_WyvernCrash))
    {
        if(!CheckBitUES(actor, UES_BIT_WYVERN_CRASH_SKILL_USED) && gActionData.unk08 == SID_WyvernCrash)
            return true;
    }
#endif

    return false;

check_null_effective:
    if (CheckUnitNullEffective(target))
        return false;

    return true;
}
