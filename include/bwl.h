#pragma once

#include "common-chax.h"

#ifndef CONFIG_UNIT_AMT_ALLY
    #define CONFIG_UNIT_AMT_ALLY 50
#endif

#define NEW_BWL_ARRAY_NUM CONFIG_UNIT_AMT_ALLY

struct NewBwl {
    /* vanilla */
    u32 battleAmt : 12;
    u32 winAmt    : 11;
    u32 lossAmt   : 8;
    u32 levelGain : 9;

    /* bwl support */
    u8 supports[UNIT_SUPPORT_MAX_COUNT];

    /* JESTER - Laguz bars transformation gauge is stored in the first byte here */
    u8 _pad_[0x10 - 0x0C];

} BITPACKED;

static inline bool CheckHasBwl(u8 pid)
{
    if (pid >= NEW_BWL_ARRAY_NUM)
        return false;

    if (GetCharacterData(pid)->affinity == 0)
        return false;

    return true;
}

static inline struct NewBwl * GetNewBwl(u8 pid)
{
    struct NewBwl * entry = (struct NewBwl *)gPidStatsData;
    if (!CheckHasBwl(pid))
        return NULL;

    return entry + (pid - 1);
}

// extern const s8 gClassPreLoadHiddenLevel[0x100];
extern s8 const * const gpClassPreLoadHiddenLevel;

void NewBwlRecordHiddenLevel(struct Unit * unit);
int GetUnitHiddenLevel(struct Unit * unit);
void UnitHiddenLevelPreLoad(struct Unit * unit);

// see limition rule 5
void WriteUnitLevelSafe(struct Unit *unit, int new_level);
extern void (*prWriteUnitLevelSafe)(struct Unit *unit, int new_level);
extern const struct SupportTalkEnt gNewSupportTalkList[];

void DrawPage1BWL(void);