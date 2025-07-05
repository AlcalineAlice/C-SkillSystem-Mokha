#include "common-chax.h"
#include "types.h"
#include "eventinfo.h"
#include "constants/texts.h"
#include "jester_headers/maps.h"

/* Rewritten to be like the battle quotes, so multiple can be used */

const struct DefeatTalkEntNew gNewDefeatTalkList[] = {
    {
        .pidA    = CHARACTER_ONEILL,
        .pidB    = CHARACTER_EIRIKA,
        .route   = CHAPTER_MODE_ANY,
        .chapter = PROLOGUE ,
        .flag    = EVFLAG_DEFEAT_BOSS,
        .msg     = MSG_DEFEAT_QUOTE_EIRIKA_ONEILL,
    },
    {
        .pidA    = CHARACTER_ONEILL,
        .pidB    = CHARACTER_SETH,
        .route   = CHAPTER_MODE_ANY,
        .chapter = PROLOGUE,
        .flag    = EVFLAG_DEFEAT_BOSS,
        .msg     = MSG_DEFEAT_QUOTE_SETH_ONEILL,
    },
    {
        .pidA    = CHARACTER_BREGUET,
        .route   = CHAPTER_MODE_ANY,
        .chapter = CHAPTER_01,
        .flag    = EVFLAG_DEFEAT_BOSS,
        .msg     = MSG_DEFEAT_QUOTE_BREGUET,
    },
    {
        .pidA    = CHARACTER_BONE,
        .route   = CHAPTER_MODE_ANY,
        .chapter = CHAPTER_02,
        .flag    = EVFLAG_DEFEAT_BOSS,
        .msg     = MSG_DEFEAT_QUOTE_BONE,
    },
    {
        .pidA    = CHARACTER_BAZBA,
        .route   = CHAPTER_MODE_ANY,
        .chapter = CHAPTER_03,
        .flag    = EVFLAG_DEFEAT_BOSS,
        .msg     = MSG_DEFEAT_QUOTE_BAZBA,
    },
    {
        .pidA    = CHARACTER_ENTOMBED_CH4,
        .route   = CHAPTER_MODE_ANY,
        .chapter = CHAPTER_04,
        .flag    = EVFLAG_DEFEAT_BOSS,
        .msg     = MSG_DEFEAT_QUOTE_CH4,
    },
    {
        .pidA    = CHARACTER_SAAR,
        .route   = CHAPTER_MODE_ANY,
        .chapter = CHAPTER_05,
        .flag    = EVFLAG_DEFEAT_BOSS,
        .msg     = MSG_DEFEAT_QUOTE_SAAR,
    },
    {
        .pidA    = CHARACTER_ZONTA,
        .route   = CHAPTER_MODE_ANY,
        .chapter = CHAPTER_05X,
        .flag    = EVFLAG_DEFEAT_BOSS,
        .msg     = MSG_DEFEAT_QUOTE_ZONTA,
    },
    {
        .pidA    = CHARACTER_NOVALA,
        .route   = CHAPTER_MODE_ANY,
        .chapter = CHAPTER_06,
        .flag    = EVFLAG_DEFEAT_BOSS,
        .msg     = MSG_DEFEAT_QUOTE_NOVALA,
    },
    {
        .pidA    = CHARACTER_MURRAY,
        .route   = CHAPTER_MODE_ANY,
        .chapter = CHAPTER_07,
        .flag    = EVFLAG_DEFEAT_BOSS,
        .msg     = MSG_DEFEAT_QUOTE_MURRAY,
    },
    {
        .pidA    = CHARACTER_TIRADO,
        .route   = CHAPTER_MODE_ANY,
        .chapter = CHAPTER_08,
        .flag    = EVFLAG_DEFEAT_BOSS,
        .msg     = MSG_DEFEAT_QUOTE_TIRADO,
    },
    {
        .pidA    = CHARACTER_BINKS,
        .route   = CHAPTER_MODE_ANY,
        .chapter = CHAPTER_09,
        .flag    = EVFLAG_DEFEAT_BOSS,
        .msg     = MSG_DEFEAT_QUOTE_BINKS,
    },
    {
        .pidA     = 0xffff,
        .chapter = 0x00,
        .msg     = 0x0000,
    },
};

LYN_REPLACE_CHECK(GetDefeatTalkEntry);
struct DefeatTalkEntNew* GetDefeatTalkEntry(u16 pidA) {
    const struct DefeatTalkEntNew* it;

    for (it = gNewDefeatTalkList; it->pidA != 0xFFFF; it++) {
        if (it->chapter != 0xff && it->chapter != gPlaySt.chapterIndex) {
            if (it->chapter != 0xfe || BattleIsTriangleAttack() != 1) {
                continue;
            }
        }

        if (GetEventTriggerState(it->flag)) {
            continue;
        }

        if ((pidA == it->pidA) && (
                it->pidB == 0xFFFF ||
                (GetUnit(gBattleActor.unit.index)->pCharacterData->number == it->pidB) ||
                (GetUnit(gBattleTarget.unit.index)->pCharacterData->number == it->pidB)
            )) {
            return (struct DefeatTalkEntNew *)it;
        }
    }

    return NULL;
}

//! FE8U = 0x080835A8
LYN_REPLACE_CHECK(CheckBattleDefeatTalk);
s8 CheckBattleDefeatTalk(u8 pid) {
    struct DefeatTalkEntNew* ent = GetDefeatTalkEntry(pid);

    if (ent) {
        if (ent->msg == 0 && ent->event == 0) {
            SetPidDefeatedFlag(pid, ent->flag);
        } else {
            return 1;
        }
    }
    return 0;
}

//! FE8U = 0x080835DC
LYN_REPLACE_CHECK(DisplayDefeatTalkForPid);
void DisplayDefeatTalkForPid(u8 pid) {
    struct DefeatTalkEntNew* ent = GetDefeatTalkEntry(pid);

    if (ent) {
        if ((ent->route == 1) && (ent->flag == 0x65)) {
            StartBgm(0x3e, NULL);
            gPlaySt.config.disableBgm = 1;
        } else {
            if (UNIT_FACTION(GetUnitFromCharId(pid)) == FACTION_BLUE) {
                StartBgm(0x3f, NULL);
            }
        }
        if (ent->msg != 0) {
            CallBattleQuoteEventInBattle(ent->msg);
        } else {
            if (ent->event) {
                EventEngine_CreateBattle((u16 *)ent->event);
            }
        }
        SetPidDefeatedFlag(pid, ent->flag);
    }
    return;
}