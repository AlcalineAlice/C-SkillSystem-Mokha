#include "common-chax.h"
#include "skill-system.h"
#include "strmag.h"
#include "battle-system.h"
#include "status-getter.h"
#include "combat-art.h"
#include "constants/skills.h"
#include "unit-expa.h"

typedef int (*BattleToUnitFunc_t)(struct BattleUnit * bu, struct Unit * unit);
// extern const BattleToUnitFunc_t gExternalBattleToUnitHook[];
extern BattleToUnitFunc_t const * const gpExternalBattleToUnitHook;

typedef int (*UnitToBattleFunc_t)(struct Unit * unit, struct BattleUnit * bu);
// extern const UnitToBattleFunc_t gExternalUnitToBattleHook[];
extern UnitToBattleFunc_t const * const gpExternalUnitToBattleHook;

STATIC_DECLAR void InitBattleUnitVanilla(struct BattleUnit * bu, struct Unit * unit)
{
    if (!unit)
        return;

    bu->unit = *unit;

    bu->unit.maxHP = GetUnitMaxHp(unit);
    bu->unit.pow = GetUnitPower(unit);
    bu->unit.skl = GetUnitSkill(unit);
    bu->unit.spd = GetUnitSpeed(unit);
    bu->unit.def = GetUnitDefense(unit);
    bu->unit.lck = GetUnitLuck(unit);
    bu->unit.res = GetUnitResistance(unit);
    bu->unit.conBonus = ConGetter(unit);
    bu->unit.movBonus = MovGetter(unit);

    bu->levelPrevious = bu->unit.level;
    bu->expPrevious = bu->unit.exp;

    bu->hpInitial = bu->unit.curHP;
    bu->statusOut = 0xFF;

    bu->changeHP = 0;
    bu->changePow = 0;
    bu->changeSkl = 0;
    bu->changeSpd = 0;
    bu->changeDef = 0;
    bu->changeRes = 0;
    bu->changeLck = 0;
    bu->changeCon = 0;

    gBattleActor.wexpMultiplier = 0;
    gBattleTarget.wexpMultiplier = 0;

    bu->wTriangleHitBonus = 0;
    bu->wTriangleDmgBonus = 0;

    bu->nonZeroDamage = FALSE;

    gBattleActor.weaponBroke = FALSE;
    gBattleTarget.weaponBroke = FALSE;

    gBattleActor.expGain = 0;
    gBattleTarget.expGain = 0;
}

