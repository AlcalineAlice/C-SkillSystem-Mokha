#include "common-chax.h"
#include "bwl.h"
#include "kernel-lib.h"
#include "skill-system.h"
#include "constants/skills.h"
#include "constants/texts.h"

struct LearnedSkillList {
    u32 data[8]; /* 8 * 32 = 0x100 */
};

extern struct LearnedSkillList sLearnedSkillPLists[NEW_BWL_ARRAY_NUM];

#ifdef CONFIG_USE_DEBUG
void * const Identifier_sLearnedSkillPLists = sLearnedSkillPLists;
#endif

/* GameInitHook */
void ResetUnitLearnedSkillLists(void)
{
    CpuFill16(0, sLearnedSkillPLists, sizeof(sLearnedSkillPLists));
}

/* SaveData */
void SaveUnitLearnedSkillLists(u8 * dst, const u32 size)
{
    Assert(size == sizeof(sLearnedSkillPLists));

    WriteAndVerifySramFast(sLearnedSkillPLists, dst, size);
}

/* LoadData */
void LoadUnitLearnedSkillLists(u8 * src, const u32 size)
{
    Assert(size == sizeof(sLearnedSkillPLists));

    ReadSramFast(src, sLearnedSkillPLists, size);
}

bool IsSkillLearned(struct Unit * unit, const u16 sid)
{
    u8 pid = UNIT_CHAR_ID(unit);
    if (EQUIPE_SKILL_VALID(sid) && pid < NEW_BWL_ARRAY_NUM && _BIT_CHK(sLearnedSkillPLists[pid].data, sid))
        return true;

    struct SkillList *list;
    list = GetUnitSkillList(unit);

    for (int i = 0; i < list->amt; i++)
    {
        if (list->sid[i] == sid)
            return true;
    }

    return false;
}

void LearnSkill(struct Unit * unit, const u16 sid)
{
    u8 pid = UNIT_CHAR_ID(unit);

    /* Make sure that the enemy is not effective on allies */
    if (UNIT_FACTION(unit) != FACTION_BLUE)
        return;

    if (EQUIPE_SKILL_VALID(sid) && pid < NEW_BWL_ARRAY_NUM)
        _BIT_SET(sLearnedSkillPLists[pid].data, sid);
}

void ForgetSkill(struct Unit * unit, const u16 sid)
{
    u8 pid = UNIT_CHAR_ID(unit);
    if (EQUIPE_SKILL_VALID(sid) && pid < NEW_BWL_ARRAY_NUM)
        _BIT_CLR(sLearnedSkillPLists[pid].data, sid);
}

struct PopupInstruction const PopupScr_LearnSkill[] = {
    POPUP_SOUND(0x5A),
    POPUP_COLOR(TEXT_COLOR_SYSTEM_WHITE),
    POPUP_MSG(MSG_Learned),
    POPUP_COLOR(TEXT_COLOR_SYSTEM_BLUE),
    POPUP_ITEM_STR,
    POPUP_SPACE(1),
    POPUP_ITEM_ICON,
    POPUP_COLOR(TEXT_COLOR_SYSTEM_WHITE),
    POPUP_SPACE(1),
    POPUP_END
};