STATIC_DECLAR void UpdateUnitFromBattleVanilla(struct Unit * unit, struct BattleUnit * bu)
{
    int tmp;

    unit->level = bu->unit.level;
    unit->exp = bu->unit.exp;
    unit->curHP = bu->unit.curHP;
    unit->state = bu->unit.state;

    gUnknown_03003060 = UNIT_ARENA_LEVEL(unit);

    if (bu->statusOut >= 0)
        SetUnitStatus(unit, bu->statusOut);

    unit->maxHP += bu->changeHP;
    unit->pow += bu->changePow;
    unit->skl += bu->changeSkl;
    unit->spd += bu->changeSpd;
    unit->def += bu->changeDef;
    unit->res += bu->changeRes;
    unit->lck += bu->changeLck;

    UnitCheckStatCaps(unit);

    tmp = GetBattleUnitUpdatedWeaponExp(bu);

#if (defined(SID_ShadowgiftPlus) && (COMMON_SKILL_VALID(SID_ShadowgiftPlus)))
    if (SkillTester(unit, SID_ShadowgiftPlus))
        if (GetItemType(unit->items[0]) == ITYPE_DARK)
            if (unit->ranks[ITYPE_DARK] == 0)
                tmp = 0;
#endif

#if (defined(SID_Shadowgift) && (COMMON_SKILL_VALID(SID_Shadowgift)))
    if (SkillTester(unit, SID_Shadowgift))
        if (GetItemType(unit->items[0]) == ITYPE_DARK)
            if (unit->ranks[ITYPE_DARK] == 0)
                tmp = 0;
#endif

#if (defined(SID_LuminaPlus) && (COMMON_SKILL_VALID(SID_LuminaPlus)))
    if (SkillTester(unit, SID_LuminaPlus))
        if (GetItemType(unit->items[0]) == ITYPE_LIGHT)
            if (unit->ranks[ITYPE_LIGHT] == 0)
                tmp = 0;
#endif

#if (defined(SID_Lumina) && (COMMON_SKILL_VALID(SID_Lumina)))
    if (SkillTester(unit, SID_Lumina))
        if (GetItemType(unit->items[0]) == ITYPE_LIGHT)
            if (unit->ranks[ITYPE_LIGHT] == 0)
                tmp = 0;
#endif

#if (defined(SID_StormgiftPlus) && (COMMON_SKILL_VALID(SID_StormgiftPlus)))
    if (SkillTester(unit, SID_StormgiftPlus))
        if (GetItemType(unit->items[0]) == ITYPE_ANIMA)
            if (unit->ranks[ITYPE_ANIMA] == 0)
                tmp = 0;
#endif

#if (defined(SID_Stormgift) && (COMMON_SKILL_VALID(SID_Stormgift)))
    if (SkillTester(unit, SID_Stormgift))
        if (GetItemType(unit->items[0]) == ITYPE_ANIMA)
            if (unit->ranks[ITYPE_ANIMA] == 0)
                tmp = 0;
#endif

#if (defined(SID_GracegiftPlus) && (COMMON_SKILL_VALID(SID_GracegiftPlus)))
    if (SkillTester(unit, SID_GracegiftPlus))
        if (GetItemType(unit->items[0]) == ITYPE_STAFF)
            if (unit->ranks[ITYPE_STAFF] == 0)
                tmp = 0;
#endif

#if (defined(SID_Gracegift) && (COMMON_SKILL_VALID(SID_Gracegift)))
    if (SkillTester(unit, SID_Gracegift))
        if (GetItemType(unit->items[0]) == ITYPE_STAFF)
            if (unit->ranks[ITYPE_STAFF] == 0)
                tmp = 0;
#endif

#if (defined(SID_BladegiftPlus) && (COMMON_SKILL_VALID(SID_BladegiftPlus)))
    if (SkillTester(unit, SID_BladegiftPlus))
        if (GetItemType(unit->items[0]) == ITYPE_SWORD)
            if (unit->ranks[ITYPE_SWORD] == 0)
                tmp = 0;
#endif

#if (defined(SID_Bladegift) && (COMMON_SKILL_VALID(SID_Bladegift)))
    if (SkillTester(unit, SID_Bladegift))
        if (GetItemType(unit->items[0]) == ITYPE_SWORD)
            if (unit->ranks[ITYPE_SWORD] == 0)
                tmp = 0;
#endif

#if (defined(SID_PiercegiftPlus) && (COMMON_SKILL_VALID(SID_PiercegiftPlus)))
    if (SkillTester(unit, SID_PiercegiftPlus))
        if (GetItemType(unit->items[0]) == ITYPE_LANCE)
            if (unit->ranks[ITYPE_LANCE] == 0)
                tmp = 0;
#endif

#if (defined(SID_Piercegift) && (COMMON_SKILL_VALID(SID_Piercegift)))
    if (SkillTester(unit, SID_Piercegift))
        if (GetItemType(unit->items[0]) == ITYPE_LANCE)
            if (unit->ranks[ITYPE_LANCE] == 0)
                tmp = 0;
#endif

#if (defined(SID_HackgiftPlus) && (COMMON_SKILL_VALID(SID_HackgiftPlus)))
    if (SkillTester(unit, SID_HackgiftPlus))
        if (GetItemType(unit->items[0]) == ITYPE_AXE)
            if (unit->ranks[ITYPE_AXE] == 0)
                tmp = 0;
#endif

#if (defined(SID_Hackgift) && (COMMON_SKILL_VALID(SID_Hackgift)))
    if (SkillTester(unit, SID_Hackgift))
        if (GetItemType(unit->items[0]) == ITYPE_AXE)
            if (unit->ranks[ITYPE_AXE] == 0)
                tmp = 0;
#endif

#if (defined(SID_ArcgiftPlus) && (COMMON_SKILL_VALID(SID_ArcgiftPlus)))
    if (SkillTester(unit, SID_ArcgiftPlus))
        if (GetItemType(unit->items[0]) == ITYPE_BOW)
            if (unit->ranks[ITYPE_BOW] == 0)
                tmp = 0;
#endif

#if (defined(SID_Arcgift) && (COMMON_SKILL_VALID(SID_Arcgift)))
    if (SkillTester(unit, SID_Arcgift))
        if (GetItemType(unit->items[0]) == ITYPE_BOW)
            if (unit->ranks[ITYPE_BOW] == 0)
                tmp = 0;
#endif

    if (tmp > 0)
        unit->ranks[bu->weaponType] = tmp;

    for (tmp = 0; tmp < UNIT_ITEM_COUNT; ++tmp)
        unit->items[tmp] = bu->unit.items[tmp];

    UnitRemoveInvalidItems(unit);

    /* This returns fuck all now that it's been zeroed out for more useful data in the BWL struct */
    if (bu->expGain)
        PidStatsAddExpGained(unit->pCharacterData->number, bu->expGain);
}

LYN_REPLACE_CHECK(InitBattleUnit);
void InitBattleUnit(struct BattleUnit * bu, struct Unit * unit)
{
    const UnitToBattleFunc_t * it;

    InitBattleUnitVanilla(bu, unit);

    UNIT_MAG(&bu->unit) = MagGetter(unit);
    BU_CHG_MAG(bu) = 0;

    bu->unit._u3A = unit->_u3A;
    bu->unit._u3B = unit->_u3B;

    for (it = gpExternalUnitToBattleHook; *it; it++)
        (*it)(unit, bu);
}

LYN_REPLACE_CHECK(UpdateUnitFromBattle);
void UpdateUnitFromBattle(struct Unit * unit, struct BattleUnit * bu)
{
    const BattleToUnitFunc_t * it;

    UpdateUnitFromBattleVanilla(unit, bu);

    /**
     * I went and made a battle unit version of the set bit function to
     * accomodate the fact that menu skills that use the attack functionality
     * need to have their bits set after the battle is over to prevent situations
     * where the user exits out of the forecast menu without attacking, and the bit is accidentally set
     * We only want the bit set if the unit successfully executed an attack
     */
#if defined(SID_LoadstarRush) && (COMMON_SKILL_VALID(SID_LoadstarRush))
    if (SkillTester(unit, SID_LoadstarRush) && gActionData.unk08 == SID_LoadstarRush && !CheckBitUES(unit, UES_BIT_LOADSTAR_RUSH_SKILL_USED))
        SetBitUES_BU(bu, UES_BIT_LOADSTAR_RUSH_SKILL_USED);
#endif

#if defined(SID_WyvernCrash) && (COMMON_SKILL_VALID(SID_WyvernCrash))
    if (SkillTester(unit, SID_WyvernCrash) && gActionData.unk08 == SID_WyvernCrash && !CheckBitUES(unit, UES_BIT_WYVERN_CRASH_SKILL_USED))
        SetBitUES_BU(bu, UES_BIT_WYVERN_CRASH_SKILL_USED);
#endif

#if defined(SID_Capture) && (COMMON_SKILL_VALID(SID_Capture))
    if (SkillTester(unit, SID_Capture) && gActionData.unk08 == SID_Capture && !CheckBitUES(unit, UES_BIT_CAPTURE_SKILL_USED))
        SetBitUES_BU(bu, UES_BIT_CAPTURE_SKILL_USED);
#endif

#if defined(SID_ResolvedHeart) && (COMMON_SKILL_VALID(SID_ResolvedHeart))
    if (SkillTester(unit, SID_ResolvedHeart) && gActionData.unk08 == SID_ResolvedHeart && !CheckBitUES(unit, UES_BIT_RESOLVED_HEART_SKILL_USED))
        SetBitUES_BU(bu, UES_BIT_RESOLVED_HEART_SKILL_USED);
#endif

#if defined(SID_Bide) && (COMMON_SKILL_VALID(SID_Bide))
    if (SkillTester(unit, SID_Bide) && gActionData.unk08 == SID_Bide && !CheckBitUES(unit, UES_BIT_BIDE_SKILL_USED))
    {
        SetBitUES_BU(bu, UES_BIT_BIDE_SKILL_USED);
        unit->curHP = 1;
    }
#endif

    UNIT_MAG(unit) += BU_CHG_MAG(bu);

    /* Unit expa sus */
    unit->_u3A = bu->unit._u3A;
    unit->_u3B = bu->unit._u3B;

    ResetSkillLists();

    for (it = gpExternalBattleToUnitHook; *it; it++)
        (*it)(bu, unit);
}

LYN_REPLACE_CHECK(BattleApplyUnitUpdates);
void BattleApplyUnitUpdates(void)
{
    struct Unit * actor = GetUnit(gBattleActor.unit.index);
    struct Unit * target = GetUnit(gBattleTarget.unit.index);

/**
 * We check the skill here to restore a mimic user's original weapon
 */
#if (defined(SID_Mimic) && (COMMON_SKILL_VALID(SID_Mimic)))
    if (SkillTester(target, SID_Mimic))
        gBattleTarget.unit.items[gBattleTarget.weaponSlotIndex] = GetUnitEquippedWeapon(target);
    else if (SkillTester(actor, SID_Mimic))
        gBattleActor.unit.items[gBattleActor.weaponSlotIndex] = GetUnitEquippedWeapon(actor);
    else
    {
        if (gBattleActor.canCounter)
            gBattleActor.unit.items[gBattleActor.weaponSlotIndex] = gBattleActor.weapon;

        if (gBattleTarget.canCounter)
            gBattleTarget.unit.items[gBattleTarget.weaponSlotIndex] = gBattleTarget.weapon;
    }

#else
    if (gBattleActor.canCounter)
        gBattleActor.unit.items[gBattleActor.weaponSlotIndex] = gBattleActor.weapon;

    if (gBattleTarget.canCounter)
        gBattleTarget.unit.items[gBattleTarget.weaponSlotIndex] = gBattleTarget.weapon;
#endif

#if (defined(SID_Offhand) && (COMMON_SKILL_VALID(SID_Offhand)))
    if (SkillTester(actor, SID_Offhand))
    {
        /* Check if the unit has a second item */
        if (GetItemIndex(target->items[1]) != 0)
        {
            u16 currentItem = GetUnitEquippedWeapon(target);
            u8 currentIndex = 0;

            for (int i = 0; i < 5; i++)
            {
                if (target->items[i] == currentItem)
                    currentIndex = i;
                else if (target->items[i] == 0)
                    break;
                else
                {
                    if (CanUnitUseWeapon(target, target->items[i]))
                    {
                        u16 newItem = target->items[i];
                        u8 newIndex = i;
                        
                        gBattleTarget.unit.items[currentIndex] = newItem;
                        gBattleTarget.unit.items[newIndex] = currentItem;

                        break;
                    }
                }
            }

            /* Something random to satisfy the -Werror-unused-but-set-variable */
            currentIndex += 1;
        }
    }
    if (SkillTester(target, SID_Offhand))
    {
        /* Check if the unit has a second item */
        if (GetItemIndex(actor->items[1]) != 0)
        {
            u16 currentItem = GetUnitEquippedWeapon(actor);
            u8 currentIndex = 0;

            for (int i = 0; i < 5; i++)
            {
                if (actor->items[i] == currentItem)
                    currentIndex = i;
                else if (actor->items[i] == 0)
                    break;
                else
                {
                    if (CanUnitUseWeapon(actor, actor->items[i]))
                    {
                        u16 newItem = actor->items[i];
                        u8 newIndex = i;
                        
                        gBattleActor.unit.items[currentIndex] = newItem;
                        gBattleActor.unit.items[newIndex] = currentItem;

                        break;
                    }
                }
            }

            /* Something random to satisfy the -Werror-unused-but-set-variable */
            currentIndex += 1;
        }
    }
#endif

    UpdateUnitFromBattle(actor, &gBattleActor);

    if (target)
        UpdateUnitFromBattle(target, &gBattleTarget);
    else
        UpdateObstacleFromBattle(&gBattleTarget);
}