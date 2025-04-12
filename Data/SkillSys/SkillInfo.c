#include "common-chax.h"
#include "skill-system.h"
#include "constants/skills.h"
#include "constants/texts.h"
#include "constants/gfx.h"

const struct SkillInfo gSkillInfos[MAX_SKILL_NUM + 1] = {
#if (defined(SID_HpBonus) && COMMON_SKILL_VALID(SID_HpBonus))
    [SID_HpBonus] = {
        .desc = MSG_SKILL_HpBonus,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_StrBonus) && COMMON_SKILL_VALID(SID_StrBonus))
    [SID_StrBonus] = {
        .desc = MSG_SKILL_StrBonus,
        .icon = GFX_SkillIcon_StrBonus,
    },
#endif

#if (defined(SID_MagBonus) && COMMON_SKILL_VALID(SID_MagBonus))
    [SID_MagBonus] = {
        .desc = MSG_SKILL_MagBonus,
        .icon = GFX_SkillIcon_MagBonus,
    },
#endif

#if (defined(SID_SklBonus) && COMMON_SKILL_VALID(SID_SklBonus))
    [SID_SklBonus] = {
        .desc = MSG_SKILL_SklBonus,
        .icon = GFX_SkillIcon_SklBonus,
    },
#endif

#if (defined(SID_SpdBonus) && COMMON_SKILL_VALID(SID_SpdBonus))
    [SID_SpdBonus] = {
        .desc = MSG_SKILL_SpdBonus,
        .icon = GFX_SkillIcon_SpdBonus,
    },
#endif

#if (defined(SID_LckBonus) && COMMON_SKILL_VALID(SID_LckBonus))
    [SID_LckBonus] = {
        .desc = MSG_SKILL_LukBonus,
        .icon = GFX_SkillIcon_LukBonus,
    },
#endif

#if (defined(SID_DefBonus) && COMMON_SKILL_VALID(SID_DefBonus))
    [SID_DefBonus] = {
        .desc = MSG_SKILL_DefBonus,
        .icon = GFX_SkillIcon_DefBonus,
    },
#endif

#if (defined(SID_ResBonus) && COMMON_SKILL_VALID(SID_ResBonus))
    [SID_ResBonus] = {
        .desc = MSG_SKILL_ResBonus,
        .icon = GFX_SkillIcon_ResBonus,
    },
#endif

#if (defined(SID_MovBonus) && COMMON_SKILL_VALID(SID_MovBonus))
    [SID_MovBonus] = {
        .desc = MSG_SKILL_MovBonus,
        .icon = GFX_SkillIcon_MovBonus,
    },
#endif

#if (defined(SID_DefiantStr) && COMMON_SKILL_VALID(SID_DefiantStr))
    [SID_DefiantStr] = {
        .desc = MSG_SKILL_DefiantStr,
        .icon = GFX_SkillIcon_DefiantStr,
    },
#endif

#if (defined(SID_DefiantMag) && COMMON_SKILL_VALID(SID_DefiantMag))
    [SID_DefiantMag] = {
        .desc = MSG_SKILL_DefiantMag,
        .icon = GFX_SkillIcon_DefiantMag,
    },
#endif

#if (defined(SID_DefiantSkl) && COMMON_SKILL_VALID(SID_DefiantSkl))
    [SID_DefiantSkl] = {
        .desc = MSG_SKILL_DefiantSkl,
        .icon = GFX_SkillIcon_DefiantSkl,
    },
#endif

#if (defined(SID_DefiantSpd) && COMMON_SKILL_VALID(SID_DefiantSpd))
    [SID_DefiantSpd] = {
        .desc = MSG_SKILL_DefiantSpd,
        .icon = GFX_SkillIcon_DefiantSpd,
    },
#endif

#if (defined(SID_DefiantLck) && COMMON_SKILL_VALID(SID_DefiantLck))
    [SID_DefiantLck] = {
        .desc = MSG_SKILL_DefiantLck,
        .icon = GFX_SkillIcon_DefiantLck,
    },
#endif

#if (defined(SID_DefiantDef) && COMMON_SKILL_VALID(SID_DefiantDef))
    [SID_DefiantDef] = {
        .desc = MSG_SKILL_DefiantDef,
        .icon = GFX_SkillIcon_DefiantDef,
    },
#endif

#if (defined(SID_DefiantRes) && COMMON_SKILL_VALID(SID_DefiantRes))
    [SID_DefiantRes] = {
        .desc = MSG_SKILL_DefiantRes,
        .icon = GFX_SkillIcon_DefiantRes,
    },
#endif

#if (defined(SID_DefiantCrit) && COMMON_SKILL_VALID(SID_DefiantCrit))
    [SID_DefiantCrit] = {
        .desc = MSG_SKILL_DefiantCrit,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_DefiantAvoid) && COMMON_SKILL_VALID(SID_DefiantAvoid))
    [SID_DefiantAvoid] = {
        .desc = MSG_SKILL_DefiantAvoid,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Fury) && COMMON_SKILL_VALID(SID_Fury))
    [SID_Fury] = {
        .desc = MSG_SKILL_Fury,
        .icon = GFX_SkillIcon_Fury,
    },
#endif

#if (defined(SID_FuryPlus) && COMMON_SKILL_VALID(SID_FuryPlus))
    [SID_FuryPlus] = {
        .desc = MSG_SKILL_FuryPlus,
        .icon = GFX_SkillIcon_FuryPlus,
    },
#endif

#if (defined(SID_FortressDef) && COMMON_SKILL_VALID(SID_FortressDef))
    [SID_FortressDef] = {
        .desc = MSG_SKILL_FortressDef,
        .icon = GFX_SkillIcon_FortressDef,
    },
#endif

#if (defined(SID_FortressRes) && COMMON_SKILL_VALID(SID_FortressRes))
    [SID_FortressRes] = {
        .desc = MSG_SKILL_FortressRes,
        .icon = GFX_SkillIcon_FortressRes,
    },
#endif

#if (defined(SID_LifeAndDeath) && COMMON_SKILL_VALID(SID_LifeAndDeath))
    [SID_LifeAndDeath] = {
        .desc = MSG_SKILL_LifeAndDeath,
        .icon = GFX_SkillIcon_LifeAndDeath,
    },
#endif

#if (defined(SID_LuckySeven) && COMMON_SKILL_VALID(SID_LuckySeven))
    [SID_LuckySeven] = {
        .desc = MSG_SKILL_LuckySeven,
        .icon = GFX_SkillIcon_LuckySeven,
    },
#endif

#if (defined(SID_Nullify) && COMMON_SKILL_VALID(SID_Nullify))
    [SID_Nullify] = {
        .desc = MSG_SKILL_Nullify,
        .icon = GFX_SkillIcon_Nullify,
    },
#endif

#if (defined(SID_Slayer) && COMMON_SKILL_VALID(SID_Slayer))
    [SID_Slayer] = {
        .desc = MSG_SKILL_Slayer,
        .icon = GFX_SkillIcon_Slayer,
    },
#endif

#if (defined(SID_Skybreaker) && COMMON_SKILL_VALID(SID_Skybreaker))
    [SID_Skybreaker] = {
        .desc = MSG_SKILL_Skybreaker,
        .icon = GFX_SkillIcon_Skybreaker,
    },
#endif

#if (defined(SID_Resourceful) && COMMON_SKILL_VALID(SID_Resourceful))
    [SID_Resourceful] = {
        .desc = MSG_SKILL_Resourceful,
        .icon = GFX_SkillIcon_Resourceful,
    },
#endif

#if (defined(SID_Nihil) && COMMON_SKILL_VALID(SID_Nihil))
    [SID_Nihil] = {
        .desc = MSG_SKILL_Nihil,
        .icon = GFX_SkillIcon_Nihil,
    },
#endif

#if (defined(SID_CritSword) && COMMON_SKILL_VALID(SID_CritSword))
    [SID_CritSword] = {
        .desc = MSG_SKILL_CritSword,
        .icon = GFX_SkillIcon_CritSword,
    },
#endif

#if (defined(SID_CritAxe) && COMMON_SKILL_VALID(SID_CritAxe))
    [SID_CritAxe] = {
        .desc = MSG_SKILL_CritAxe,
        .icon = GFX_SkillIcon_CritAxe,
    },
#endif

#if (defined(SID_CritLance) && COMMON_SKILL_VALID(SID_CritLance))
    [SID_CritLance] = {
        .desc = MSG_SKILL_CritLance,
        .icon = GFX_SkillIcon_CritLance,
    },
#endif

#if (defined(SID_CritBow) && COMMON_SKILL_VALID(SID_CritBow))
    [SID_CritBow] = {
        .desc = MSG_SKILL_CritBow,
        .icon = GFX_SkillIcon_CritBow,
    },
#endif

#if (defined(SID_FaireSword) && COMMON_SKILL_VALID(SID_FaireSword))
    [SID_FaireSword] = {
        .desc = MSG_SKILL_FaireSword,
        .icon = GFX_SkillIcon_FaireSword,
    },
#endif

#if (defined(SID_FaireLance) && COMMON_SKILL_VALID(SID_FaireLance))
    [SID_FaireLance] = {
        .desc = MSG_SKILL_FaireLance,
        .icon = GFX_SkillIcon_FaireLance,
    },
#endif

#if (defined(SID_FaireAxe) && COMMON_SKILL_VALID(SID_FaireAxe))
    [SID_FaireAxe] = {
        .desc = MSG_SKILL_FaireAxe,
        .icon = GFX_SkillIcon_FaireAxe,
    },
#endif

#if (defined(SID_FaireBow) && COMMON_SKILL_VALID(SID_FaireBow))
    [SID_FaireBow] = {
        .desc = MSG_SKILL_FaireBow,
        .icon = GFX_SkillIcon_FaireBow,
    },
#endif

#if (defined(SID_FaireBMag) && COMMON_SKILL_VALID(SID_FaireBMag))
    [SID_FaireBMag] = {
        .desc = MSG_SKILL_FaireBMag,
        .icon = GFX_SkillIcon_FaireBMag,
    },
#endif

#if (defined(SID_Avoid) && COMMON_SKILL_VALID(SID_Avoid))
    [SID_Avoid] = {
        .desc = MSG_SKILL_Avoid,
        .icon = GFX_SkillIcon_Avoid,
    },
#endif

#if (defined(SID_AvoidSword) && COMMON_SKILL_VALID(SID_AvoidSword))
    [SID_AvoidSword] = {
        .desc = MSG_SKILL_AvoidSword,
        .icon = GFX_SkillIcon_AvoidSword,
    },
#endif

#if (defined(SID_RuinedBlade) && COMMON_SKILL_VALID(SID_RuinedBlade))
    [SID_RuinedBlade] = {
        .desc = MSG_SKILL_RuinedBlade,
        .icon = GFX_SkillIcon_RuinedBlade,
    },
#endif

#if (defined(SID_HeavyBlade) && COMMON_SKILL_VALID(SID_HeavyBlade))
    [SID_HeavyBlade] = {
        .desc = MSG_SKILL_HeavyBlade,
        .icon = GFX_SkillIcon_HeavyBlade,
    },
#endif

#if (defined(SID_FlashingBlade) && COMMON_SKILL_VALID(SID_FlashingBlade))
    [SID_FlashingBlade] = {
        .desc = MSG_SKILL_FlashingBlade,
        .icon = GFX_SkillIcon_FlashingBlade,
    },
#endif

#if (defined(SID_HeavyBladePlus) && COMMON_SKILL_VALID(SID_HeavyBladePlus))
    [SID_HeavyBladePlus] = {
        .desc = MSG_SKILL_HeavyBladePlus,
        .icon = GFX_SkillIcon_HeavyBladePlus,
    },
#endif

#if (defined(SID_FlashingBladePlus) && COMMON_SKILL_VALID(SID_FlashingBladePlus))
    [SID_FlashingBladePlus] = {
        .desc = MSG_SKILL_FlashingBladePlus,
        .icon = GFX_SkillIcon_FlashingBladePlus,
    },
#endif

#if (defined(SID_LunaAttack) && COMMON_SKILL_VALID(SID_LunaAttack))
    [SID_LunaAttack] = {
        .desc = MSG_SKILL_LunaAttack,
        .icon = GFX_SkillIcon_LunaAttack,
    },
#endif

#if (defined(SID_SorceryBlade) && COMMON_SKILL_VALID(SID_SorceryBlade))
    [SID_SorceryBlade] = {
        .desc = MSG_SKILL_SorceryBlade,
        .icon = GFX_SkillIcon_SorceryBlade,
    },
#endif

#if (defined(SID_Fortune) && COMMON_SKILL_VALID(SID_Fortune))
    [SID_Fortune] = {
        .desc = MSG_SKILL_Fortune,
        .icon = GFX_SkillIcon_Fortune,
    },
#endif

#if (defined(SID_BlueFlame) && COMMON_SKILL_VALID(SID_BlueFlame))
    [SID_BlueFlame] = {
        .desc = MSG_SKILL_BlueFlame,
        .icon = GFX_SkillIcon_BlueFlame,
    },
#endif

#if (defined(SID_SwordBreaker) && COMMON_SKILL_VALID(SID_SwordBreaker))
    [SID_SwordBreaker] = {
        .desc = MSG_SKILL_SwordBreaker,
        .icon = GFX_SkillIcon_SwordBreaker,
    },
#endif

#if (defined(SID_AxeBreaker) && COMMON_SKILL_VALID(SID_AxeBreaker))
    [SID_AxeBreaker] = {
        .desc = MSG_SKILL_AxeBreaker,
        .icon = GFX_SkillIcon_AxeBreaker,
    },
#endif

#if (defined(SID_LanceBreaker) && COMMON_SKILL_VALID(SID_LanceBreaker))
    [SID_LanceBreaker] = {
        .desc = MSG_SKILL_LanceBreaker,
        .icon = GFX_SkillIcon_LanceBreaker,
    },
#endif

#if (defined(SID_BowBreaker) && COMMON_SKILL_VALID(SID_BowBreaker))
    [SID_BowBreaker] = {
        .desc = MSG_SKILL_BowBreaker,
        .icon = GFX_SkillIcon_BowBreaker,
    },
#endif

#if (defined(SID_BMagBreaker) && COMMON_SKILL_VALID(SID_BMagBreaker))
    [SID_BMagBreaker] = {
        .desc = MSG_SKILL_BMagBreaker,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Vantage) && COMMON_SKILL_VALID(SID_Vantage))
    [SID_Vantage] = {
        .desc = MSG_SKILL_Vantage,
        .icon = GFX_SkillIcon_Vantage,
    },
#endif

#if (defined(SID_Desperation) && COMMON_SKILL_VALID(SID_Desperation))
    [SID_Desperation] = {
        .desc = MSG_SKILL_Desperation,
        .icon = GFX_SkillIcon_Desperation,
    },
#endif

#if (defined(SID_QuickRiposte) && COMMON_SKILL_VALID(SID_QuickRiposte))
    [SID_QuickRiposte] = {
        .desc = MSG_SKILL_QuickRiposte,
        .icon = GFX_SkillIcon_QuickRiposte,
    },
#endif

#if (defined(SID_WaryFighter) && COMMON_SKILL_VALID(SID_WaryFighter))
    [SID_WaryFighter] = {
        .desc = MSG_SKILL_WaryFighter,
        .icon = GFX_SkillIcon_WaryFighter,
    },
#endif

#if (defined(SID_DoubleLion) && COMMON_SKILL_VALID(SID_DoubleLion))
    [SID_DoubleLion] = {
        .desc = MSG_SKILL_DoubleLion,
        .icon = GFX_SkillIcon_DoubleLion,
    },
#endif

#if (defined(SID_Adept) && COMMON_SKILL_VALID(SID_Adept))
    [SID_Adept] = {
        .desc = MSG_SKILL_Adept,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Astra) && COMMON_SKILL_VALID(SID_Astra))
    [SID_Astra] = {
        .desc = MSG_SKILL_Astra,
        .icon = GFX_SkillIcon_Astra,
    },
#endif

#if (defined(SID_LoadstarRush) && COMMON_SKILL_VALID(SID_LoadstarRush))
    [SID_LoadstarRush] = {
        .desc = MSG_SKILL_LoadstarRush,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Aegis) && COMMON_SKILL_VALID(SID_Aegis))
    [SID_Aegis] = {
        .desc = MSG_SKILL_Aegis,
        .icon = GFX_SkillIcon_Aegis,
    },
#endif

#if (defined(SID_Pavise) && COMMON_SKILL_VALID(SID_Pavise))
    [SID_Pavise] = {
        .desc = MSG_SKILL_Pavise,
        .icon = GFX_SkillIcon_Pavise,
    },
#endif

#if (defined(SID_Bane) && COMMON_SKILL_VALID(SID_Bane))
    [SID_Bane] = {
        .desc = MSG_SKILL_Bane,
        .icon = GFX_SkillIcon_Bane,
    },
#endif

#if (defined(SID_Mercy) && COMMON_SKILL_VALID(SID_Mercy))
    [SID_Mercy] = {
        .desc = MSG_SKILL_Mercy,
        .icon = GFX_SkillIcon_Mercy,
    },
#endif

#if (defined(SID_Aether) && COMMON_SKILL_VALID(SID_Aether))
    [SID_Aether] = {
        .desc = MSG_SKILL_Aether,
        .icon = GFX_SkillIcon_Aether,
    },
#endif

#if (defined(SID_Corona) && COMMON_SKILL_VALID(SID_Corona))
    [SID_Corona] = {
        .desc = MSG_SKILL_Corona,
        .icon = GFX_SkillIcon_Corona,
    },
#endif

#if (defined(SID_Luna) && COMMON_SKILL_VALID(SID_Luna))
    [SID_Luna] = {
        .desc = MSG_SKILL_Luna,
        .icon = GFX_SkillIcon_Luna,
    },
#endif

#if (defined(SID_Flare) && COMMON_SKILL_VALID(SID_Flare))
    [SID_Flare] = {
        .desc = MSG_SKILL_Flare,
        .icon = GFX_SkillIcon_Flare,
    },
#endif

#if (defined(SID_Sol) && COMMON_SKILL_VALID(SID_Sol))
    [SID_Sol] = {
        .desc = MSG_SKILL_Sol,
        .icon = GFX_SkillIcon_Sol,
    },
#endif

#if (defined(SID_DragonFang) && COMMON_SKILL_VALID(SID_DragonFang))
    [SID_DragonFang] = {
        .desc = MSG_SKILL_DragonFang,
        .icon = GFX_SkillIcon_DragonFang,
    },
#endif

#if (defined(SID_Foresight) && COMMON_SKILL_VALID(SID_Foresight))
    [SID_Foresight] = {
        .desc = MSG_SKILL_Foresight,
        .icon = GFX_SkillIcon_Foresight,
    },
#endif

#if (defined(SID_BlowDarting) && COMMON_SKILL_VALID(SID_BlowDarting))
    [SID_BlowDarting] = {
        .desc = MSG_SKILL_BlowDarting,
        .icon = GFX_SkillIcon_BlowDarting,
    },
#endif

#if (defined(SID_BlowDeath) && COMMON_SKILL_VALID(SID_BlowDeath))
    [SID_BlowDeath] = {
        .desc = MSG_SKILL_BlowDeath,
        .icon = GFX_SkillIcon_BlowDeath,
    },
#endif

#if (defined(SID_BlowArmored) && COMMON_SKILL_VALID(SID_BlowArmored))
    [SID_BlowArmored] = {
        .desc = MSG_SKILL_BlowArmored,
        .icon = GFX_SkillIcon_BlowArmored,
    },
#endif

#if (defined(SID_BlowFiendish) && COMMON_SKILL_VALID(SID_BlowFiendish))
    [SID_BlowFiendish] = {
        .desc = MSG_SKILL_BlowFiendish,
        .icon = GFX_SkillIcon_BlowFiendish,
    },
#endif

#if (defined(SID_BlowWarding) && COMMON_SKILL_VALID(SID_BlowWarding))
    [SID_BlowWarding] = {
        .desc = MSG_SKILL_BlowWarding,
        .icon = GFX_SkillIcon_BlowWarding,
    },
#endif

#if (defined(SID_BlowDuelist) && COMMON_SKILL_VALID(SID_BlowDuelist))
    [SID_BlowDuelist] = {
        .desc = MSG_SKILL_BlowDuelist,
        .icon = GFX_SkillIcon_BlowDuelist,
    },
#endif

#if (defined(SID_BlowUncanny) && COMMON_SKILL_VALID(SID_BlowUncanny))
    [SID_BlowUncanny] = {
        .desc = MSG_SKILL_BlowUncanny,
        .icon = GFX_SkillIcon_BlowUncanny,
    },
#endif

#if (defined(SID_BlowKilling) && COMMON_SKILL_VALID(SID_BlowKilling))
    [SID_BlowKilling] = {
        .desc = MSG_SKILL_BlowKilling,
        .icon = GFX_SkillIcon_BlowKilling,
    },
#endif

#if (defined(SID_StanceBracing) && COMMON_SKILL_VALID(SID_StanceBracing))
    [SID_StanceBracing] = {
        .desc = MSG_SKILL_StanceBracing,
        .icon = GFX_SkillIcon_StanceBracing,
    },
#endif

#if (defined(SID_StanceDarting) && COMMON_SKILL_VALID(SID_StanceDarting))
    [SID_StanceDarting] = {
        .desc = MSG_SKILL_StanceDarting,
        .icon = GFX_SkillIcon_StanceDarting,
    },
#endif

#if (defined(SID_StanceFierce) && COMMON_SKILL_VALID(SID_StanceFierce))
    [SID_StanceFierce] = {
        .desc = MSG_SKILL_StanceFierce,
        .icon = GFX_SkillIcon_StanceFierce,
    },
#endif

#if (defined(SID_StanceKestrel) && COMMON_SKILL_VALID(SID_StanceKestrel))
    [SID_StanceKestrel] = {
        .desc = MSG_SKILL_StanceKestrel,
        .icon = GFX_SkillIcon_StanceKestrel,
    },
#endif

#if (defined(SID_StanceMirror) && COMMON_SKILL_VALID(SID_StanceMirror))
    [SID_StanceMirror] = {
        .desc = MSG_SKILL_StanceMirror,
        .icon = GFX_SkillIcon_StanceMirror,
    },
#endif

#if (defined(SID_StanceReady) && COMMON_SKILL_VALID(SID_StanceReady))
    [SID_StanceReady] = {
        .desc = MSG_SKILL_StanceReady,
        .icon = GFX_SkillIcon_StanceReady,
    },
#endif

#if (defined(SID_StanceSteady) && COMMON_SKILL_VALID(SID_StanceSteady))
    [SID_StanceSteady] = {
        .desc = MSG_SKILL_StanceSteady,
        .icon = GFX_SkillIcon_StanceSteady,
    },
#endif

#if (defined(SID_StanceSturdy) && COMMON_SKILL_VALID(SID_StanceSturdy))
    [SID_StanceSturdy] = {
        .desc = MSG_SKILL_StanceSturdy,
        .icon = GFX_SkillIcon_StanceSturdy,
    },
#endif

#if (defined(SID_StanceSwift) && COMMON_SKILL_VALID(SID_StanceSwift))
    [SID_StanceSwift] = {
        .desc = MSG_SKILL_StanceSwift,
        .icon = GFX_SkillIcon_StanceSwift,
    },
#endif

#if (defined(SID_StanceWarding) && COMMON_SKILL_VALID(SID_StanceWarding))
    [SID_StanceWarding] = {
        .desc = MSG_SKILL_StanceWarding,
        .icon = GFX_SkillIcon_StanceWarding,
    },
#endif

#if (defined(SID_RangeBonusBMag1) && COMMON_SKILL_VALID(SID_RangeBonusBMag1))
    [SID_RangeBonusBMag1] = {
        .desc = MSG_SKILL_RangeBonusBMag1,
        .icon = GFX_SkillIcon_RangeBonusBMag1,
    },
#endif

#if (defined(SID_RangeBonusBMag2) && COMMON_SKILL_VALID(SID_RangeBonusBMag2))
    [SID_RangeBonusBMag2] = {
        .desc = MSG_SKILL_RangeBonusBMag2,
        .icon = GFX_SkillIcon_RangeBonusBMag2,
    },
#endif

#if (defined(SID_RangeBonusBow1) && COMMON_SKILL_VALID(SID_RangeBonusBow1))
    [SID_RangeBonusBow1] = {
        .desc = MSG_SKILL_RangeBonusBow1,
        .icon = GFX_SkillIcon_RangeBonusBow1,
    },
#endif

#if (defined(SID_RangeBonusBow2) && COMMON_SKILL_VALID(SID_RangeBonusBow2))
    [SID_RangeBonusBow2] = {
        .desc = MSG_SKILL_RangeBonusBow2,
        .icon = GFX_SkillIcon_RangeBonusBow2,
    },
#endif

#if (defined(SID_RunningStart) && COMMON_SKILL_VALID(SID_RunningStart))
    [SID_RunningStart] = {
        .desc = MSG_SKILL_RunningStart,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Canto) && COMMON_SKILL_VALID(SID_Canto))
    [SID_Canto] = {
        .desc = MSG_SKILL_Canto,
        .icon = GFX_SkillIcon_Canto,
    },
#endif

#if (defined(SID_CantoPlus) && COMMON_SKILL_VALID(SID_CantoPlus))
    [SID_CantoPlus] = {
        .desc = MSG_SKILL_CantoPlus,
        .icon = GFX_SkillIcon_CantoPlus,
    },
#endif

#if (defined(SID_AlertStance) && COMMON_SKILL_VALID(SID_AlertStance))
    [SID_AlertStance] = {
        .desc = MSG_SKILL_AlertStance,
        .icon = GFX_SkillIcon_AlertStance,
    },
#endif

#if (defined(SID_AlertStancePlus) && COMMON_SKILL_VALID(SID_AlertStancePlus))
    [SID_AlertStancePlus] = {
        .desc = MSG_SKILL_AlertStancePlus,
        .icon = GFX_SkillIcon_AlertStancePlus,
    },
#endif

#if (defined(SID_Galeforce) && COMMON_SKILL_VALID(SID_Galeforce))
    [SID_Galeforce] = {
        .desc = MSG_SKILL_Galeforce,
        .icon = GFX_SkillIcon_Galeforce,
    },
#endif

#if (defined(SID_COMBAT_Galeforce) && COMMON_SKILL_VALID(SID_COMBAT_Galeforce))
    [SID_COMBAT_Galeforce] = {
        .desc = MSG_SKILL_COMBAT_Galeforce,
        .icon = GFX_SkillIcon_Galeforce,
    },
#endif

#if (defined(SID_SavageBlow) && COMMON_SKILL_VALID(SID_SavageBlow))
    [SID_SavageBlow] = {
        .desc = MSG_SKILL_SavageBlow,
        .icon = GFX_SkillIcon_SavageBlow,
    },
#endif

#if (defined(SID_BreathOfLife) && COMMON_SKILL_VALID(SID_BreathOfLife))
    [SID_BreathOfLife] = {
        .desc = MSG_SKILL_BreathOfLife,
        .icon = GFX_SkillIcon_BreathOfLife,
    },
#endif

#if (defined(SID_Thunderstorm) && COMMON_SKILL_VALID(SID_Thunderstorm))
    [SID_Thunderstorm] = {

        .desc = MSG_SKILL_Thunderstorm,
        .icon = GFX_SkillIcon_Thunderstorm,
    },
#endif

#if (defined(SID_PosReturn) && COMMON_SKILL_VALID(SID_PosReturn))
    [SID_PosReturn] = {
        .desc = MSG_SKILL_PosReturn,
        .icon = GFX_SkillIcon_PosReturn,
    },
#endif

#if (defined(SID_Lunge) && COMMON_SKILL_VALID(SID_Lunge))
    [SID_Lunge] = {
        .desc = MSG_SKILL_Lunge,
        .icon = GFX_SkillIcon_Lunge,
    },
#endif

#if (defined(SID_Renewal) && COMMON_SKILL_VALID(SID_Renewal))
    [SID_Renewal] = {
        .desc = MSG_SKILL_Renewal,
        .icon = GFX_SkillIcon_Renewal,
    },
#endif

#if (defined(SID_RenewalPlus) && COMMON_SKILL_VALID(SID_Renewallus))
    [SID_RenewalPlus] = {
        .desc = MSG_SKILL_RenewalPlus,
        .icon = GFX_SkillIcon_RenewalPlus,
    },
#endif

#if (defined(SID_Imbue) && COMMON_SKILL_VALID(SID_Imbue))
    [SID_Imbue] = {
        .desc = MSG_SKILL_Imbue,
        .icon = GFX_SkillIcon_Imbue,
    },
#endif

#if (defined(SID_Forager) && COMMON_SKILL_VALID(SID_Forager))
    [SID_Forager] = {
        .desc = MSG_SKILL_Forager,
        .icon = GFX_SkillIcon_Forager,
    },
#endif

#if (defined(SID_Anathema) && COMMON_SKILL_VALID(SID_Anathema))
    [SID_Anathema] = {
        .desc = MSG_SKILL_Anathema,
        .icon = GFX_SkillIcon_Anathema,
    },
#endif

#if (defined(SID_Bond) && COMMON_SKILL_VALID(SID_Bond))
    [SID_Bond] = {
        .desc = MSG_SKILL_Bond,
        .icon = GFX_SkillIcon_Bond,
    },
#endif

#if (defined(SID_Charm) && COMMON_SKILL_VALID(SID_Charm))
    [SID_Charm] = {
        .desc = MSG_SKILL_Charm,
        .icon = GFX_SkillIcon_Charm,
    },
#endif

#if (defined(SID_Intimidate) && COMMON_SKILL_VALID(SID_Intimidate))
    [SID_Intimidate] = {
        .desc = MSG_SKILL_Intimidate,
        .icon = GFX_SkillIcon_Intimidate,
    },
#endif

#if (defined(SID_Tantivy) && COMMON_SKILL_VALID(SID_Tantivy))
    [SID_Tantivy] = {
        .desc = MSG_SKILL_Tantivy,
        .icon = GFX_SkillIcon_Tantivy,
    },
#endif

#if (defined(SID_Focus) && COMMON_SKILL_VALID(SID_Focus))
    [SID_Focus] = {
        .desc = MSG_SKILL_Focus,
        .icon = GFX_SkillIcon_Focus,
    },
#endif

#if (defined(SID_Hex) && COMMON_SKILL_VALID(SID_Hex))
    [SID_Hex] = {
        .desc = MSG_SKILL_Hex,
        .icon = GFX_SkillIcon_Hex,
    },
#endif

#if (defined(SID_Infiltrator) && COMMON_SKILL_VALID(SID_Infiltrator))
    [SID_Infiltrator] = {
        .desc = MSG_SKILL_Infiltrator,
        .icon = GFX_SkillIcon_Infiltrator,
    },
#endif

#if (defined(SID_Inspiration) && COMMON_SKILL_VALID(SID_Inspiration))
    [SID_Inspiration] = {
        .desc = MSG_SKILL_Inspiration,
        .icon = GFX_SkillIcon_Inspiration,
    },
#endif

#if (defined(SID_DivinelyInspiring) && COMMON_SKILL_VALID(SID_DivinelyInspiring))
    [SID_DivinelyInspiring] = {
        .desc = MSG_SKILL_DivinelyInspiring,
        .icon = GFX_SkillIcon_DivinelyInspiring,
    },
#endif

#if (defined(SID_VoiceOfPeace) && COMMON_SKILL_VALID(SID_VoiceOfPeace))
    [SID_VoiceOfPeace] = {
        .desc = MSG_SKILL_VoiceOfPeace,
        .icon = GFX_SkillIcon_VoiceOfPeace,
    },
#endif

#if (defined(SID_PowHone) && COMMON_SKILL_VALID(SID_PowHone))
    [SID_PowHone] = {

        .desc = MSG_SKILL_PowHone,
        .icon = GFX_SkillIcon_HonePow
    },
#endif

#if (defined(SID_MagHone) && COMMON_SKILL_VALID(SID_MagHone))
    [SID_MagHone] = {

        .desc = MSG_SKILL_MagHone,
        .icon = GFX_SkillIcon_HoneMag
    },
#endif

#if (defined(SID_SklHone) && COMMON_SKILL_VALID(SID_SklHone))
    [SID_SklHone] = {

        .desc = MSG_SKILL_SklHone,
        .icon = GFX_SkillIcon_HoneSkl
    },
#endif

#if (defined(SID_SpdHone) && COMMON_SKILL_VALID(SID_SpdHone))
    [SID_SpdHone] = {

        .desc = MSG_SKILL_SpdHone,
        .icon = GFX_SkillIcon_HoneSpd
    },
#endif

#if (defined(SID_LckHone) && COMMON_SKILL_VALID(SID_LckHone))
    [SID_LckHone] = {

        .desc = MSG_SKILL_LckHone,
        .icon = GFX_SkillIcon_HoneLuk
    },
#endif

#if (defined(SID_DefHone) && COMMON_SKILL_VALID(SID_DefHone))
    [SID_DefHone] = {

        .desc = MSG_SKILL_DefHone,
        .icon = GFX_SkillIcon_HoneDef
    },
#endif

#if (defined(SID_ResHone) && COMMON_SKILL_VALID(SID_ResHone))
    [SID_ResHone] = {

        .desc = MSG_SKILL_ResHone,
        .icon = GFX_SkillIcon_HoneRes
    },
#endif

#if (defined(SID_MovHone) && COMMON_SKILL_VALID(SID_MovHone))
    [SID_MovHone] = {

        .desc = MSG_SKILL_MovHone,
        .icon = GFX_SkillIcon_HoneMov
    },
#endif

#if (defined(SID_HoneChaos) && COMMON_SKILL_VALID(SID_HoneChaos))
    [SID_HoneChaos] = {
        .desc = MSG_SKILL_HoneChaos,
        .icon = GFX_SkillIcon_HoneChaos
    },
#endif

#if (defined(SID_BattleRange_Todo1) && COMMON_SKILL_VALID(SID_BattleRange_Todo1))
    [SID_BattleRange_Todo1] = {
        .desc = MSG_SKILL_BattleRange1,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_BattleRange_Todo2) && COMMON_SKILL_VALID(SID_BattleRange_Todo2))
    [SID_BattleRange_Todo2] = {
        .desc = MSG_SKILL_BattleRange2,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_BattleRange_Todo3) && COMMON_SKILL_VALID(SID_BattleRange_Todo3))
    [SID_BattleRange_Todo3] = {
        .desc = MSG_SKILL_BattleRange3,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Steal) && COMMON_SKILL_VALID(SID_Steal))
    [SID_Steal] = {
        .desc = MSG_SKILL_Steal,
        .icon = GFX_SkillIcon_Steal,
    },
#endif

#if (defined(SID_HealingFocus) && COMMON_SKILL_VALID(SID_HealingFocus))
    [SID_HealingFocus] = {
        .desc = MSG_SKILL_HealingFocus,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Blossom) && COMMON_SKILL_VALID(SID_Blossom))
    [SID_Blossom] = {
        .desc = MSG_SKILL_Blossom,
        .icon = GFX_SkillIcon_Blossom,
    },
#endif

#if (defined(SID_Paragon) && COMMON_SKILL_VALID(SID_Paragon))
    [SID_Paragon] = {
        .desc = MSG_SKILL_Paragon,
        .icon = GFX_SkillIcon_Paragon,
    },
#endif

#if (defined(SID_VoidCurse) && COMMON_SKILL_VALID(SID_VoidCurse))
    [SID_VoidCurse] = {
        .desc = MSG_SKILL_VoidCurse,
        .icon = GFX_SkillIcon_VoidCurse,
    },
#endif

#if (defined(SID_Aptitude) && COMMON_SKILL_VALID(SID_Aptitude))
    [SID_Aptitude] = {
        .desc = MSG_SKILL_Aptitude,
        .icon = GFX_SkillIcon_Aptitude,
    },
#endif

#if (defined(SID_Peacebringer) && COMMON_SKILL_VALID(SID_VoiceOfPeace))
    [SID_Peacebringer] = {
        .desc = MSG_SKILL_Peacebringer,
        .icon = GFX_SkillIcon_Peacebringer,
    },
#endif

#if (defined(SID_LEGEND_MiracleAtk) && COMMON_SKILL_VALID(SID_LEGEND_MiracleAtk))
    [SID_LEGEND_MiracleAtk] = {
        .desc = MSG_SKILL_LEGEND_MiracleAtk,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_LEGEND_MiracleAvo) && COMMON_SKILL_VALID(SID_LEGEND_MiracleAvo))
    [SID_LEGEND_MiracleAvo] = {
        .desc = MSG_SKILL_LEGEND_MiracleAvo,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_LEGEND_MiracleDef) && COMMON_SKILL_VALID(SID_LEGEND_MiracleDef))
    [SID_LEGEND_MiracleDef] = {
        .desc = MSG_SKILL_LEGEND_MiracleDef,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_LEGEND_4) && COMMON_SKILL_VALID(SID_LEGEND_4))
    [SID_LEGEND_4] = {
        .desc = MSG_WIP,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_LEGEND_5) && COMMON_SKILL_VALID(SID_LEGEND_5))
    [SID_LEGEND_5] = {
        .desc = MSG_WIP,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Frenzy) && COMMON_SKILL_VALID(SID_Frenzy))
    [SID_Frenzy] = {
        .desc = MSG_SKILL_Frenzy,
        .icon = GFX_SkillIcon_Frenzy,
    },
#endif

#if (defined(SID_WonderGuard) && COMMON_SKILL_VALID(SID_WonderGuard))
    [SID_WonderGuard] = {

        .desc = MSG_SKILL_WonderGuard,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_PoisonPoint) && COMMON_SKILL_VALID(SID_PoisonPoint))
    [SID_PoisonPoint] = {

        .desc = MSG_SKILL_PoisonPoint,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Merciless) && COMMON_SKILL_VALID(SID_Merciless))
    [SID_Merciless] = {
        .desc = MSG_SKILL_Merciless,
        .icon = GFX_SkillIcon_Merciless,
    },
#endif

#if (defined(SID_CriticalPierce) && COMMON_SKILL_VALID(SID_CriticalPierce))
    [SID_CriticalPierce] = {
        .desc = MSG_SKILL_CriticalPierce,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_KillingMachine) && COMMON_SKILL_VALID(SID_KillingMachine))
    [SID_KillingMachine] = {

        .desc = MSG_SKILL_KillingMachine,
        .icon = GFX_SkillIcon_KillingMachine,
    },
#endif

#if (defined(SID_HeavyStrikes) && COMMON_SKILL_VALID(SID_HeavyStrikes))
    [SID_HeavyStrikes] = {

        .desc = MSG_SKILL_HeavyStrikes,
        .icon = GFX_SkillIcon_HeavyStrikes,
    },
#endif

#if (defined(SID_QuickBurn) && COMMON_SKILL_VALID(SID_QuickBurn))
    [SID_QuickBurn] = {
        .desc = MSG_SKILL_QuickBurn,
        .icon = GFX_SkillIcon_QuickBurn,
    },
#endif

#if (defined(SID_SlowBurn) && COMMON_SKILL_VALID(SID_SlowBurn))
    [SID_SlowBurn] = {
        .desc = MSG_SKILL_SlowBurn,
        .icon = GFX_SkillIcon_SlowBurn,
    },
#endif

#if (defined(SID_StanceSpectrum) && COMMON_SKILL_VALID(SID_StanceSpectrum))
    [SID_StanceSpectrum] = {

        .desc = MSG_SKILL_StanceSpectrum,
        .icon = GFX_SkillIcon_StanceSpectrum,
    },
#endif

#if (defined(SID_Technician) && COMMON_SKILL_VALID(SID_Technician))
    [SID_Technician] = {
        .desc = MSG_SKILL_Technician,
        .icon = GFX_SkillIcon_Technician,
    },
#endif

#if (defined(SID_CatchingUp) && COMMON_SKILL_VALID(SID_CatchingUp))
    [SID_CatchingUp] = {
        .desc = MSG_SKILL_CatchingUp,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_BloodTide) && COMMON_SKILL_VALID(SID_BloodTide))
    [SID_BloodTide] = {
        .desc = MSG_SKILL_BloodTide,
        .icon = GFX_SkillIcon_BloodTide,
    },
#endif

#if (defined(SID_WhitePool) && COMMON_SKILL_VALID(SID_WhitePool))
    [SID_WhitePool] = {
        .desc = MSG_SKILL_WhitePool,
        .icon = GFX_SkillIcon_WhitePool,
    },
#endif

#if (defined(SID_NightTide) && COMMON_SKILL_VALID(SID_NightTide))
    [SID_NightTide] = {
        .desc = MSG_SKILL_NightTide,
        .icon = GFX_SkillIcon_NightTide,
    },
#endif

#if (defined(SID_DriveStr) && COMMON_SKILL_VALID(SID_DriveStr))
    [SID_DriveStr] = {
        .desc = MSG_SKILL_DriveStr,
        .icon = GFX_SkillIcon_DriveStr,
    },
#endif

#if (defined(SID_DriveMag) && COMMON_SKILL_VALID(SID_DriveMag))
    [SID_DriveMag] = {
        .desc = MSG_SKILL_DriveMag,
        .icon = GFX_SkillIcon_DriveMag,
    },
#endif

#if (defined(SID_DriveSpd) && COMMON_SKILL_VALID(SID_DriveSpd))
    [SID_DriveSpd] = {
        .desc = MSG_SKILL_DriveSpd,
        .icon = GFX_SkillIcon_DriveSpd,
    },
#endif

#if (defined(SID_DriveDef) && COMMON_SKILL_VALID(SID_DriveDef))
    [SID_DriveDef] = {
        .desc = MSG_SKILL_DriveDef,
        .icon = GFX_SkillIcon_DriveDef,
    },
#endif

#if (defined(SID_DriveRes) && COMMON_SKILL_VALID(SID_DriveRes))
    [SID_DriveRes] = {
        .desc = MSG_SKILL_DriveRes,
        .icon = GFX_SkillIcon_DriveRes,
    },
#endif

#if (defined(SID_Charisma) && COMMON_SKILL_VALID(SID_Charisma))
    [SID_Charisma] = {
        .desc = MSG_SKILL_Charisma,
        .icon = GFX_SkillIcon_Charisma,
    },
#endif

#if (defined(SID_LilysPoise) && COMMON_SKILL_VALID(SID_LilysPoise))
    [SID_LilysPoise] = {
        .desc = MSG_SKILL_LilysPoise,
        .icon = GFX_SkillIcon_LilysPoise,
    },
#endif

#if (defined(SID_Daunt) && COMMON_SKILL_VALID(SID_Daunt))
    [SID_Daunt] = {
        .desc = MSG_SKILL_Daunt,
        .icon = GFX_SkillIcon_Daunt,
    },
#endif

#if (defined(SID_SpurStr) && COMMON_SKILL_VALID(SID_SpurStr))
    [SID_SpurStr] = {
        .desc = MSG_SKILL_SpurStr,
        .icon = GFX_SkillIcon_SpurStr,
    },
#endif

#if (defined(SID_SpurMag) && COMMON_SKILL_VALID(SID_SpurMag))
    [SID_SpurMag] = {
        .desc = MSG_SKILL_SpurMag,
        .icon = GFX_SkillIcon_SpurMag,
    },
#endif

#if (defined(SID_SpurDef) && COMMON_SKILL_VALID(SID_SpurDef))
    [SID_SpurDef] = {
        .desc = MSG_SKILL_SpurDef,
        .icon = GFX_SkillIcon_SpurDef,
    },
#endif

#if (defined(SID_SpurRes) && COMMON_SKILL_VALID(SID_SpurRes))
    [SID_SpurRes] = {
        .desc = MSG_SKILL_SpurRes,
        .icon = GFX_SkillIcon_SpurRes,
    },
#endif

#if (defined(SID_SpurSpd) && COMMON_SKILL_VALID(SID_SpurSpd))
    [SID_SpurSpd] = {
        .desc = MSG_SKILL_SpurSpd,
        .icon = GFX_SkillIcon_SpurSpd,
    },
#endif

#if (defined(SID_BattleVeteran) && COMMON_SKILL_VALID(SID_BattleVeteran))
    [SID_BattleVeteran] = {

        .desc = MSG_SKILL_BattleVeteran,
        .icon = GFX_SkillIcon_BattleVeteran,
    },
#endif

#if (defined(SID_Gentilhomme) && COMMON_SKILL_VALID(SID_Gentilhomme))
    [SID_Gentilhomme] = {
        .desc = MSG_SKILL_Gentilhomme,
        .icon = GFX_SkillIcon_Gentilhomme,
    },
#endif

#if (defined(SID_Demoiselle) && COMMON_SKILL_VALID(SID_Demoiselle))
    [SID_Demoiselle] = {
        .desc = MSG_SKILL_Demoiselle,
        .icon = GFX_SkillIcon_Demoiselle,
    },
#endif

#if (defined(SID_MaleficAura) && (SID_MaleficAura < MAX_SKILL_NUM)) 
    [SID_MaleficAura] = {
        .desc = MSG_SKILL_MaleficAura,
        .icon = GFX_SkillIcon_MaleficAura,
      },
#endif

#if (defined(SID_Solidarity) && COMMON_SKILL_VALID(SID_Solidarity))
    [SID_Solidarity] = {
        .desc = MSG_SKILL_Solidarity,
        .icon = GFX_SkillIcon_Solidarity,
    },
#endif

#if (defined(SID_StoneBody) && COMMON_SKILL_VALID(SID_StoneBody))
    [SID_StoneBody] = {
        .desc = MSG_SKILL_StoneBody,
        .icon = GFX_SkillIcon_StoneBody,
    },
#endif

#if (defined(SID_Chivalry) && COMMON_SKILL_VALID(SID_Chivalry))
    [SID_Chivalry] = {
        .desc = MSG_SKILL_Chivalry,
        .icon = GFX_SkillIcon_Chivalry,
    },
#endif

#if (defined(SID_Pragmatic) && COMMON_SKILL_VALID(SID_Pragmatic))
    [SID_Pragmatic] = {
        .desc = MSG_SKILL_Pragmatic,
        .icon = GFX_SkillIcon_Pragmatic,
    },
#endif

#if (defined(SID_WindDisciple) && COMMON_SKILL_VALID(SID_WindDisciple))
    [SID_WindDisciple] = {
        .desc = MSG_SKILL_WindDisciple,
        .icon = GFX_SkillIcon_WindDisciple,
    },
#endif

#if (defined(SID_Perfectionist) && COMMON_SKILL_VALID(SID_Perfectionist))
    [SID_Perfectionist] = {
        .desc = MSG_SKILL_Perfectionist,
        .icon = GFX_SkillIcon_Perfectionist,
    },
#endif

#if (defined(SID_CriticalForce) && COMMON_SKILL_VALID(SID_CriticalForce))
    [SID_CriticalForce] = {

        .desc = MSG_SKILL_CriticalForce,
        .icon = GFX_SkillIcon_CriticalForce,
    },
#endif

#if (defined(SID_StrongRiposte) && COMMON_SKILL_VALID(SID_StrongRiposte))
    [SID_StrongRiposte] = {

        .desc = MSG_SKILL_StrongRiposte,
        .icon = GFX_SkillIcon_StrongRiposte,
    },
#endif

#if (defined(SID_Patience) && COMMON_SKILL_VALID(SID_Patience))
    [SID_Patience] = {
        .desc = MSG_SKILL_Patience,
        .icon = GFX_SkillIcon_Patience,
    },
#endif

#if (defined(SID_Pursuit) && COMMON_SKILL_VALID(SID_Pursuit))
    [SID_Pursuit] = {
        .desc = MSG_SKILL_Pursuit,
        .icon = GFX_SkillIcon_Pursuit,
    },
#endif

#if (defined(SID_DragonSkin) && COMMON_SKILL_VALID(SID_DragonSkin))
    [SID_DragonSkin] = {

        .desc = MSG_SKILL_DragonSkin,
        .icon = GFX_SkillIcon_DragonSkin,
    },
#endif

#if (defined(SID_Hawkeye) && COMMON_SKILL_VALID(SID_Hawkeye))
    [SID_Hawkeye] = {
        .desc = MSG_SKILL_Hawkeye,
        .icon = GFX_SkillIcon_Hawkeye,
    },
#endif

#if (defined(SID_MagicEye) && COMMON_SKILL_VALID(SID_MagicEye))
    [SID_MagicEye] = {
        .desc = MSG_SKILL_MagicEye,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_KeenFighter) && COMMON_SKILL_VALID(SID_KeenFighter))
    [SID_KeenFighter] = {

        .desc = MSG_SKILL_KeenFighter,
        .icon = GFX_SkillIcon_KeenFighter,
    },
#endif

#if (defined(SID_FireBoost) && COMMON_SKILL_VALID(SID_FireBoost))
    [SID_FireBoost] = {
        .desc = MSG_SKILL_FireBoost,
        .icon = GFX_SkillIcon_FireBoost,
    },
#endif

#if (defined(SID_WindBoost) && COMMON_SKILL_VALID(SID_WindBoost))
    [SID_WindBoost] = {
        .desc = MSG_SKILL_WindBoost,
        .icon = GFX_SkillIcon_WindBoost,
    },
#endif

#if (defined(SID_EarthBoost) && COMMON_SKILL_VALID(SID_EarthBoost))
    [SID_EarthBoost] = {
        .desc = MSG_SKILL_EarthBoost,
        .icon = GFX_SkillIcon_EarthBoost,
    },
#endif

#if (defined(SID_WaterBoost) && COMMON_SKILL_VALID(SID_WaterBoost))
    [SID_WaterBoost] = {
        .desc = MSG_SKILL_WaterBoost,
        .icon = GFX_SkillIcon_WaterBoost,
    },
#endif

#if (defined(SID_FieryBlood) && COMMON_SKILL_VALID(SID_FieryBlood))
    [SID_FieryBlood] = {

        .desc = MSG_SKILL_FieryBlood,
        .icon = GFX_SkillIcon_FieryBlood,
    },
#endif

#if (defined(SID_Colossus) && COMMON_SKILL_VALID(SID_Colossus))
    [SID_Colossus] = {
        .desc = MSG_SKILL_Colossus,
        .icon = GFX_SkillIcon_Colossus,
    },
#endif

#if (defined(SID_LightWeight) && COMMON_SKILL_VALID(SID_LightWeight))
    [SID_LightWeight] = {
        .desc = MSG_SKILL_LightWeight,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_EvenFooted) && COMMON_SKILL_VALID(SID_EvenFooted))
    [SID_EvenFooted] = {
        .desc = MSG_SKILL_EvenFooted,
        .icon = GFX_SkillIcon_EvenFooted,
    },
#endif

#if (defined(SID_QuickDraw) && COMMON_SKILL_VALID(SID_QuickDraw))
    [SID_QuickDraw] = {
        .desc = MSG_SKILL_QuickDraw,
        .icon = GFX_SkillIcon_QuickDraw,
    },
#endif

#if (defined(SID_ArcaneBlade) && COMMON_SKILL_VALID(SID_ArcaneBlade))
    [SID_ArcaneBlade] = {
        .desc = MSG_SKILL_ArcaneBlade,
        .icon = GFX_SkillIcon_ArcaneBlade,
    },
#endif

#if (defined(SID_ElbowRoom) && COMMON_SKILL_VALID(SID_ElbowRoom))
    [SID_ElbowRoom] = {
        .desc = MSG_SKILL_ElbowRoom,
        .icon = GFX_SkillIcon_ElbowRoom,
    },
#endif

#if (defined(SID_NaturalCover) && COMMON_SKILL_VALID(SID_NaturalCover))
    [SID_NaturalCover] = {

        .desc = MSG_SKILL_NaturalCover,
        .icon = GFX_SkillIcon_NaturalCover,
    },
#endif

#if (defined(SID_ChaosStyle) && COMMON_SKILL_VALID(SID_ChaosStyle))
    [SID_ChaosStyle] = {
        .desc = MSG_SKILL_ChaosStyle,
        .icon = GFX_SkillIcon_ChaosStyle,
    },
#endif

#if (defined(SID_PushDefense) && COMMON_SKILL_VALID(SID_PushDefense))
    [SID_PushDefense] = {

        .desc = MSG_SKILL_PushDefense,
        .icon = GFX_SkillIcon_PushDefense,
    },
#endif

#if (defined(SID_PushMagic) && COMMON_SKILL_VALID(SID_PushMagic))
    [SID_PushMagic] = {

        .desc = MSG_SKILL_PushMagic,
        .icon = GFX_SkillIcon_PushMagic,
    },
#endif

#if (defined(SID_PushResistance) && COMMON_SKILL_VALID(SID_PushResistance))
    [SID_PushResistance] = {

        .desc = MSG_SKILL_PushResistance,
        .icon = GFX_SkillIcon_PushResistance,
    },
#endif

#if (defined(SID_PushSkill) && COMMON_SKILL_VALID(SID_PushSkill))
    [SID_PushSkill] = {

        .desc = MSG_SKILL_PushSkill,
        .icon = GFX_SkillIcon_PushSkill,
    },
#endif

#if (defined(SID_PushSpeed) && COMMON_SKILL_VALID(SID_PushSpeed))
    [SID_PushSpeed] = {

        .desc = MSG_SKILL_PushSpeed,
        .icon = GFX_SkillIcon_PushSpeed,
    },
#endif

#if (defined(SID_PushStrength) && COMMON_SKILL_VALID(SID_PushStrength))
    [SID_PushStrength] = {

        .desc = MSG_SKILL_PushStrength,
        .icon = GFX_SkillIcon_PushStrength,
    },
#endif

#if (defined(SID_PushLuck) && COMMON_SKILL_VALID(SID_PushLuck))
    [SID_PushLuck] = {

        .desc = MSG_SKILL_PushLuck,
        .icon = GFX_SkillIcon_PushLuck,
    },
#endif

#if (defined(SID_PushMovement) && COMMON_SKILL_VALID(SID_PushMovement))
    [SID_PushMovement] = {

        .desc = MSG_SKILL_PushMovement,
        .icon = GFX_SkillIcon_PushMovement,
    },
#endif

#if (defined(SID_PushSpectrum) && COMMON_SKILL_VALID(SID_PushSpectrum))
    [SID_PushSpectrum] = {

        .desc = MSG_SKILL_PushSpectrum,
        .icon = GFX_SkillIcon_PushSpectrum,
    },
#endif

#if (defined(SID_Charge) && COMMON_SKILL_VALID(SID_Charge))
    [SID_Charge] = {
        .desc = MSG_SKILL_Charge,
        .icon = GFX_SkillIcon_Charge,
    },
#endif

#if (defined(SID_ChargePlus) && COMMON_SKILL_VALID(SID_ChargePlus))
    [SID_ChargePlus] = {
        .desc = MSG_SKILL_ChargePlus,
        .icon = GFX_SkillIcon_ChargePlus,
    },
#endif

#if (defined(SID_Wrath) && COMMON_SKILL_VALID(SID_Wrath))
    [SID_Wrath] = {
        .desc = MSG_SKILL_Wrath,
        .icon = GFX_SkillIcon_Wrath,
    },
#endif

#if (defined(SID_WrathPlus) && COMMON_SKILL_VALID(SID_WrathPlus))
    [SID_WrathPlus] = {
        .desc = MSG_SKILL_WrathPlus,
        .icon = GFX_SkillIcon_WrathPlus,
    },
#endif

#if (defined(SID_Vigilance) && COMMON_SKILL_VALID(SID_Vigilance))
    [SID_Vigilance] = {
        .desc = MSG_SKILL_Vigilance,
        .icon = GFX_SkillIcon_Vigilance,
    },
#endif

#if (defined(SID_OutdoorFighter) && COMMON_SKILL_VALID(SID_OutdoorFighter))
    [SID_OutdoorFighter] = {

        .desc = MSG_SKILL_OutdoorFighter,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_DancingBlade) && COMMON_SKILL_VALID(SID_DancingBlade))
    [SID_DancingBlade] = {

        .desc = MSG_SKILL_DancingBlade,
        .icon = GFX_SkillIcon_DancingBlade,
    },
#endif

#if (defined(SID_KnightAspirant) && COMMON_SKILL_VALID(SID_KnightAspirant))
    [SID_KnightAspirant] = {

        .desc = MSG_SKILL_KnightAspirant,
        .icon = GFX_SkillIcon_KnightAspirant,
    },
#endif

#if (defined(SID_Outrider) && COMMON_SKILL_VALID(SID_Outrider))
    [SID_Outrider] = {
        .desc = MSG_SKILL_Outrider,
        .icon = GFX_SkillIcon_Outrider
    },
#endif

#if (defined(SID_EvenRhythm) && COMMON_SKILL_VALID(SID_EvenRhythm))
    [SID_EvenRhythm] = {
        .desc = MSG_SKILL_EvenRhythm,
        .icon = GFX_SkillIcon_EvenRhythm
    },
#endif

#if (defined(SID_OddRhythm) && COMMON_SKILL_VALID(SID_OddRhythm))
    [SID_OddRhythm] = {
        .desc = MSG_SKILL_OddRhythm,
        .icon = GFX_SkillIcon_OddRhythm
    },
#endif

#if (defined(SID_OddFooted) && COMMON_SKILL_VALID(SID_OddFooted))
    [SID_OddFooted] = {
        .desc = MSG_SKILL_OddFooted,
        .icon = GFX_SkillIcon_OddFooted,
    },
#endif

#if (defined(SID_Corrosion) && COMMON_SKILL_VALID(SID_Corrosion))
    [SID_Corrosion] = {
        .desc = MSG_SKILL_Corrosion,
        .icon = GFX_SkillIcon_Corrosion,
    },
#endif

#if (defined(SID_NoGuard) && COMMON_SKILL_VALID(SID_NoGuard))
    [SID_NoGuard] = {
        .desc = MSG_SKILL_NoGuard,
        .icon = GFX_SkillIcon_NoGuard,
    },
#endif


#if (defined(SID_NoGuardPlus) && COMMON_SKILL_VALID(SID_NoGuardPlus))
    [SID_NoGuardPlus] = {
        .desc = MSG_SKILL_NoGuardPlus,
        .icon = GFX_SkillIcon_NoGuardPlus,
    },
#endif

#if (defined(SID_Puissance) && COMMON_SKILL_VALID(SID_Puissance))
    [SID_Puissance] = {
        .desc = MSG_SKILL_Puissance,
        .icon = GFX_SkillIcon_Puissance,
    },
#endif

#if (defined(SID_Prescience) && COMMON_SKILL_VALID(SID_Prescience))
    [SID_Prescience] = {
        .desc = MSG_SKILL_Prescience,
        .icon = GFX_SkillIcon_Prescience,
    },
#endif

#if (defined(SID_Resolve) && COMMON_SKILL_VALID(SID_Resolve))
    [SID_Resolve] = {
        .desc = MSG_SKILL_Resolve,
        .icon = GFX_SkillIcon_Resolve,
    },
#endif

#if (defined(SID_SilentPride) && COMMON_SKILL_VALID(SID_SilentPride))
    [SID_SilentPride] = {
        .desc = MSG_SKILL_SilentPride,
        .icon = GFX_SkillIcon_SilentPride,
    },
#endif

#if (defined(SID_RightfulKing) && COMMON_SKILL_VALID(SID_RightfulKing))
    [SID_RightfulKing] = {
        .desc = MSG_SKILL_RightfulKing,
        .icon = GFX_SkillIcon_RightfulKing,
    },
#endif

#if (defined(SID_RightfulGod) && COMMON_SKILL_VALID(SID_RightfulGod))
    [SID_RightfulGod] = {
        .desc = MSG_SKILL_RightfulGod,
        .icon = GFX_SkillIcon_RightfulGod,
    },
#endif

#if (defined(SID_RightfulArch) && COMMON_SKILL_VALID(SID_RightfulArch))
    [SID_RightfulArch] = {
        .desc = MSG_SKILL_RightfulArch,
        .icon = GFX_SkillIcon_RightfulArch,
    },
#endif

#if (defined(SID_Guts) && COMMON_SKILL_VALID(SID_Guts))
    [SID_Guts] = {
        .desc = MSG_SKILL_Guts,
        .icon = GFX_SkillIcon_Guts,
    },
#endif

#if (defined(SID_StrongCon) && COMMON_SKILL_VALID(SID_StrongCon))
    [SID_StrongCon] = {
        .desc = MSG_SKILL_StrongCon,
        .icon = GFX_SkillIcon_StrongCon,
    },
#endif

#if (defined(SID_Impale) && COMMON_SKILL_VALID(SID_Impale))
    [SID_Impale] = {
        .desc = MSG_SKILL_Impale,
        .icon = GFX_SkillIcon_Impale,
    },
#endif

#if (defined(SID_Hero) && COMMON_SKILL_VALID(SID_Hero))
    [SID_Hero] = {
        .desc = MSG_SKILL_Hero,
        .icon = GFX_SkillIcon_Hero,
    },
#endif

#if (defined(SID_Ignis) && COMMON_SKILL_VALID(SID_Ignis))
    [SID_Ignis] = {
        .desc = MSG_SKILL_Ignis,
        .icon = GFX_SkillIcon_Ignis,
    },
#endif

#if (defined(SID_HolyAura) && COMMON_SKILL_VALID(SID_HolyAura))
    [SID_HolyAura] = {
        .desc = MSG_SKILL_HolyAura,
        .icon = GFX_SkillIcon_HolyAura,
    },
#endif

#if (defined(SID_Loyalty) && COMMON_SKILL_VALID(SID_Loyalty))
    [SID_Loyalty] = {
        .desc = MSG_SKILL_Loyalty,
        .icon = GFX_SkillIcon_Loyalty,
    },
#endif

#if (defined(SID_TowerShield) && COMMON_SKILL_VALID(SID_TowerShield))
    [SID_TowerShield] = {
        .desc = MSG_SKILL_TowerShield,
        .icon = GFX_SkillIcon_TowerShield,
    },
#endif

#if (defined(SID_StunningSmile) && COMMON_SKILL_VALID(SID_StunningSmile))
    [SID_StunningSmile] = {

        .desc = MSG_SKILL_StunningSmile,
        .icon = GFX_SkillIcon_StunningSmile,
    },
#endif

#if (defined(SID_Trample) && COMMON_SKILL_VALID(SID_Trample))
    [SID_Trample] = {
        .desc = MSG_SKILL_Trample,
        .icon = GFX_SkillIcon_Trample,
    },
#endif

#if (defined(SID_Opportunist) && COMMON_SKILL_VALID(SID_Opportunist))
    [SID_Opportunist] = {
        .desc = MSG_SKILL_Opportunist,
        .icon = GFX_SkillIcon_Opportunist,
    },
#endif

#if (defined(SID_SuperLuck) && COMMON_SKILL_VALID(SID_SuperLuck))
    [SID_SuperLuck] = {
        .desc = MSG_SKILL_SuperLuck,
        .icon = GFX_SkillIcon_SuperLuck,
    },
#endif

#if (defined(SID_ShortShield) && COMMON_SKILL_VALID(SID_ShortShield))
    [SID_ShortShield] = {
        .desc = MSG_SKILL_ShortShield,
        .icon = GFX_SkillIcon_ShortShield,
    },
#endif

#if (defined(SID_Vanity) && COMMON_SKILL_VALID(SID_Vanity))
    [SID_Vanity] = {
        .desc = MSG_SKILL_Vanity,
        .icon = GFX_SkillIcon_Vanity,
    },
#endif

#if (defined(SID_DefenseBoost) && COMMON_SKILL_VALID(SID_DefenseBoost))
    [SID_DefenseBoost] = {

        .desc = MSG_SKILL_DefenseBoost,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_LuckBoost) && COMMON_SKILL_VALID(SID_LuckBoost))
    [SID_LuckBoost] = {

        .desc = MSG_SKILL_LuckBoost,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_MagicBoost) && COMMON_SKILL_VALID(SID_MagicBoost))
    [SID_MagicBoost] = {

        .desc = MSG_SKILL_MagicBoost,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_MoveBoost) && COMMON_SKILL_VALID(SID_MoveBoost))
    [SID_MoveBoost] = {

        .desc = MSG_SKILL_MoveBoost,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_ResistanceBoost) && COMMON_SKILL_VALID(SID_ResistanceBoost))
    [SID_ResistanceBoost] = {

        .desc = MSG_SKILL_ResistanceBoost,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_SkillBoost) && COMMON_SKILL_VALID(SID_SkillBoost))
    [SID_SkillBoost] = {

        .desc = MSG_SKILL_SkillBoost,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_SpeedBoost) && COMMON_SKILL_VALID(SID_SpeedBoost))
    [SID_SpeedBoost] = {

        .desc = MSG_SKILL_SpeedBoost,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_StrengthBoost) && COMMON_SKILL_VALID(SID_StrengthBoost))
    [SID_StrengthBoost] = {

        .desc = MSG_SKILL_StrengthBoost,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_SpectrumBoost) && COMMON_SKILL_VALID(SID_SpectrumBoost))
    [SID_SpectrumBoost] = {

        .desc = MSG_SKILL_SpectrumBoost,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Glacies) && COMMON_SKILL_VALID(SID_Glacies))
    [SID_Glacies] = {
        .desc = MSG_SKILL_Glacies,
        .icon = GFX_SkillIcon_Glacies,
    },
#endif

#if (defined(SID_Vengeance) && COMMON_SKILL_VALID(SID_Vengeance))
    [SID_Vengeance] = {
        .desc = MSG_SKILL_Vengeance,
        .icon = GFX_SkillIcon_Vengeance,
    },
#endif

#if (defined(SID_Deadeye) && COMMON_SKILL_VALID(SID_Deadeye))
    [SID_Deadeye] = {
        .desc = MSG_SKILL_Deadeye,
        .icon = GFX_SkillIcon_Deadeye,
    },
#endif

#if (defined(SID_AxeFaith) && COMMON_SKILL_VALID(SID_AxeFaith))
    [SID_AxeFaith] = {
        .desc = MSG_SKILL_AxeFaith,
        .icon = GFX_SkillIcon_AxeFaith,
    },
#endif

#if (defined(SID_RuinedBladePlus) && COMMON_SKILL_VALID(SID_RuinedBladePlus))
    [SID_RuinedBladePlus] = {

        .desc = MSG_SKILL_RuinedBladePlus,
        .icon = GFX_SkillIcon_RuinedBlade,
    },
#endif

#if (defined(SID_COMBAT_Grounder) && COMMON_SKILL_VALID(SID_COMBAT_Grounder))
    [SID_COMBAT_Grounder] = {
        .desc = MSG_SKILL_COMBAT_Grounder,
        .icon = GFX_CombatArtIcon_SwordArtAtk,
    },
#endif

#if (defined(SID_COMBAT_BaneOfMonsters) && COMMON_SKILL_VALID(SID_COMBAT_BaneOfMonsters))
    [SID_COMBAT_BaneOfMonsters] = {
        .desc = MSG_SKILL_COMBAT_BaneOfMonsters,
        .icon = GFX_CombatArtIcon_SwordArtAtk,
    },
#endif

#if (defined(SID_COMBAT_Hexblade) && COMMON_SKILL_VALID(SID_COMBAT_Hexblade))
    [SID_COMBAT_Hexblade] = {
        .desc = MSG_SKILL_COMBAT_Hexblade,
        .icon = GFX_CombatArtIcon_SwordArtMag,
    },
#endif

#if (defined(SID_COMBAT_FoudroyantStrike) && COMMON_SKILL_VALID(SID_COMBAT_FoudroyantStrike))
    [SID_COMBAT_FoudroyantStrike] = {
        .desc = MSG_SKILL_COMBAT_FoudroyantStrike,
        .icon = GFX_CombatArtIcon_SwordArtCrit,
    },
#endif

#if (defined(SID_COMBAT_TempestLance) && COMMON_SKILL_VALID(SID_COMBAT_TempestLance))
    [SID_COMBAT_TempestLance] = {
        .desc = MSG_SKILL_COMBAT_TempestLance,
        .icon = GFX_CombatArtIcon_LanceArtAtk,
    },
#endif

#if (defined(SID_COMBAT_SwiftStrikes) && COMMON_SKILL_VALID(SID_COMBAT_SwiftStrikes))
    [SID_COMBAT_SwiftStrikes] = {
        .desc = MSG_SKILL_COMBAT_SwiftStrikes,
        .icon = GFX_CombatArtIcon_LanceArtAtk,
    },
#endif

#if (defined(SID_COMBAT_FrozenLance) && COMMON_SKILL_VALID(SID_COMBAT_FrozenLance))
    [SID_COMBAT_FrozenLance] = {
        .desc = MSG_SKILL_COMBAT_FrozenLance,
        .icon = GFX_CombatArtIcon_LanceArtMag,
    },
#endif

#if (defined(SID_COMBAT_Vengeance) && COMMON_SKILL_VALID(SID_COMBAT_Vengeance))
    [SID_COMBAT_Vengeance] = {
        .desc = MSG_SKILL_COMBAT_Vengeance,
        .icon = GFX_CombatArtIcon_LanceArtCrit,
    },
#endif

#if (defined(SID_COMBAT_HelmSplitter) && COMMON_SKILL_VALID(SID_COMBAT_HelmSplitter))
    [SID_COMBAT_HelmSplitter] = {
        .desc = MSG_SKILL_COMBAT_HelmSplitter,
        .icon = GFX_CombatArtIcon_AxeArtAtk,
    },
#endif

#if (defined(SID_COMBAT_LightningAxe) && COMMON_SKILL_VALID(SID_COMBAT_LightningAxe))
    [SID_COMBAT_LightningAxe] = {
        .desc = MSG_SKILL_COMBAT_LightningAxe,
        .icon = GFX_CombatArtIcon_AxeArtMag,
    },
#endif

#if (defined(SID_COMBAT_WarMasterStrike) && COMMON_SKILL_VALID(SID_COMBAT_WarMasterStrike))
    [SID_COMBAT_WarMasterStrike] = {
        .desc = MSG_SKILL_COMBAT_WarMasterStrike,
        .icon = GFX_CombatArtIcon_AxeArtCrit,
    },
#endif

#if (defined(SID_COMBAT_CurvedShot) && COMMON_SKILL_VALID(SID_COMBAT_CurvedShot))
    [SID_COMBAT_CurvedShot] = {
        .desc = MSG_SKILL_COMBAT_CurvedShot,
        .icon = GFX_CombatArtIcon_BowArtAtk,
    },
#endif

#if (defined(SID_COMBAT_Deadeye) && COMMON_SKILL_VALID(SID_COMBAT_Deadeye))
    [SID_COMBAT_Deadeye] = {
        .desc = MSG_SKILL_COMBAT_Deadeye,
        .icon = GFX_CombatArtIcon_BowArtAtk,
    },
#endif

#if (defined(SID_COMBAT_Encloser) && COMMON_SKILL_VALID(SID_COMBAT_Encloser))
    [SID_COMBAT_Encloser] = {
        .desc = MSG_SKILL_COMBAT_Encloser,
        .icon = GFX_CombatArtIcon_BowArtDebuff,
    },
#endif

#if (defined(SID_COMBAT_EncloserPlus) && COMMON_SKILL_VALID(SID_COMBAT_EncloserPlus))
    [SID_COMBAT_EncloserPlus] = {
        .desc = MSG_SKILL_COMBAT_EncloserPlus,
        .icon = GFX_CombatArtIcon_BowArtDebuff,
    },
#endif

#if (defined(SID_COMBAT_MonsterBlast) && COMMON_SKILL_VALID(SID_COMBAT_MonsterBlast))
    [SID_COMBAT_MonsterBlast] = {
        .desc = MSG_SKILL_COMBAT_MonsterBlast,
        .icon = GFX_CombatArtIcon_BowArtCrit,
    },
#endif

#if (defined(SID_COMBAT_SchismShot) && COMMON_SKILL_VALID(SID_COMBAT_SchismShot))
    [SID_COMBAT_SchismShot] = {
        .desc = MSG_SKILL_COMBAT_SchismShot,
        .icon = GFX_CombatArtIcon_BowArtCrit,
    },
#endif

#if (defined(SID_COMBAT_BreakShot) && COMMON_SKILL_VALID(SID_COMBAT_BreakShot))
    [SID_COMBAT_BreakShot] = {
        .desc = MSG_SKILL_COMBAT_BreakShot,
        .icon = GFX_CombatArtIcon_BowArtDebuff,
    },
#endif

#if (defined(SID_COMBAT_BreakShotPlus) && COMMON_SKILL_VALID(SID_COMBAT_BreakShotPlus))
    [SID_COMBAT_BreakShotPlus] = {
        .desc = MSG_SKILL_COMBAT_BreakShotPlus,
        .icon = GFX_CombatArtIcon_BowArtDebuff,
    },
#endif

#if (defined(SID_COMBAT_WaningShot) && COMMON_SKILL_VALID(SID_COMBAT_WaningShot))
    [SID_COMBAT_WaningShot] = {
        .desc = MSG_SKILL_COMBAT_WaningShot,
        .icon = GFX_CombatArtIcon_BowArtDebuff,
    },
#endif

#if (defined(SID_COMBAT_WaningShotPlus) && COMMON_SKILL_VALID(SID_COMBAT_WaningShotPlus))
    [SID_COMBAT_WaningShotPlus] = {
        .desc = MSG_SKILL_COMBAT_WaningShotPlus,
        .icon = GFX_CombatArtIcon_BowArtDebuff,
    },
#endif

#if (defined(SID_COMBAT_HuntersVolley) && COMMON_SKILL_VALID(SID_COMBAT_HuntersVolley))
    [SID_COMBAT_HuntersVolley] = {
        .desc = MSG_SKILL_COMBAT_HuntersVolley,
        .icon = GFX_CombatArtIcon_BowArtAtk,
    },
#endif

#if (defined(SID_COMBAT_AstraStorm) && COMMON_SKILL_VALID(SID_COMBAT_AstraStorm))
    [SID_COMBAT_AstraStorm] = {
        .desc = MSG_SKILL_COMBAT_AstraStorm,
        .icon = GFX_CombatArtIcon_BowArtAtk,
    },
#endif

#if (defined(SID_GreatShield) && COMMON_SKILL_VALID(SID_GreatShield)) 
    [SID_GreatShield] = {
        .desc = MSG_SKILL_GreatShield,
        .icon = GFX_SkillIcon_GreatShield,
    },
#endif

#if (defined(SID_HoneCavalry) && COMMON_SKILL_VALID(SID_HoneCavalry))
    [SID_HoneCavalry] = {

        .desc = MSG_SKILL_HoneCavalry,
        .icon = GFX_SkillIcon_HoneCavalry
    },
#endif

#if (defined(SID_HoneFlier) && COMMON_SKILL_VALID(SID_HoneFlier))
    [SID_HoneFlier] = {

        .desc = MSG_SKILL_HoneFlier,
        .icon = GFX_SkillIcon_HoneFlier
    },
#endif

#if (defined(SID_HoneArmor) && COMMON_SKILL_VALID(SID_HoneArmor))
    [SID_HoneArmor] = {

        .desc = MSG_SKILL_HoneArmor,
        .icon = GFX_SkillIcon_HoneArmor
    },
#endif

#if (defined(SID_FortifyArmor) && COMMON_SKILL_VALID(SID_FortifyArmor))
    [SID_FortifyArmor] = {

        .desc = MSG_SKILL_FortifyArmor,
        .icon = GFX_SkillIcon_WIP
    },
#endif

#if (defined(SID_Shade) && COMMON_SKILL_VALID(SID_Shade))
    [SID_Shade] = {
        .desc = MSG_SKILL_Shade,
        .icon = GFX_SkillIcon_Shade,
    },
#endif

#if (defined(SID_ShadePlus) && COMMON_SKILL_VALID(SID_ShadePlus))
    [SID_ShadePlus] = {
        .desc = MSG_SKILL_ShadePlus,
        .icon = GFX_SkillIcon_ShadePlus,
    },
#endif

#if (defined(SID_Provoke) && COMMON_SKILL_VALID(SID_Provoke))
    [SID_Provoke] = {
        .desc = MSG_SKILL_Provoke,
        .icon = GFX_SkillIcon_Provoke,
    },
#endif

#if (defined(SID_Teleportation) && COMMON_SKILL_VALID(SID_Teleportation))
    [SID_Teleportation] = {

        .desc = MSG_SKILL_Teleportation,
        .icon = GFX_SkillIcon_Teleportation,
    },
#endif

#if (defined(SID_Dance) && COMMON_SKILL_VALID(SID_Dance))
    [SID_Dance] = {
        .desc = MSG_SKILL_Dance,
        .icon = GFX_SkillIcon_Dance,
    },
#endif

#if (defined(SID_LockTouch) && COMMON_SKILL_VALID(SID_LockTouch))
    [SID_LockTouch] = {
        .desc = MSG_SKILL_LockTouch,
        .icon = GFX_SkillIcon_LockTouch,
    },
#endif

#if (defined(SID_Summon) && COMMON_SKILL_VALID(SID_Summon))
    [SID_Summon] = {
        .desc = MSG_SKILL_Summon,
        .icon = GFX_SkillIcon_Summon,
    },
#endif

#if (defined(SID_SureShot) && COMMON_SKILL_VALID(SID_SureShot))
    [SID_SureShot] = {
        .desc = MSG_SKILL_SureShot,
        .icon = GFX_SkillIcon_SureShot,
    },
#endif

#if (defined(SID_Crit) && COMMON_SKILL_VALID(SID_Crit))
    [SID_Crit] = {
        .desc = MSG_SKILL_Crit,
        .icon = GFX_SkillIcon_Crit,
    },
#endif

#if (defined(SID_Lethality) && COMMON_SKILL_VALID(SID_Lethality))
    [SID_Lethality] = {
        .desc = MSG_SKILL_Lethality,
        .icon = GFX_SkillIcon_Lethality,
    },
#endif

#if (defined(SID_WatchfulEye) && COMMON_SKILL_VALID(SID_WatchfulEye))
    [SID_WatchfulEye] = {
        .desc = MSG_SKILL_WatchfulEye,
        .icon = GFX_SkillIcon_WatchfulEye,
    },
#endif

#if (defined(SID_InfinityEdge) && COMMON_SKILL_VALID(SID_InfinityEdge))
    [SID_InfinityEdge] = {
        .desc = MSG_SKILL_InfinityEdge,
        .icon = GFX_SkillIcon_InfinityEdge,
    },
#endif

#if (defined(SID_AversaNight) && COMMON_SKILL_VALID(SID_AversaNight))
    [SID_AversaNight] = {

        .desc = MSG_SKILL_DEBUFF_Aversa,
        .icon = GFX_SkillIcon_AversaNight,
    },
#endif

#if (defined(SID_Supply) && COMMON_SKILL_VALID(SID_Supply))
    [SID_Supply] = {
        .desc = MSG_SKILL_Supply,
        .icon = GFX_SkillIcon_Supply,
    },
#endif

#if (defined(SID_LightRune) && COMMON_SKILL_VALID(SID_LightRune))
    [SID_LightRune] = {
        .desc = MSG_SKILL_LightRune,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Mine) && COMMON_SKILL_VALID(SID_Mine))
    [SID_Mine] = {
        .desc = MSG_SKILL_Mine,
        .icon = GFX_SkillIcon_Mine,
    },
#endif

#if (defined(SID_Miracle) && COMMON_SKILL_VALID(SID_Miracle))
    [SID_Miracle] = {
        .desc = MSG_SKILL_Miracle,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Armsthrift) && COMMON_SKILL_VALID(SID_Armsthrift))
    [SID_Armsthrift] = {
        .desc = MSG_SKILL_Armsthrift,
        .icon = GFX_SkillIcon_Armsthrift,
    },
#endif

#if (defined(SID_HighGround) && COMMON_SKILL_VALID(SID_HighGround))
    [SID_HighGround] = {
        .desc = MSG_SKILL_HighGround,
        .icon = GFX_SkillIcon_HighGround,
    },
#endif

#if (defined(SID_Airlock) && COMMON_SKILL_VALID(SID_Airlock))
    [SID_Airlock] = {
        .desc = MSG_SKILL_Airlock,
        .icon = GFX_SkillIcon_Airlock,
    },
#endif

#if (defined(SID_Drought) && COMMON_SKILL_VALID(SID_Drought))
    [SID_Drought] = {
        .desc = MSG_SKILL_Drought,
        .icon = GFX_SkillIcon_Drought,
    },
#endif

#if (defined(SID_Drizzle) && COMMON_SKILL_VALID(SID_Drizzle))
    [SID_Drizzle] = {
        .desc = MSG_SKILL_Drizzle,
        .icon = GFX_SkillIcon_Drizzle,
    },
#endif

#if (defined(SID_SnowWarning) && COMMON_SKILL_VALID(SID_SnowWarning))
    [SID_SnowWarning] = {
        .desc = MSG_SKILL_SnowWarning,
        .icon = GFX_SkillIcon_SnowWarning,
    },
#endif

#if (defined(SID_SandStream) && COMMON_SKILL_VALID(SID_SandStream))
    [SID_SandStream] = {
        .desc = MSG_SKILL_SandStream,
        .icon = GFX_SkillIcon_SandStream,
    },
#endif

#if (defined(SID_PointBlank) && COMMON_SKILL_VALID(SID_PointBlank))
    [SID_PointBlank] = {
        .desc = MSG_SKILL_PointBlank,
        .icon = GFX_SkillIcon_PointBlank,
    },
#endif

#if (defined(SID_Synchronize) && COMMON_SKILL_VALID(SID_Synchronize))
    [SID_Synchronize] = {
        .desc = MSG_SKILL_Synchronize,
        .icon = GFX_SkillIcon_Synchronize,
    },
#endif

#if (defined(SID_StaffSavant) && COMMON_SKILL_VALID(SID_StaffSavant))
    [SID_StaffSavant] = {
        .desc = MSG_SKILL_StaffSavant,
        .icon = GFX_SkillIcon_StaffSavant,
    },
#endif

#if (defined(SID_Skyguard) && COMMON_SKILL_VALID(SID_Skyguard))
    [SID_Skyguard] = {
        .desc = MSG_SKILL_Skyguard,
        .icon = GFX_SkillIcon_Skyguard,
    },
#endif

#if (defined(SID_Horseguard) && COMMON_SKILL_VALID(SID_Horseguard))
    [SID_Horseguard] = {
        .desc = MSG_SKILL_Horseguard,
        .icon = GFX_SkillIcon_Horseguard,
    },
#endif

#if (defined(SID_Armorboost) && COMMON_SKILL_VALID(SID_Armorboost))
    [SID_Armorboost] = {
        .desc = MSG_SKILL_Armorboost,
        .icon = GFX_SkillIcon_Armorboost,
    },
#endif

#if (defined(SID_GentleFlower) && COMMON_SKILL_VALID(SID_GentleFlower))
    [SID_GentleFlower] = {

        .desc = MSG_SKILL_GentleFlower,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Admiration) && COMMON_SKILL_VALID(SID_Admiration))
    [SID_Admiration] = {
        .desc = MSG_SKILL_Admiration,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_FairyTaleFolk) && COMMON_SKILL_VALID(SID_FairyTaleFolk))
    [SID_FairyTaleFolk] = {

        .desc = MSG_SKILL_FairyTaleFolk,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_InitCalm) && COMMON_SKILL_VALID(SID_InitCalm))
    [SID_InitCalm] = {

        .desc = MSG_SKILL_InitCalm,
        .icon = GFX_SkillIcon_InitCalm,
    },
#endif

#if (defined(SID_InitClever) && COMMON_SKILL_VALID(SID_InitClever))
    [SID_InitClever] = {

        .desc = MSG_SKILL_InitClever,
        .icon = GFX_SkillIcon_InitClever,
    },
#endif

#if (defined(SID_InitDeft) && COMMON_SKILL_VALID(SID_InitDeft))
    [SID_InitDeft] = {

        .desc = MSG_SKILL_InitDeft,
        .icon = GFX_SkillIcon_InitDeft,
    },
#endif

#if (defined(SID_InitLucky) && COMMON_SKILL_VALID(SID_InitLucky))
    [SID_InitLucky] = {

        .desc = MSG_SKILL_InitLucky,
        .icon = GFX_SkillIcon_InitLucky,
    },
#endif

#if (defined(SID_InitNimble) && COMMON_SKILL_VALID(SID_InitNimble))
    [SID_InitNimble] = {

        .desc = MSG_SKILL_InitNimble,
        .icon = GFX_SkillIcon_InitNimble,
    },
#endif

#if (defined(SID_InitQuick) && COMMON_SKILL_VALID(SID_InitQuick))
    [SID_InitQuick] = {

        .desc = MSG_SKILL_InitQuick,
        .icon = GFX_SkillIcon_InitQuick,
    },
#endif

#if (defined(SID_InitSpectrum) && COMMON_SKILL_VALID(SID_InitSpectrum))
    [SID_InitSpectrum] = {

        .desc = MSG_SKILL_InitSpectrum,
        .icon = GFX_SkillIcon_InitSpectrum,
    },
#endif

#if (defined(SID_InitStrong) && COMMON_SKILL_VALID(SID_InitStrong))
    [SID_InitStrong] = {

        .desc = MSG_SKILL_InitStrong,
        .icon = GFX_SkillIcon_InitStrong,
    },
#endif

#if (defined(SID_InitSturdy) && COMMON_SKILL_VALID(SID_InitSturdy))
    [SID_InitSturdy] = {

        .desc = MSG_SKILL_InitSturdy,
        .icon = GFX_SkillIcon_InitSturdy,
    },
#endif

#if (defined(SID_Lifetaker) && COMMON_SKILL_VALID(SID_Lifetaker))
    [SID_Lifetaker] = {
        .desc = MSG_SKILL_Lifetaker,
        .icon = GFX_SkillIcon_Lifetaker,
    },
#endif

#if (defined(SID_Analytic) && COMMON_SKILL_VALID(SID_Analytic))
    [SID_Analytic] = {
        .desc = MSG_SKILL_Analytic,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_OathDefense) && COMMON_SKILL_VALID(SID_OathDefense))
    [SID_OathDefense] = {

        .desc = MSG_SKILL_OathDefense,
        .icon = GFX_SkillIcon_OathDefense,
    },
#endif

#if (defined(SID_OathLuck) && COMMON_SKILL_VALID(SID_OathLuck))
    [SID_OathLuck] = {

        .desc = MSG_SKILL_OathLuck,
        .icon = GFX_SkillIcon_OathLuck,
    },
#endif

#if (defined(SID_OathMagic) && COMMON_SKILL_VALID(SID_OathMagic))
    [SID_OathMagic] = {

        .desc = MSG_SKILL_OathMagic,
        .icon = GFX_SkillIcon_OathMagic,
    },
#endif

#if (defined(SID_CounterRoar) && COMMON_SKILL_VALID(SID_CounterRoar))
    [SID_CounterRoar] = {
        .desc = MSG_SKILL_CounterRoar,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Gambit) && COMMON_SKILL_VALID(SID_Gambit))
    [SID_Gambit] = {
        .desc = MSG_SKILL_Gambit,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_MagicGambit) && COMMON_SKILL_VALID(SID_MagicGambit))
    [SID_MagicGambit] = {
        .desc = MSG_SKILL_MagicGambit,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_BeastAssault) && COMMON_SKILL_VALID(SID_BeastAssault))
    [SID_BeastAssault] = {

        .desc = MSG_SKILL_BeastAssault,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_LightAndDark) && COMMON_SKILL_VALID(SID_LightAndDark))
    [SID_LightAndDark] = {
        .desc = MSG_SKILL_LightAndDark,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_OathMovement) && COMMON_SKILL_VALID(SID_OathMovement))
    [SID_OathMovement] = {

        .desc = MSG_SKILL_OathMovement,
        .icon = GFX_SkillIcon_OathMovement,
    },
#endif

#if (defined(SID_OathResistance) && COMMON_SKILL_VALID(SID_OathResistance))
    [SID_OathResistance] = {

        .desc = MSG_SKILL_OathResistance,
        .icon = GFX_SkillIcon_OathResistance,
    },
#endif

#if (defined(SID_OathSkill) && COMMON_SKILL_VALID(SID_OathSkill))
    [SID_OathSkill] = {

        .desc = MSG_SKILL_OathSkill,
        .icon = GFX_SkillIcon_OathSkill,
    },
#endif

#if (defined(SID_OathSpeed) && COMMON_SKILL_VALID(SID_OathSpeed))
    [SID_OathSpeed] = {

        .desc = MSG_SKILL_OathSpeed,
        .icon = GFX_SkillIcon_OathSpeed,
    },
#endif

#if (defined(SID_OathStrength) && COMMON_SKILL_VALID(SID_OathStrength))
    [SID_OathStrength] = {

        .desc = MSG_SKILL_OathStrength,
        .icon = GFX_SkillIcon_OathStrength,
    },
#endif

#if (defined(SID_DivinePulse) && COMMON_SKILL_VALID(SID_DivinePulse))
    [SID_DivinePulse] = {

        .desc = MSG_SKILL_DivinePulse,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Tsuzuku) && COMMON_SKILL_VALID(SID_Tsuzuku))
    [SID_Tsuzuku] = {
        .desc = MSG_SKILL_Tsuzuku,
        .icon = GFX_SkillIcon_Tsuzuku,
    },
#endif

#if (defined(SID_MysticBoost) && COMMON_SKILL_VALID(SID_MysticBoost))
    [SID_MysticBoost] = {
        .desc = MSG_SKILL_MysticBoost,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_GuardBearing) && COMMON_SKILL_VALID(SID_GuardBearing))
    [SID_GuardBearing] = {

        .desc = MSG_SKILL_GuardBearing,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Spurn) && COMMON_SKILL_VALID(SID_Spurn))
    [SID_Spurn] = {
        .desc = MSG_SKILL_Spurn,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Bushido) && COMMON_SKILL_VALID(SID_Bushido))
    [SID_Bushido] = {
        .desc = MSG_SKILL_Bushido,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_DragonWall) && COMMON_SKILL_VALID(SID_DragonWall))
    [SID_DragonWall] = {
        .desc = MSG_SKILL_DragonWall,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_DragonWarth) && COMMON_SKILL_VALID(SID_DragonWarth))
    [SID_DragonWarth] = {

        .desc = MSG_SKILL_DragonWarth,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_BlueLionRule) && COMMON_SKILL_VALID(SID_BlueLionRule))
    [SID_BlueLionRule] = {

        .desc = MSG_SKILL_BlueLionRule,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_FaerghusAncestry) && COMMON_SKILL_VALID(SID_FaerghusAncestry))
    [SID_FaerghusAncestry] = {

        .desc = MSG_SKILL_FaerghusAncestry,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_CrusaderWard) && COMMON_SKILL_VALID(SID_CrusaderWard))
    [SID_CrusaderWard] = {

        .desc = MSG_SKILL_CrusaderWard,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_YuneWhispers) && COMMON_SKILL_VALID(SID_YuneWhispers))
    [SID_YuneWhispers] = {

        .desc = MSG_SKILL_YuneWhispers,
        .icon = GFX_SkillIcon_YuneWhispers,
    },
#endif

#if (defined(SID_Plus) && COMMON_SKILL_VALID(SID_Plus))
    [SID_Plus] = {
        .desc = MSG_SKILL_Plus,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

  #if (defined(SID_Minus) && COMMON_SKILL_VALID(SID_Minus))
    [SID_Minus] = {
        .desc = MSG_SKILL_Minus,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Chlorophyll) && COMMON_SKILL_VALID(SID_Chlorophyll))
    [SID_Chlorophyll] = {
        .desc = MSG_SKILL_Chlorophyll,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_SlushRush) && COMMON_SKILL_VALID(SID_SlushRush))
    [SID_SlushRush] = {
        .desc = MSG_SKILL_SlushRush,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_SandRush) && COMMON_SKILL_VALID(SID_SandRush))
    [SID_SandRush] = {
        .desc = MSG_SKILL_SandRush,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_SwiftSwim) && COMMON_SKILL_VALID(SID_SwiftSwim))
    [SID_SwiftSwim] = {
        .desc = MSG_SKILL_SwiftSwim,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_RainDish) && COMMON_SKILL_VALID(SID_RainDish))
    [SID_RainDish] = {
        .desc = MSG_SKILL_RainDish,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Assist) && COMMON_SKILL_VALID(SID_Assist))
    [SID_Assist] = {
        .desc = MSG_SKILL_Assist,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Synergism) && COMMON_SKILL_VALID(SID_Synergism))
    [SID_Synergism] = {
        .desc = MSG_SKILL_Synergism,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Pass) && COMMON_SKILL_VALID(SID_Pass))
    [SID_Pass] = {
        .desc = MSG_SKILL_Pass,
        .icon = GFX_SkillIcon_Pass,
    },
#endif

#if (defined(SID_Obstruct) && COMMON_SKILL_VALID(SID_Obstruct))
    [SID_Obstruct] = {
        .desc = MSG_SKILL_Obstruct,
        .icon = GFX_SkillIcon_Obstruct,
    },
#endif

#if (defined(SID_Guidance) && COMMON_SKILL_VALID(SID_Guidance))
    [SID_Guidance] = {
        .desc = MSG_SKILL_Guidance,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_FlierGuidance) && COMMON_SKILL_VALID(SID_FlierGuidance))
    [SID_FlierGuidance] = {

        .desc = MSG_SKILL_FlierGuidance,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_SoaringGuidance) && COMMON_SKILL_VALID(SID_SoaringGuidance))
    [SID_SoaringGuidance] = {

        .desc = MSG_SKILL_SoaringGuidance,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Aerobatics) && COMMON_SKILL_VALID(SID_Aerobatics))
    [SID_Aerobatics] = {
        .desc = MSG_SKILL_Aerobatics,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_FlierFormation) && COMMON_SKILL_VALID(SID_FlierFormation))
    [SID_FlierFormation] = {

        .desc = MSG_SKILL_FlierFormation,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_SoaringWings) && COMMON_SKILL_VALID(SID_SoaringWings))
    [SID_SoaringWings] = {

        .desc = MSG_SKILL_SoaringWings,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_DetailedReport) && COMMON_SKILL_VALID(SID_DetailedReport))
    [SID_DetailedReport] = {

        .desc = MSG_SKILL_DetailedReport,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_VengefulFighter) && COMMON_SKILL_VALID(SID_VengefulFighter))
    [SID_VengefulFighter] = {

         .desc = MSG_SKILL_VengefulFighter,
         .icon = GFX_SkillIcon_VengefulFighter,
    },
#endif

#if (defined(SID_RapidFighter) && COMMON_SKILL_VALID(SID_RapidFighter))
    [SID_RapidFighter] = {

         .desc = MSG_SKILL_RapidFighter,
         .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_RecklessFighter) && COMMON_SKILL_VALID(SID_RecklessFighter))
    [SID_RecklessFighter] = {

         .desc = MSG_SKILL_RecklessFighter,
         .icon = GFX_SkillIcon_RecklessFighter,
    },
#endif

#if (defined(SID_BoldFighter) && COMMON_SKILL_VALID(SID_BoldFighter))
    [SID_BoldFighter] = {

         .desc = MSG_SKILL_BoldFighter,
         .icon = GFX_SkillIcon_BoldFighter,
    },
#endif

#if (defined(SID_Dazzle) && COMMON_SKILL_VALID(SID_Dazzle))
    [SID_Dazzle] = {
         .desc = MSG_SKILL_Dazzle,
         .icon = GFX_SkillIcon_Dazzle,
    },
#endif

#if (defined(SID_Boon) && COMMON_SKILL_VALID(SID_Boon))
    [SID_Boon] = {
         .desc = MSG_SKILL_Boon,
         .icon = GFX_SkillIcon_Boon,
    },
#endif

#if (defined(SID_BidingBlow) && COMMON_SKILL_VALID(SID_BidingBlow))
    [SID_BidingBlow] = {
         .desc = MSG_SKILL_BidingBlow,
         .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Discipline) && COMMON_SKILL_VALID(SID_Discipline))
    [SID_Discipline] = {
         .desc = MSG_SKILL_Discipline,
         .icon = GFX_SkillIcon_Discipline,
    },
#endif

#if (defined(SID_AdvantageChaser) && COMMON_SKILL_VALID(SID_AdvantageChaser))
    [SID_AdvantageChaser] = {

         .desc = MSG_SKILL_AdvantageChaser,
         .icon = GFX_SkillIcon_AdvantageChaser,
    },
#endif

#if (defined(SID_Nonconforming) && COMMON_SKILL_VALID(SID_Nonconforming))
    [SID_Nonconforming] = {

        .desc = MSG_SKILL_Nonconforming,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Moonlight) && COMMON_SKILL_VALID(SID_Moonlight))
    [SID_Moonlight] = {
         .desc = MSG_SKILL_Moonlight,
         .icon = GFX_SkillIcon_Moonlight,
    },
#endif

#if (defined(SID_RouseDefense) && COMMON_SKILL_VALID(SID_RouseDefense))
    [SID_RouseDefense] = {

        .desc = MSG_SKILL_RouseDefense,
        .icon = GFX_SkillIcon_RouseDefense,
    },
#endif

#if (defined(SID_RouseLuck) && COMMON_SKILL_VALID(SID_RouseLuck))
    [SID_RouseLuck] = {

        .desc = MSG_SKILL_RouseLuck,
        .icon = GFX_SkillIcon_RouseLuck,
    },
#endif

#if (defined(SID_RouseMagic) && COMMON_SKILL_VALID(SID_RouseMagic))
    [SID_RouseMagic] = {

        .desc = MSG_SKILL_RouseMagic,
        .icon = GFX_SkillIcon_RouseMagic,
    },
#endif

#if (defined(SID_RouseMovement) && COMMON_SKILL_VALID(SID_RouseMovement))
    [SID_RouseMovement] = {

        .desc = MSG_SKILL_RouseMovement,
        .icon = GFX_SkillIcon_RouseMovement,
    },
#endif

#if (defined(SID_RouseResistance) && COMMON_SKILL_VALID(SID_RouseResistance))
    [SID_RouseResistance] = {

        .desc = MSG_SKILL_RouseResistance,
        .icon = GFX_SkillIcon_RouseResistance,
    },
#endif

#if (defined(SID_RouseSkill) && COMMON_SKILL_VALID(SID_RouseSkill))
    [SID_RouseSkill] = {

        .desc = MSG_SKILL_RouseSkill,
        .icon = GFX_SkillIcon_RouseSkill,
    },
#endif

#if (defined(SID_RouseSpeed) && COMMON_SKILL_VALID(SID_RouseSpeed))
    [SID_RouseSpeed] = {

        .desc = MSG_SKILL_RouseSpeed,
        .icon = GFX_SkillIcon_RouseSpeed,
    },
#endif

#if (defined(SID_RouseStrength) && COMMON_SKILL_VALID(SID_RouseStrength))
    [SID_RouseStrength] = {

        .desc = MSG_SKILL_RouseStrength,
        .icon = GFX_SkillIcon_RouseStrength,
    },
#endif

#if (defined(SID_BlackMagic) && COMMON_SKILL_VALID(SID_BlackMagic))
    [SID_BlackMagic] = {
        .desc = MSG_SKILL_BlackMagic,
        .icon = GFX_SkillIcon_BlackMagic,
    },
#endif

#if (defined(SID_Relief) && COMMON_SKILL_VALID(SID_Relief))
    [SID_Relief] = {
        .desc = MSG_SKILL_Relief,
        .icon = GFX_SkillIcon_Relief,
    },
#endif

#if (defined(SID_Camaraderie) && COMMON_SKILL_VALID(SID_Camaraderie))
    [SID_Camaraderie] = {
        .desc = MSG_SKILL_Camaraderie,
        .icon = GFX_SkillIcon_Camaraderie,
    },
#endif

#if (defined(SID_Amaterasu) && (SID_Amaterasu < MAX_SKILL_NUM)) 
    [SID_Amaterasu] = {
        .desc = MSG_SKILL_Amaterasu,
        .icon = GFX_SkillIcon_Amaterasu,
      },
#endif

#if (defined(SID_Counter) && COMMON_SKILL_VALID(SID_Counter))
    [SID_Counter] = {
        .desc = MSG_SKILL_Counter,
        .icon = GFX_SkillIcon_Counter,
    },
#endif

#if (defined(SID_LastWord) && COMMON_SKILL_VALID(SID_LastWord))
    [SID_LastWord] = {
         .desc = MSG_SKILL_LastWord,
         .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_PowerStaff) && COMMON_SKILL_VALID(SID_PowerStaff))
    [SID_PowerStaff] = {
        .desc = MSG_SKILL_PowerStaff,
        .icon = GFX_SkillIcon_PowerStaff,
    },
#endif

#if (defined(SID_Multiscale) && COMMON_SKILL_VALID(SID_Multiscale))
    [SID_Multiscale] = {
        .desc = MSG_SKILL_Multiscale,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_PridefulWarrior) && COMMON_SKILL_VALID(SID_PridefulWarrior))
    [SID_PridefulWarrior] = {

         .desc = MSG_SKILL_PridefulWarrior,
         .icon = GFX_SkillIcon_PridefulWarrior,
    },
#endif

#if (defined(SID_LiveToServe) && COMMON_SKILL_VALID(SID_LiveToServe))
    [SID_LiveToServe] = {
        .desc = MSG_SKILL_LiveToServe,
        .icon = GFX_SkillIcon_LiveToServe,
    },
#endif

#if (defined(SID_MageSlayer) && COMMON_SKILL_VALID(SID_MageSlayer))
    [SID_MageSlayer] = {
        .desc = MSG_SKILL_MageSlayer,
        .icon = GFX_SkillIcon_MageSlayer,
    },
#endif

#if (defined(SID_FailGale) && COMMON_SKILL_VALID(SID_FailGale))
    [SID_FailGale] = {
        .desc = MSG_SKILL_FailGale,
        .icon = GFX_SkillIcon_FailGale,
    },
#endif

#if (defined(SID_Clearance) && COMMON_SKILL_VALID(SID_Clearance))
    [SID_Clearance] = {
        .desc = MSG_SKILL_Clearance,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_TriangleAdept) && COMMON_SKILL_VALID(SID_TriangleAdept))
    [SID_TriangleAdept] = {

        .desc = MSG_SKILL_TriangleAdept,
        .icon = GFX_SkillIcon_TriangleAdept,
    },
#endif

#if (defined(SID_TriangleAdeptPlus) && COMMON_SKILL_VALID(SID_TriangleAdeptPlus))
    [SID_TriangleAdeptPlus] = {

        .desc = MSG_SKILL_TriangleAdeptPlus,
        .icon = GFX_SkillIcon_TriangleAdeptPlus,
    },
#endif

#if (defined(SID_TowerShieldPlus) && COMMON_SKILL_VALID(SID_TowerShieldPlus))
    [SID_TowerShieldPlus] = {
        .desc = MSG_SKILL_TowerShieldPlus,
        .icon = GFX_SkillIcon_TowerShieldPlus,
    },
#endif

#if (defined(SID_SolarPower) && COMMON_SKILL_VALID(SID_SolarPower))
    [SID_SolarPower] = {
        .desc = MSG_SKILL_SolarPower,
        .icon = GFX_SkillIcon_SolarPower,
    },
#endif

#if (defined(SID_COMBAT_Gamble) && COMMON_SKILL_VALID(SID_COMBAT_Gamble))
    [SID_COMBAT_Gamble] = {
        .desc = MSG_SKILL_COMBAT_Gamble,
        .icon = GFX_SkillIcon_Gamble,
    },
#endif

#if (defined(SID_PoisonStrike) && COMMON_SKILL_VALID(SID_PoisonStrike))
    [SID_PoisonStrike] = {

        .desc = MSG_SKILL_PoisonStrike,
        .icon = GFX_SkillIcon_PoisonStrike,
    },
#endif

#if (defined(SID_GrislyWound) && COMMON_SKILL_VALID(SID_GrislyWound))
    [SID_GrislyWound] = {

        .desc = MSG_SKILL_GrislyWound,
        .icon = GFX_SkillIcon_GrislyWound,
    },
#endif

#if (defined(SID_Poise) && COMMON_SKILL_VALID(SID_Poise))
    [SID_Poise] = {
        .desc = MSG_SKILL_Poise,
        .icon = GFX_SkillIcon_Poise,
    },
#endif

#if (defined(SID_COMBAT_Detonate) && COMMON_SKILL_VALID(SID_COMBAT_Detonate))
    [SID_COMBAT_Detonate] = {
        .desc = MSG_SKILL_COMBAT_Detonate,
        .icon = GFX_SkillIcon_Detonate,
    },
#endif

#if (defined(SID_Enrage) && COMMON_SKILL_VALID(SID_Enrage))
    [SID_Enrage] = {
        .desc = MSG_SKILL_Enrage,
        .icon = GFX_SkillIcon_Enrage,
    },
#endif

#if (defined(SID_Petrify) && COMMON_SKILL_VALID(SID_Petrify))
    [SID_Petrify] = {
        .desc = MSG_SKILL_Petrify,
        .icon = GFX_SkillIcon_Petrify,
    },
#endif

#if (defined(SID_AirRaidAttack) && COMMON_SKILL_VALID(SID_AirRaidAttack))
    [SID_AirRaidAttack] = {

        .desc = MSG_SKILL_AirRaidAttack,
        .icon = GFX_SkillIcon_AirRaidAttack,
    },
#endif

#if (defined(SID_AirRaidAvoid) && COMMON_SKILL_VALID(SID_AirRaidAvoid))
    [SID_AirRaidAvoid] = {

        .desc = MSG_SKILL_AirRaidAvoid,
        .icon = GFX_SkillIcon_AirRaidAvoid,
    },
#endif

#if (defined(SID_AirRaidCrit) && COMMON_SKILL_VALID(SID_AirRaidCrit))
    [SID_AirRaidCrit] = {

        .desc = MSG_SKILL_AirRaidCrit,
        .icon = GFX_SkillIcon_AirRaidCrit,
    },
#endif

#if (defined(SID_AirRaidDefense) && COMMON_SKILL_VALID(SID_AirRaidDefense))
    [SID_AirRaidDefense] = {

        .desc = MSG_SKILL_AirRaidDefense,
        .icon = GFX_SkillIcon_AirRaidDefense,
    },
#endif

#if (defined(SID_AirRaidHit) && COMMON_SKILL_VALID(SID_AirRaidHit))
    [SID_AirRaidHit] = {

        .desc = MSG_SKILL_AirRaidHit,
        .icon = GFX_SkillIcon_AirRaidHit,
    },
#endif

#if (defined(SID_AirRaidResistance) && COMMON_SKILL_VALID(SID_AirRaidResistance))
    [SID_AirRaidResistance] = {

        .desc = MSG_SKILL_AirRaidResistance,
        .icon = GFX_SkillIcon_AirRaidResistance,
    },
#endif

#if (defined(SID_AirRaidSpeed) && COMMON_SKILL_VALID(SID_AirRaidSpeed))
    [SID_AirRaidSpeed] = {

        .desc = MSG_SKILL_AirRaidSpeed,
        .icon = GFX_SkillIcon_AirRaidSpeed,
    },
#endif

#if (defined(SID_FaireAnima) && COMMON_SKILL_VALID(SID_FaireAnima))
    [SID_FaireAnima] = {
        .desc = MSG_SKILL_FaireAnima,
        .icon = GFX_SkillIcon_WIP,
    },
#endif


#if (defined(SID_FaireLight) && COMMON_SKILL_VALID(SID_FaireLight))
    [SID_FaireLight] = {
        .desc = MSG_SKILL_FaireLight,
        .icon = GFX_SkillIcon_WIP,
    },
#endif


#if (defined(SID_FaireDark) && COMMON_SKILL_VALID(SID_FaireDark))
    [SID_FaireDark] = {
        .desc = MSG_SKILL_FaireDark,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_SealDefense) && COMMON_SKILL_VALID(SID_SealDefense))
    [SID_SealDefense] = {
        .desc = MSG_SKILL_SealDefense,
        .icon = GFX_SkillIcon_SealDefense
    },
#endif

#if (defined(SID_SealLuck) && COMMON_SKILL_VALID(SID_SealLuck))
    [SID_SealLuck] = {
        .desc = MSG_SKILL_SealLuck,
        .icon = GFX_SkillIcon_SealLuck
    },
#endif

#if (defined(SID_SealMagic) && COMMON_SKILL_VALID(SID_SealMagic))
    [SID_SealMagic] = {
        .desc = MSG_SKILL_SealMagic,
        .icon = GFX_SkillIcon_SealMagic
    },
#endif

#if (defined(SID_SealResistance) && COMMON_SKILL_VALID(SID_SealResistance))
    [SID_SealResistance] = {
        .desc = MSG_SKILL_SealResistance,
        .icon = GFX_SkillIcon_SealResistance
    },
#endif

#if (defined(SID_SealSkill) && COMMON_SKILL_VALID(SID_SealSkill))
    [SID_SealSkill] = {
        .desc = MSG_SKILL_SealSkill,
        .icon = GFX_SkillIcon_SealSkill
    },
#endif

#if (defined(SID_SealSpeed) && COMMON_SKILL_VALID(SID_SealSpeed))
    [SID_SealSpeed] = {
        .desc = MSG_SKILL_SealSpeed,
        .icon = GFX_SkillIcon_SealSpeed
    },
#endif

#if (defined(SID_SealStrength) && COMMON_SKILL_VALID(SID_SealStrength))
    [SID_SealStrength] = {
        .desc = MSG_SKILL_SealStrength,
        .icon = GFX_SkillIcon_SealStrength
    },
#endif

#if (defined(SID_RallyDefense) && COMMON_SKILL_VALID(SID_RallyDefense))
    [SID_RallyDefense] = {
        .desc = MSG_SKILL_RallyDefense,
        .icon = GFX_SkillIcon_RallyDefense,
    },
#endif

#if (defined(SID_RallyLuck) && COMMON_SKILL_VALID(SID_RallyLuck))
    [SID_RallyLuck] = {
        .desc = MSG_SKILL_RallyLuck,
        .icon = GFX_SkillIcon_RallyLuck,
    },
#endif

#if (defined(SID_RallyMagic) && COMMON_SKILL_VALID(SID_RallyMagic))
    [SID_RallyMagic] = {
        .desc = MSG_SKILL_RallyMagic,
        .icon = GFX_SkillIcon_RallyMagic,
    },
#endif

#if (defined(SID_RallyMovement) && COMMON_SKILL_VALID(SID_RallyMovement))
    [SID_RallyMovement] = {
        .desc = MSG_SKILL_RallyMovement,
        .icon = GFX_SkillIcon_RallyMovement,
    },
#endif

#if (defined(SID_RallyResistance) && COMMON_SKILL_VALID(SID_RallyResistance))
    [SID_RallyResistance] = {
        .desc = MSG_SKILL_RallyResistance,
        .icon = GFX_SkillIcon_RallyResistance,
    },
#endif

#if (defined(SID_RallySkill) && COMMON_SKILL_VALID(SID_RallySkill))
    [SID_RallySkill] = {
        .desc = MSG_SKILL_RallySkill,
        .icon = GFX_SkillIcon_RallySkill,
    },
#endif

#if (defined(SID_RallySpeed) && COMMON_SKILL_VALID(SID_RallySpeed))
    [SID_RallySpeed] = {
        .desc = MSG_SKILL_RallySpeed,
        .icon = GFX_SkillIcon_RallySpeed,
    },
#endif

#if (defined(SID_RallyStrength) && COMMON_SKILL_VALID(SID_RallyStrength))
    [SID_RallyStrength] = {
        .desc = MSG_SKILL_RallyStrength,
        .icon = GFX_SkillIcon_RallyStrength,
    },
#endif

#if (defined(SID_RallySpectrum) && COMMON_SKILL_VALID(SID_RallySpectrum))
    [SID_RallySpectrum] = {
        .desc = MSG_SKILL_RallySpectrum,
        .icon = GFX_SkillIcon_RallySpectrum,
    },
#endif

#if (defined(SID_Despoil) && COMMON_SKILL_VALID(SID_Despoil))
    [SID_Despoil] = {
        .desc = MSG_SKILL_Despoil,
        .icon = GFX_SkillIcon_Despoil,
    },
#endif

#if (defined(SID_Pickup) && COMMON_SKILL_VALID(SID_Pickup))
    [SID_Pickup] = {
        .desc = MSG_SKILL_Pickup,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_IndoorMarch) && COMMON_SKILL_VALID(SID_IndoorMarch))
    [SID_IndoorMarch] = {

        .desc = MSG_SKILL_IndoorMarch,
        .icon = GFX_SkillIcon_IndoorMarch,
    },
#endif

#if (defined(SID_DevilsPact) && COMMON_SKILL_VALID(SID_DevilsPact))
    [SID_DevilsPact] = {
        .desc = MSG_SKILL_DevilsPact,
        .icon = GFX_SkillIcon_DevilsPact,
    },
#endif

#if (defined(SID_DevilsWhim) && COMMON_SKILL_VALID(SID_DevilsWhim))
    [SID_DevilsWhim] = {
        .desc = MSG_SKILL_DevilsWhim,
        .icon = GFX_SkillIcon_DevilsWhim,
    },
#endif

#if (defined(SID_DevilsLuck) && COMMON_SKILL_VALID(SID_DevilsLuck))
    [SID_DevilsLuck] = {
        .desc = MSG_SKILL_DevilsLuck,
        .icon = GFX_SkillIcon_DevilsLuck,
    },
#endif

#if (defined(SID_Expertise) && COMMON_SKILL_VALID(SID_Expertise))
    [SID_Expertise] = {
        .desc = MSG_SKILL_Expertise,
        .icon = GFX_SkillIcon_Expertise,
    },
#endif

#if (defined(SID_PassionsFlow) && COMMON_SKILL_VALID(SID_PassionsFlow))
    [SID_PassionsFlow] = {
         .desc = MSG_SKILL_PassionsFlow,
         .icon = GFX_SkillIcon_PassionsFlow,
    },
#endif

#if (defined(SID_NatureRush) && COMMON_SKILL_VALID(SID_NatureRush))
    [SID_NatureRush] = {
        .desc = MSG_SKILL_NatureRush,
        .icon = GFX_SkillIcon_NatureRush,
    },
#endif

#if (defined(SID_CounterMagic) && COMMON_SKILL_VALID(SID_CounterMagic))
    [SID_CounterMagic] = {
        .desc = MSG_SKILL_CounterMagic,
        .icon = GFX_SkillIcon_CounterMagic,
    },
#endif

#if (defined(SID_LadyBlade) && COMMON_SKILL_VALID(SID_LadyBlade))
    [SID_LadyBlade] = {
        .desc = MSG_SKILL_LadyBlade,
        .icon = GFX_SkillIcon_LadyBlade,
    },
#endif

#if (defined(SID_LullDefense) && COMMON_SKILL_VALID(SID_LullDefense))
    [SID_LullDefense] = {
        .desc = MSG_SKILL_LullDefense,
        .icon = GFX_SkillIcon_LullDefense,
    },
#endif

#if (defined(SID_LullLuck) && COMMON_SKILL_VALID(SID_LullLuck))
    [SID_LullLuck] = {
        .desc = MSG_SKILL_LullLuck,
        .icon = GFX_SkillIcon_LullLuck,
    },
#endif

#if (defined(SID_LullMagic) && COMMON_SKILL_VALID(SID_LullMagic))
    [SID_LullMagic] = {
        .desc = MSG_SKILL_LullMagic,
        .icon = GFX_SkillIcon_LullMagic,
    },
#endif

#if (defined(SID_LullMovement) && COMMON_SKILL_VALID(SID_LullMovement))
    [SID_LullMovement] = {
        .desc = MSG_SKILL_LullMovement,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_LullResistance) && COMMON_SKILL_VALID(SID_LullResistance))
    [SID_LullResistance] = {
        .desc = MSG_SKILL_LullResistance,
        .icon = GFX_SkillIcon_LullResistance,
    },
#endif

#if (defined(SID_LullSkill) && COMMON_SKILL_VALID(SID_LullSkill))
    [SID_LullSkill] = {
        .desc = MSG_SKILL_LullSkill,
        .icon = GFX_SkillIcon_LullSkill,
    },
#endif

#if (defined(SID_LullSpectrum) && COMMON_SKILL_VALID(SID_LullSpectrum))
    [SID_LullSpectrum] = {
        .desc = MSG_SKILL_LullSpectrum,
        .icon = GFX_SkillIcon_LullSpectrum,
    },
#endif

#if (defined(SID_LullSpeed) && COMMON_SKILL_VALID(SID_LullSpeed))
    [SID_LullSpeed] = {
        .desc = MSG_SKILL_LullSpeed,
        .icon = GFX_SkillIcon_LullSpeed,
    },
#endif

#if (defined(SID_LullStrength) && COMMON_SKILL_VALID(SID_LullStrength))
    [SID_LullStrength] = {
        .desc = MSG_SKILL_LullStrength,
        .icon = GFX_SkillIcon_LullStrength,
    },
#endif

#if (defined(SID_ShrewdPotential) && COMMON_SKILL_VALID(SID_ShrewdPotential))
    [SID_ShrewdPotential] = {
        .desc = MSG_SKILL_ShrewdPotential,
        .icon = GFX_SkillIcon_ShrewdPotential,
    },
#endif

#if (defined(SID_GoddessDance) && COMMON_SKILL_VALID(SID_GoddessDance))
    [SID_GoddessDance] = {
        .desc = MSG_SKILL_GoddessDance,
        .icon = GFX_SkillIcon_GoddessDance,
    },
#endif

#if (defined(SID_SteadyBrawler) && COMMON_SKILL_VALID(SID_SteadyBrawler))
    [SID_SteadyBrawler] = {
        .desc = MSG_SKILL_SteadyBrawler,
        .icon = GFX_SkillIcon_SteadyBrawler,
    },
#endif

#if (defined(SID_KeepUp) && COMMON_SKILL_VALID(SID_KeepUp))
    [SID_KeepUp] = {
        .desc = MSG_SKILL_KeepUp,
        .icon = GFX_SkillIcon_KeepUp,
    },
#endif

#if (defined(SID_LiquidOoze) && COMMON_SKILL_VALID(SID_LiquidOoze))
    [SID_LiquidOoze] = {
        .desc = MSG_SKILL_LiquidOoze,
        .icon = GFX_SkillIcon_LiquidOoze,
    },
#endif

#if (defined(SID_CloseCombat) && COMMON_SKILL_VALID(SID_CloseCombat))
    [SID_CloseCombat] = {

        .desc = MSG_SKILL_CloseCombat,
        .icon = GFX_SkillIcon_CloseCombat,
    },
#endif

#if (defined(SID_ArmorMarch) && COMMON_SKILL_VALID(SID_ArmorMarch))
    [SID_ArmorMarch] = {

        .desc = MSG_SKILL_ArmorMarch,
        .icon = GFX_SkillIcon_ArmorMarch,
    },
#endif

#if (defined(SID_Eclipse) && COMMON_SKILL_VALID(SID_Eclipse))
    [SID_Eclipse] = {
        .desc = MSG_SKILL_Eclipse,
        .icon = GFX_SkillIcon_Eclipse,
    },
#endif

#if (defined(SID_Barricade) && COMMON_SKILL_VALID(SID_Barricade))
    [SID_Barricade] = {
        .desc = MSG_SKILL_Barricade,
        .icon = GFX_SkillIcon_Barricade,
    },
#endif

#if (defined(SID_BarricadePlus) && COMMON_SKILL_VALID(SID_BarricadePlus))
    [SID_BarricadePlus] = {
        .desc = MSG_SKILL_BarricadePlus,
        .icon = GFX_SkillIcon_BarricadePlus,
    },
#endif

#if (defined(SID_LunarBrace) && COMMON_SKILL_VALID(SID_LunarBrace))
    [SID_LunarBrace] = {

        .desc = MSG_SKILL_LunarBrace,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_SoulSap) && COMMON_SKILL_VALID(SID_SoulSap))
    [SID_SoulSap] = {
        .desc = MSG_SKILL_SoulSap,
        .icon = GFX_SkillIcon_SoulSap,
    },
#endif

#if (defined(SID_Pursuer) && COMMON_SKILL_VALID(SID_Pursuer))
    [SID_Pursuer] = {
        .desc = MSG_SKILL_Pursuer,
        .icon = GFX_SkillIcon_Pursuer,
    },
#endif

#if (defined(SID_Stride) && COMMON_SKILL_VALID(SID_Stride))
    [SID_Stride] = {
        .desc = MSG_SKILL_Stride,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_QuickLearner) && COMMON_SKILL_VALID(SID_QuickLearner))
    [SID_QuickLearner] = {

         .desc = MSG_SKILL_QuickLearner,
         .icon = GFX_SkillIcon_QuickLearner,
    },
#endif

#if (defined(SID_GoldDigger) && COMMON_SKILL_VALID(SID_GoldDigger))
    [SID_GoldDigger] = {

        .desc = MSG_SKILL_GoldDigger,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_EffectSpore) && COMMON_SKILL_VALID(SID_EffectSpore))
    [SID_EffectSpore] = {

        .desc = MSG_SKILL_EffectSpore,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_DominantArm) && COMMON_SKILL_VALID(SID_DominantArm))
    [SID_DominantArm] = {

        .desc = MSG_SKILL_DominantArm,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_GaleWings) && COMMON_SKILL_VALID(SID_GaleWings))
    [SID_GaleWings] = {
        .desc = MSG_SKILL_GaleWings,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_SolidRock) && COMMON_SKILL_VALID(SID_SolidRock))
    [SID_SolidRock] = {
        .desc = MSG_SKILL_SolidRock,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Sturdy) && COMMON_SKILL_VALID(SID_Sturdy))
    [SID_Sturdy] = {
        .desc = MSG_SKILL_Sturdy,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_HoldOut) && COMMON_SKILL_VALID(SID_HoldOut))
    [SID_HoldOut] = {
        .desc = MSG_SKILL_HoldOut,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_FranticSwing) && COMMON_SKILL_VALID(SID_FranticSwing))
    [SID_FranticSwing] = {
        .desc = MSG_SKILL_FranticSwing,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_SocialButterfly) && COMMON_SKILL_VALID(SID_SocialButterfly))
    [SID_SocialButterfly] = {
        .desc = MSG_SKILL_SocialButterfly,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_MeleeManiac) && COMMON_SKILL_VALID(SID_MeleeManiac))
    [SID_MeleeManiac] = {
        .desc = MSG_SKILL_MeleeManiac,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_CriticalOverload) && COMMON_SKILL_VALID(SID_CriticalOverload))
    [SID_CriticalOverload] = {
        .desc = MSG_SKILL_CriticalOverload,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Swarp) && COMMON_SKILL_VALID(SID_Swarp))
    [SID_Swarp] = {
        .desc = MSG_SKILL_Swarp,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Blacksmith) && COMMON_SKILL_VALID(SID_Blacksmith))
    [SID_Blacksmith] = {
        .desc = MSG_SKILL_Blacksmith,
        .icon = GFX_SkillIcon_Blacksmith,
    },
#endif

#if (defined(SID_Deal) && COMMON_SKILL_VALID(SID_Deal))
    [SID_Deal] = {
        .desc = MSG_SKILL_Deal,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_ConcealedWeapon) && COMMON_SKILL_VALID(SID_ConcealedWeapon))
    [SID_ConcealedWeapon] = {

        .desc = MSG_SKILL_ConcealedWeapon,
        .icon = GFX_SkillIcon_ConcealedWeapon,
    },
#endif

#if (defined(SID_Bargain) && COMMON_SKILL_VALID(SID_Bargain))
    [SID_Bargain] = {
        .desc = MSG_SKILL_Bargain,
        .icon = GFX_SkillIcon_Bargain,
    },
#endif

#if (defined(SID_ArmsthriftPlus) && COMMON_SKILL_VALID(SID_ArmsthriftPlus))
    [SID_ArmsthriftPlus] = {
        .desc = MSG_SKILL_ArmsthriftPlus,
        .icon = GFX_SkillIcon_ArmsthriftPlus,
    },
#endif

#if (defined(SID_GridMaster) && COMMON_SKILL_VALID(SID_GridMaster))
    [SID_GridMaster] = {
        .desc = MSG_SKILL_GridMaster,
        .icon = GFX_SkillIcon_GridMaster,
    },
#endif

#if (defined(SID_GridMasterAtk) && COMMON_SKILL_VALID(SID_GridMasterAtk))
    [SID_GridMasterAtk] = {
        .desc = MSG_SKILL_GridMasterAtk,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Swap) && COMMON_SKILL_VALID(SID_Swap))
    [SID_Swap] = {
        .desc = MSG_SKILL_Swap,
        .icon = GFX_SkillIcon_Swap,
    },
#endif

#if (defined(SID_VigorDance) && COMMON_SKILL_VALID(SID_VigorDance))
    [SID_VigorDance] = {
        .desc = MSG_SKILL_VigorDance,
        .icon = GFX_SkillIcon_VigorDance,
    },
#endif

#if (defined(SID_MagicSeal) && COMMON_SKILL_VALID(SID_MagicSeal))
    [SID_MagicSeal] = {
        .desc = MSG_SKILL_MagicSeal,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Mimic) && COMMON_SKILL_VALID(SID_Mimic))
    [SID_Mimic] = {
        .desc = MSG_SKILL_Mimic,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Insomnia) && COMMON_SKILL_VALID(SID_Insomnia))
    [SID_Insomnia] = {
        .desc = MSG_SKILL_Insomnia,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Comatose) && COMMON_SKILL_VALID(SID_Comatose))
    [SID_Comatose] = {
        .desc = MSG_SKILL_Comatose,
        .icon = GFX_SkillIcon_Comatose,
    },
#endif

#if (defined(SID_MagicBounce) && COMMON_SKILL_VALID(SID_MagicBounce))
    [SID_MagicBounce] = {
        .desc = MSG_SKILL_MagicBounce,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Accost) && COMMON_SKILL_VALID(SID_Accost))
    [SID_Accost] = {
        .desc = MSG_SKILL_Accost,
        .icon = GFX_SkillIcon_Accost,
    },
#endif

#if (defined(SID_HazeHunter) && COMMON_SKILL_VALID(SID_HazeHunter))
    [SID_HazeHunter] = {
        .desc = MSG_SKILL_HazeHunter,
        .icon = GFX_SkillIcon_HazeHunter,
    },
#endif

#if (defined(SID_Rampage) && COMMON_SKILL_VALID(SID_Rampage))
    [SID_Rampage] = {
        .desc = MSG_SKILL_Rampage,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_ArenaTrap) && COMMON_SKILL_VALID(SID_ArenaTrap))
    [SID_ArenaTrap] = {
        .desc = MSG_SKILL_ArenaTrap,
        .icon = GFX_SkillIcon_ArenaTrap,
    },
#endif

#if (defined(SID_Mentorship) && COMMON_SKILL_VALID(SID_Mentorship))
    [SID_Mentorship] = {
        .desc = MSG_SKILL_Mentorship,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_HyperCutter) && COMMON_SKILL_VALID(SID_HyperCutter))
    [SID_HyperCutter] = {
        .desc = MSG_SKILL_HyperCutter,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_ClearBody) && COMMON_SKILL_VALID(SID_ClearBody))
    [SID_ClearBody] = {
        .desc = MSG_SKILL_ClearBody,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_LeadByExample) && COMMON_SKILL_VALID(SID_LeadByExample))
    [SID_LeadByExample] = {
        .desc = MSG_SKILL_LeadByExample,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_GoodAsGold) && COMMON_SKILL_VALID(SID_GoodAsGold))
    [SID_GoodAsGold] = {
        .desc = MSG_SKILL_GoodAsGold,
        .icon = GFX_SkillIcon_GoodAsGold,
    },
#endif

#if (defined(SID_PsychUp) && COMMON_SKILL_VALID(SID_PsychUp))
    [SID_PsychUp] = {
        .desc = MSG_SKILL_PsychUp,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Moody) && COMMON_SKILL_VALID(SID_Moody))
    [SID_Moody] = {
        .desc = MSG_SKILL_Moody,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Amische) && COMMON_SKILL_VALID(SID_Amische))
    [SID_Amische] = {
        .desc = MSG_SKILL_Amische,
        .icon = GFX_SkillIcon_Amische,
    },
#endif

#if (defined(SID_DownWithArch) && COMMON_SKILL_VALID(SID_DownWithArch))
    [SID_DownWithArch] = {
        .desc = MSG_SKILL_DownWithArch,
        .icon = GFX_SkillIcon_DownWithArch,
    },
#endif

#if (defined(SID_HeavyMetal) && COMMON_SKILL_VALID(SID_HeavyMetal))
    [SID_HeavyMetal] = {
        .desc = MSG_SKILL_HeavyMetal,
        .icon = GFX_SkillIcon_HeavyMetal,
    },
#endif

#if (defined(SID_Acrobat) && COMMON_SKILL_VALID(SID_Acrobat))
    [SID_Acrobat] = {
        .desc = MSG_SKILL_Acrobat,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Contrary) && COMMON_SKILL_VALID(SID_Contrary))
    [SID_Contrary] = {
        .desc = MSG_SKILL_Contrary,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_PairUp) && COMMON_SKILL_VALID(SID_PairUp))
    [SID_PairUp] = {
        .desc = MSG_SKILL_PairUp,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Reflex) && COMMON_SKILL_VALID(SID_Reflex))
    [SID_Reflex] = {
        .desc = MSG_SKILL_Reflex,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_RampUp) && COMMON_SKILL_VALID(SID_RampUp))
    [SID_RampUp] = {
        .desc = MSG_SKILL_RampUp,
        .icon = GFX_SkillIcon_RampUp,
    },
#endif

#if (defined(SID_Transform) && COMMON_SKILL_VALID(SID_Transform))
    [SID_Transform] = {
        .desc = MSG_SKILL_Transform,
        .icon = GFX_SkillIcon_Transform,
    },
#endif

#if (defined(SID_DarkBargain) && COMMON_SKILL_VALID(SID_DarkBargain))
    [SID_DarkBargain] = {
        .desc = MSG_SKILL_DarkBargain,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_DrawBack) && COMMON_SKILL_VALID(SID_DrawBack))
    [SID_DrawBack] = {
        .desc = MSG_SKILL_DrawBack,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Pivot) && COMMON_SKILL_VALID(SID_Pivot))
    [SID_Pivot] = {
        .desc = MSG_SKILL_Pivot,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Reposition) && COMMON_SKILL_VALID(SID_Reposition))
    [SID_Reposition] = {
        .desc = MSG_SKILL_Reposition,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Shove) && COMMON_SKILL_VALID(SID_Shove))
    [SID_Shove] = {
        .desc = MSG_SKILL_Shove,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Smite) && COMMON_SKILL_VALID(SID_Smite))
    [SID_Smite] = {
        .desc = MSG_SKILL_Smite,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Shadowgift) && COMMON_SKILL_VALID(SID_Shadowgift))
    [SID_Shadowgift] = {
        .desc = MSG_SKILL_Shadowgift,
        .icon = GFX_SkillIcon_Shadowgift,
    },
#endif

#if (defined(SID_ShadowgiftPlus) && COMMON_SKILL_VALID(SID_ShadowgiftPlus))
    [SID_ShadowgiftPlus] = {
        .desc = MSG_SKILL_ShadowgiftPlus,
        .icon = GFX_SkillIcon_ShadowgiftPlus,
    },
#endif

#if (defined(SID_Lumina) && COMMON_SKILL_VALID(SID_Lumina))
    [SID_Lumina] = {
        .desc = MSG_SKILL_Lumina,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_LuminaPlus) && COMMON_SKILL_VALID(SID_LuminaPlus))
    [SID_LuminaPlus] = {
        .desc = MSG_SKILL_LuminaPlus,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Stormgift) && COMMON_SKILL_VALID(SID_Stormgift))
    [SID_Stormgift] = {
        .desc = MSG_SKILL_Stormgift,
        .icon = GFX_SkillIcon_Stormgift,
    },
#endif

#if (defined(SID_StormgiftPlus) && COMMON_SKILL_VALID(SID_StormgiftPlus))
    [SID_StormgiftPlus] = {
        .desc = MSG_SKILL_StormgiftPlus,
        .icon = GFX_SkillIcon_StormgiftPlus,
    },
#endif

#if (defined(SID_Gracegift) && COMMON_SKILL_VALID(SID_Gracegift))
    [SID_Gracegift] = {
        .desc = MSG_SKILL_Gracegift,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_GracegiftPlus) && COMMON_SKILL_VALID(SID_GracegiftPlus))
    [SID_GracegiftPlus] = {
        .desc = MSG_SKILL_GracegiftPlus,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Bladegift) && COMMON_SKILL_VALID(SID_Bladegift))
    [SID_Bladegift] = {
        .desc = MSG_SKILL_Bladegift,
        .icon = GFX_SkillIcon_Bladegift,
    },
#endif

#if (defined(SID_BladegiftPlus) && COMMON_SKILL_VALID(SID_BladegiftPlus))
    [SID_BladegiftPlus] = {
        .desc = MSG_SKILL_BladegiftPlus,
        .icon = GFX_SkillIcon_BladegiftPlus,
    },
#endif

#if (defined(SID_Piercegift) && COMMON_SKILL_VALID(SID_Piercegift))
    [SID_Piercegift] = {
        .desc = MSG_SKILL_Piercegift,
        .icon = GFX_SkillIcon_Piercegift,
    },
#endif

#if (defined(SID_PiercegiftPlus) && COMMON_SKILL_VALID(SID_PiercegiftPlus))
    [SID_PiercegiftPlus] = {
        .desc = MSG_SKILL_PiercegiftPlus,
        .icon = GFX_SkillIcon_PiercegiftPlus,
    },
#endif

#if (defined(SID_Hackgift) && COMMON_SKILL_VALID(SID_Hackgift))
    [SID_Hackgift] = {
        .desc = MSG_SKILL_Hackgift,
        .icon = GFX_SkillIcon_Hackgift,
    },
#endif

#if (defined(SID_HackgiftPlus) && COMMON_SKILL_VALID(SID_HackgiftPlus))
    [SID_HackgiftPlus] = {
        .desc = MSG_SKILL_HackgiftPlus,
        .icon = GFX_SkillIcon_HackgiftPlus,
    },
#endif

#if (defined(SID_Arcgift) && COMMON_SKILL_VALID(SID_Arcgift))
    [SID_Arcgift] = {
        .desc = MSG_SKILL_Arcgift,
        .icon = GFX_SkillIcon_Arcgift,
    },
#endif

#if (defined(SID_ArcgiftPlus) && COMMON_SKILL_VALID(SID_ArcgiftPlus))
    [SID_ArcgiftPlus] = {
        .desc = MSG_SKILL_ArcgiftPlus,
        .icon = GFX_SkillIcon_ArcgiftPlus,
    },
#endif

#if (defined(SID_StealPlus) && COMMON_SKILL_VALID(SID_StealPlus))
    [SID_StealPlus] = {
        .desc = MSG_SKILL_StealPlus,
        .icon = GFX_SkillIcon_StealPlus,
    },
#endif

#if (defined(SID_UpWithArch) && COMMON_SKILL_VALID(SID_UpWithArch))
    [SID_UpWithArch] = {
        .desc = MSG_SKILL_UpWithArch,
        .icon = GFX_SkillIcon_UpWithArch,
    },
#endif

#if (defined(SID_ArdentSacrifice) && COMMON_SKILL_VALID(SID_ArdentSacrifice))
    [SID_ArdentSacrifice] = {
        .desc = MSG_SKILL_ArdentSacrifice,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Cultured) && COMMON_SKILL_VALID(SID_Cultured))
    [SID_Cultured] = {
        .desc = MSG_SKILL_Cultured,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_NiceThighs) && COMMON_SKILL_VALID(SID_NiceThighs))
    [SID_NiceThighs] = {
        .desc = MSG_SKILL_NiceThighs,
        .icon = GFX_SkillIcon_NiceThighs,
    },
#endif

#if (defined(SID_Flank) && COMMON_SKILL_VALID(SID_Flank))
    [SID_Flank] = {
        .desc = MSG_SKILL_Flank,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_ForeignPrincess) && COMMON_SKILL_VALID(SID_ForeignPrincess))
    [SID_ForeignPrincess] = {
        .desc = MSG_SKILL_ForeignPrincess,
        .icon = GFX_SkillIcon_ForeignPrincess,
    },
#endif

#if (defined(SID_FullMetalBody) && COMMON_SKILL_VALID(SID_FullMetalBody))
    [SID_FullMetalBody] = {
        .desc = MSG_SKILL_FullMetalBody,
        .icon = GFX_SkillIcon_FullMetalBody,
    },
#endif

#if (defined(SID_HoardersBane) && COMMON_SKILL_VALID(SID_HoardersBane))
    [SID_HoardersBane] = {
        .desc = MSG_SKILL_HoardersBane,
        .icon = GFX_SkillIcon_HoardersBane,
    },
#endif

#if (defined(SID_IdentityProblems) && COMMON_SKILL_VALID(SID_IdentityProblems))
    [SID_IdentityProblems] = {
        .desc = MSG_SKILL_IdentityProblems,
        .icon = GFX_SkillIcon_IdentityProblems,
    },
#endif

#if (defined(SID_Pathfinder) && COMMON_SKILL_VALID(SID_Pathfinder))
    [SID_Pathfinder] = {
        .desc = MSG_SKILL_Pathfinder,
        .icon = GFX_SkillIcon_Pathfinder,
    },
#endif

#if (defined(SID_ReciprocalAid) && COMMON_SKILL_VALID(SID_ReciprocalAid))
    [SID_ReciprocalAid] = {
        .desc = MSG_SKILL_ReciprocalAid,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Roll12) && COMMON_SKILL_VALID(SID_Roll12))
    [SID_Roll12] = {
        .desc = MSG_SKILL_Roll12,
        .icon = GFX_SkillIcon_Roll12,
    },
#endif

#if (defined(SID_Sacrifice) && COMMON_SKILL_VALID(SID_Sacrifice))
    [SID_Sacrifice] = {
        .desc = MSG_SKILL_Sacrifice,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Thighdeology) && COMMON_SKILL_VALID(SID_Thighdeology))
    [SID_Thighdeology] = {
        .desc = MSG_SKILL_Thighdeology,
        .icon = GFX_SkillIcon_Thighdeology,
    },
#endif

#if (defined(SID_ThotSlayer) && COMMON_SKILL_VALID(SID_ThotSlayer))
    [SID_ThotSlayer] = {
        .desc = MSG_SKILL_ThotSlayer,
        .icon = GFX_SkillIcon_ThotSlayer,
    },
#endif

#if (defined(SID_TriangleAttack) && COMMON_SKILL_VALID(SID_TriangleAttack))
    [SID_TriangleAttack] = {
        .desc = MSG_SKILL_TriangleAttack,
        .icon = GFX_SkillIcon_TriangleAttack,
    },
#endif

#if (defined(SID_Swarm) && COMMON_SKILL_VALID(SID_Swarm))
    [SID_Swarm] = {
        .desc = MSG_SKILL_Swarm,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Capture) && COMMON_SKILL_VALID(SID_Capture))
    [SID_Capture] = {
        .desc = MSG_SKILL_Capture,
        .icon = GFX_SkillIcon_Capture,
    },
#endif

#if (defined(SID_MoonBow) && COMMON_SKILL_VALID(SID_MoonBow))
    [SID_MoonBow] = {
        .desc = MSG_SKILL_MoonBow,
        .icon = GFX_SkillIcon_MoonBow,
    },
#endif

#if (defined(SID_PastelVeil) && COMMON_SKILL_VALID(SID_PastelVeil))
    [SID_PastelVeil] = {
        .desc = MSG_SKILL_PastelVeil,
        .icon = GFX_SkillIcon_PastelVeil,
    },
#endif

#if (defined(SID_CatchEmAll) && COMMON_SKILL_VALID(SID_CatchEmAll))
    [SID_CatchEmAll] = {
        .desc = MSG_SKILL_CatchEmAll,
        .icon = GFX_SkillIcon_CatchEmAll,
    },
#endif

#if (defined(SID_DarkHorse) && COMMON_SKILL_VALID(SID_DarkHorse))
    [SID_DarkHorse] = {
        .desc = MSG_SKILL_DarkHorse,
        .icon = GFX_SkillIcon_DarkHorse,
    },
#endif

#if (defined(SID_AdaptiveStance) && COMMON_SKILL_VALID(SID_AdaptiveStance))
    [SID_AdaptiveStance] = {
        .desc = MSG_SKILL_AdaptiveStance,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_AdrenalineRush) && COMMON_SKILL_VALID(SID_AdrenalineRush))
    [SID_AdrenalineRush] = {
        .desc = MSG_SKILL_AdrenalineRush,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_TripUp) && COMMON_SKILL_VALID(SID_TripUp))
    [SID_TripUp] = {
        .desc = MSG_SKILL_TripUp,
        .icon = GFX_SkillIcon_TripUp,
    },
#endif

#if (defined(SID_DemolitionExpert) && COMMON_SKILL_VALID(SID_DemolitionExpert))
    [SID_DemolitionExpert] = {
        .desc = MSG_SKILL_DemolitionExpert,
        .icon = GFX_SkillIcon_WIP,
    },
#endif


#if (defined(SID_Onimaru) && COMMON_SKILL_VALID(SID_Onimaru))
    [SID_Onimaru] = {
        .desc = MSG_SKILL_Onimaru,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_AdaptiveLunge) && COMMON_SKILL_VALID(SID_AdaptiveLunge))
    [SID_AdaptiveLunge] = {
        .desc = MSG_SKILL_AdaptiveLunge,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_DoubleUp) && COMMON_SKILL_VALID(SID_DoubleUp))
    [SID_DoubleUp] = {
        .desc = MSG_SKILL_DoubleUp,
        .icon = GFX_SkillIcon_DoubleUp,
    },
#endif

#if (defined(SID_TripleUp) && COMMON_SKILL_VALID(SID_TripleUp))
    [SID_TripleUp] = {
        .desc = MSG_SKILL_TripleUp,
        .icon = GFX_SkillIcon_TripleUp,
    },
#endif

#if (defined(SID_Casual) && COMMON_SKILL_VALID(SID_Casual))
    [SID_Casual] = {
        .desc = MSG_SKILL_Casual,
        .icon = GFX_SkillIcon_Casual,
    },
#endif

#if (defined(SID_Doppleganger) && COMMON_SKILL_VALID(SID_Doppleganger))
    [SID_Doppleganger] = {
        .desc = MSG_SKILL_Doppleganger,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Turncoat) && COMMON_SKILL_VALID(SID_Turncoat))
    [SID_Turncoat] = {
        .desc = MSG_SKILL_Turncoat,
        .icon = GFX_SkillIcon_Turncoat,
    },
#endif

#if (defined(SID_LimitBreaker) && COMMON_SKILL_VALID(SID_LimitBreaker))
    [SID_LimitBreaker] = {
        .desc = MSG_SKILL_LimitBreaker,
        .icon = GFX_SkillIcon_LimitBreaker,
    },
#endif

#if (defined(SID_LimitBreakerPlus) && COMMON_SKILL_VALID(SID_LimitBreakerPlus))
    [SID_LimitBreakerPlus] = {
        .desc = MSG_SKILL_LimitBreakerPlus,
        .icon = GFX_SkillIcon_LimitBreakerPlus,
    },
#endif

#if (defined(SID_Dismount) && COMMON_SKILL_VALID(SID_Dismount))
    [SID_Dismount] = {
        .desc = MSG_SKILL_Dismount,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_RiskItAll) && COMMON_SKILL_VALID(SID_RiskItAll))
    [SID_RiskItAll] = {
        .desc = MSG_SKILL_RiskItAll,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_DestinyBond) && COMMON_SKILL_VALID(SID_DestinyBond))
    [SID_DestinyBond] = {
        .desc = MSG_SKILL_DestinyBond,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Secret) && COMMON_SKILL_VALID(SID_Secret))
    [SID_Secret] = {
        .desc = MSG_SKILL_Secret,
        .icon = GFX_SkillIcon_Secret,
    },
#endif

#if (defined(SID_Ludopathy) && COMMON_SKILL_VALID(SID_Ludopathy))
    [SID_Ludopathy] = {
        .desc = MSG_SKILL_Ludopathy,
        .icon = GFX_SkillIcon_Ludopathy,
    },
#endif

#if (defined(SID_WaterWalking) && COMMON_SKILL_VALID(SID_WaterWalking))
    [SID_WaterWalking] = {
        .desc = MSG_SKILL_WaterWalking,
        .icon = GFX_SkillIcon_WaterWalking,
    },
#endif

#if (defined(SID_WaterWalkingPlus) && COMMON_SKILL_VALID(SID_WaterWalkingPlus))
    [SID_WaterWalkingPlus] = {
        .desc = MSG_SKILL_WaterWalkingPlus,
        .icon = GFX_SkillIcon_WaterWalkingPlus,
    },
#endif

#if (defined(SID_PoisonHeal) && COMMON_SKILL_VALID(SID_PoisonHeal))
    [SID_PoisonHeal] = {
        .desc = MSG_SKILL_PoisonHeal,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_BoundlessVitality) && COMMON_SKILL_VALID(SID_BoundlessVitality))
    [SID_BoundlessVitality] = {
        .desc = MSG_SKILL_BoundlessVitality,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Fluffy) && COMMON_SKILL_VALID(SID_Fluffy))
    [SID_Fluffy] = {
        .desc = MSG_SKILL_Fluffy,
        .icon = GFX_SkillIcon_Fluffy,
    },
#endif

#if (defined(SID_MountainClimber) && COMMON_SKILL_VALID(SID_MountainClimber))
    [SID_MountainClimber] = {
        .desc = MSG_SKILL_MountainClimber,
        .icon = GFX_SkillIcon_MountainClimber,
    },
#endif

#if (defined(SID_MountainClimberPlus) && COMMON_SKILL_VALID(SID_MountainClimberPlus))
    [SID_MountainClimberPlus] = {
        .desc = MSG_SKILL_MountainClimberPlus,
        .icon = GFX_SkillIcon_MountainClimberPlus,
    },
#endif

#if (defined(SID_Survivor) && COMMON_SKILL_VALID(SID_Survivor))
    [SID_Survivor] = {
        .desc = MSG_SKILL_Survivor,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Anchor) && COMMON_SKILL_VALID(SID_Anchor))
    [SID_Anchor] = {
        .desc = MSG_SKILL_Anchor,
        .icon = GFX_SkillIcon_Anchor,
    },
#endif

#if (defined(SID_Mercurious) && COMMON_SKILL_VALID(SID_Mercurious))
    [SID_Mercurious] = {
        .desc = MSG_SKILL_Mercurious,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Absolve) && COMMON_SKILL_VALID(SID_Absolve))
    [SID_Absolve] = {
        .desc = MSG_SKILL_Absolve,
        .icon = GFX_SkillIcon_Absolve,
    },
#endif

#if (defined(SID_Entrepreneur) && COMMON_SKILL_VALID(SID_Entrepreneur))
    [SID_Entrepreneur] = {
        .desc = MSG_SKILL_Entrepreneur,
        .icon = GFX_SkillIcon_Entrepreneur,
    },
#endif

#if (defined(SID_Velocity) && COMMON_SKILL_VALID(SID_Velocity))
    [SID_Velocity] = {
        .desc = MSG_SKILL_Velocity,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Unaware) && COMMON_SKILL_VALID(SID_Unaware))
    [SID_Unaware] = {
        .desc = MSG_SKILL_Unaware,
        .icon = GFX_SkillIcon_Unaware,
    },
#endif

#if (defined(SID_AngerPoint) && COMMON_SKILL_VALID(SID_AngerPoint))
    [SID_AngerPoint] = {
        .desc = MSG_SKILL_AngerPoint,
        .icon = GFX_SkillIcon_AngerPoint,
    },
#endif

#if (defined(SID_Adaptable) && COMMON_SKILL_VALID(SID_Adaptable))
    [SID_Adaptable] = {
        .desc = MSG_SKILL_Adaptable,
        .icon = GFX_SkillIcon_Adaptable,
    },
#endif

#if (defined(SID_Debilitator) && COMMON_SKILL_VALID(SID_Debilitator))
    [SID_Debilitator] = {
        .desc = MSG_SKILL_Debilitator,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Mantle) && COMMON_SKILL_VALID(SID_Mantle))
    [SID_Mantle] = {
        .desc = MSG_SKILL_Mantle,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_QuickHands) && COMMON_SKILL_VALID(SID_QuickHands))
    [SID_QuickHands] = {
        .desc = MSG_SKILL_QuickHands,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_StaffParagon) && COMMON_SKILL_VALID(SID_StaffParagon))
    [SID_StaffParagon] = {
        .desc = MSG_SKILL_StaffParagon,
        .icon = GFX_SkillIcon_StaffParagon,
    },
#endif

#if (defined(SID_OgreBody) && COMMON_SKILL_VALID(SID_OgreBody))
    [SID_OgreBody] = {
        .desc = MSG_SKILL_OgreBody,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_BeginnersLuck) && COMMON_SKILL_VALID(SID_BeginnersLuck))
    [SID_BeginnersLuck] = {
        .desc = MSG_SKILL_BeginnersLuck,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_ExpertsExperience) && COMMON_SKILL_VALID(SID_ExpertsExperience))
    [SID_ExpertsExperience] = {
        .desc = MSG_SKILL_ExpertsExperience,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_HedgeFund) && COMMON_SKILL_VALID(SID_HedgeFund))
    [SID_HedgeFund] = {
        .desc = MSG_SKILL_HedgeFund,
        .icon = GFX_SkillIcon_HedgeFund,
    },
#endif

#if (defined(SID_WeaponHeal) && COMMON_SKILL_VALID(SID_WeaponHeal))
    [SID_WeaponHeal] = {
        .desc = MSG_SKILL_WeaponHeal,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Domain) && COMMON_SKILL_VALID(SID_Domain))
    [SID_Domain] = {
        .desc = MSG_SKILL_Domain,
        .icon = GFX_SkillIcon_Domain,
    },
#endif

#if (defined(SID_FortifyingStaff) && COMMON_SKILL_VALID(SID_FortifyingStaff))
    [SID_FortifyingStaff] = {
        .desc = MSG_SKILL_FortifyingStaff,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_StaffGuard) && COMMON_SKILL_VALID(SID_StaffGuard))
    [SID_StaffGuard] = {
        .desc = MSG_SKILL_StaffGuard,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_GoodyBasket) && COMMON_SKILL_VALID(SID_GoodyBasket))
    [SID_GoodyBasket] = {
        .desc = MSG_SKILL_GoodyBasket,
        .icon = GFX_SkillIcon_GoodyBasket,
    },
#endif

#if (defined(SID_MakeAKilling) && COMMON_SKILL_VALID(SID_MakeAKilling))
    [SID_MakeAKilling] = {
        .desc = MSG_SKILL_MakeAKilling,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_NecroCopy) && COMMON_SKILL_VALID(SID_NecroCopy))
    [SID_NecroCopy] = {
        .desc = MSG_SKILL_NecroCopy,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_SwordProwess) && COMMON_SKILL_VALID(SID_SwordProwess))
    [SID_SwordProwess] = {
        .desc = MSG_SKILL_SwordProwess,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_LanceProwess) && COMMON_SKILL_VALID(SID_LanceProwess))
    [SID_LanceProwess] = {
        .desc = MSG_SKILL_LanceProwess,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_AxeProwess) && COMMON_SKILL_VALID(SID_AxeProwess))
    [SID_AxeProwess] = {
        .desc = MSG_SKILL_AxeProwess,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_BowProwess) && COMMON_SKILL_VALID(SID_BowProwess))
    [SID_BowProwess] = {
        .desc = MSG_SKILL_BowProwess,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_AnimaProwess) && COMMON_SKILL_VALID(SID_AnimaProwess))
    [SID_AnimaProwess] = {
        .desc = MSG_SKILL_AnimaProwess,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_DarkProwess) && COMMON_SKILL_VALID(SID_DarkProwess))
    [SID_DarkProwess] = {
        .desc = MSG_SKILL_DarkProwess,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_LightProwess) && COMMON_SKILL_VALID(SID_LightProwess))
    [SID_LightProwess] = {
        .desc = MSG_SKILL_LightProwess,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Break) && COMMON_SKILL_VALID(SID_Break))
    [SID_Break] = {
        .desc = MSG_SKILL_Break,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Resurrection) && COMMON_SKILL_VALID(SID_Resurrection))
    [SID_Resurrection] = {
        .desc = MSG_SKILL_Resurrection,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Seer) && COMMON_SKILL_VALID(SID_Seer))
    [SID_Seer] = {
        .desc = MSG_SKILL_Seer,
        .icon = GFX_SkillIcon_Seer,
    },
#endif

#if (defined(SID_Chipper) && COMMON_SKILL_VALID(SID_Chipper))
    [SID_Chipper] = {
        .desc = MSG_SKILL_Chipper,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Arise) && COMMON_SKILL_VALID(SID_Arise))
    [SID_Arise] = {
        .desc = MSG_SKILL_Arise,
        .icon = GFX_SkillIcon_Arise,
    },
#endif

#if (defined(SID_CapacityHalf) && COMMON_SKILL_VALID(SID_CapacityHalf))
    [SID_CapacityHalf] = {
        .desc = MSG_SKILL_CapacityHalf,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_CapacityOne) && COMMON_SKILL_VALID(SID_CapacityOne))
    [SID_CapacityOne] = {
        .desc = MSG_SKILL_CapacityOne,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_MercyPlus) && COMMON_SKILL_VALID(SID_MercyPlus))
    [SID_MercyPlus] = {
        .desc = MSG_SKILL_MercyPlus,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Prodigy) && COMMON_SKILL_VALID(SID_Prodigy))
    [SID_Prodigy] = {
        .desc = MSG_SKILL_Prodigy,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_DangerRanger) && COMMON_SKILL_VALID(SID_DangerRanger))
    [SID_DangerRanger] = {
        .desc = MSG_SKILL_DangerRanger,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Savior) && COMMON_SKILL_VALID(SID_Savior))
    [SID_Savior] = {
        .desc = MSG_SKILL_Savior,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Toxic) && COMMON_SKILL_VALID(SID_Toxic))
    [SID_Toxic] = {
        .desc = MSG_SKILL_Toxic,
        .icon = GFX_SkillIcon_Toxic,
    },
#endif

#if (defined(SID_MendArms) && COMMON_SKILL_VALID(SID_MendArms))
    [SID_MendArms] = {

        .desc = MSG_SKILL_MendArms,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_KillStreak) && COMMON_SKILL_VALID(SID_KillStreak))
    [SID_KillStreak] = {
        .desc = MSG_SKILL_KillStreak,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_HyperFocus) && COMMON_SKILL_VALID(SID_HyperFocus))
    [SID_HyperFocus] = {
        .desc = MSG_SKILL_HyperFocus,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_TakerDefense) && COMMON_SKILL_VALID(SID_TakerDefense))
    [SID_TakerDefense] = {
        .desc = MSG_SKILL_TakerDefense,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_TakerLuck) && COMMON_SKILL_VALID(SID_TakerLuck))
    [SID_TakerLuck] = {
        .desc = MSG_SKILL_TakerLuck,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_TakerMagic) && COMMON_SKILL_VALID(SID_TakerMagic))
    [SID_TakerMagic] = {
        .desc = MSG_SKILL_TakerMagic,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_TakerMovement) && COMMON_SKILL_VALID(SID_TakerMovement))
    [SID_TakerMovement] = {
        .desc = MSG_SKILL_TakerMovement,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_TakerResistance) && COMMON_SKILL_VALID(SID_TakerResistance))
    [SID_TakerResistance] = {
        .desc = MSG_SKILL_TakerResistance,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_TakerSkill) && COMMON_SKILL_VALID(SID_TakerSkill))
    [SID_TakerSkill] = {
        .desc = MSG_SKILL_TakerSkill,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_TakerSpectrum) && COMMON_SKILL_VALID(SID_TakerSpectrum))
    [SID_TakerSpectrum] = {
        .desc = MSG_SKILL_TakerSpectrum,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_TakerSpeed) && COMMON_SKILL_VALID(SID_TakerSpeed))
    [SID_TakerSpeed] = {
        .desc = MSG_SKILL_TakerSpeed,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_TakerStrength) && COMMON_SKILL_VALID(SID_TakerStrength))
    [SID_TakerStrength] = {
        .desc = MSG_SKILL_TakerStrength,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_SelfHealing) && COMMON_SKILL_VALID(SID_SelfHealing))
    [SID_SelfHealing] = {
        .desc = MSG_SKILL_SelfHealing,
        .icon = GFX_SkillIcon_SelfHealing,
    },
#endif

#if (defined(SID_IronDome) && COMMON_SKILL_VALID(SID_IronDome))
    [SID_IronDome] = {
        .desc = MSG_SKILL_IronDome,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Alacrity) && COMMON_SKILL_VALID(SID_Alacrity))
    [SID_Alacrity] = {
        .desc = MSG_SKILL_Alacrity,
        .icon = GFX_SkillIcon_Alacrity,
    },
#endif

#if (defined(SID_AlacrityPlus) && COMMON_SKILL_VALID(SID_AlacrityPlus))
    [SID_AlacrityPlus] = {
        .desc = MSG_SKILL_AlacrityPlus,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_AssignDecoy) && COMMON_SKILL_VALID(SID_AssignDecoy))
    [SID_AssignDecoy] = {
        .desc = MSG_SKILL_AssignDecoy,
        .icon = GFX_SkillIcon_AssignDecoy,
    },
#endif

#if (defined(SID_Canter) && COMMON_SKILL_VALID(SID_Canter))
    [SID_Canter] = {
        .desc = MSG_SKILL_Canter,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Echo) && COMMON_SKILL_VALID(SID_Echo))
    [SID_Echo] = {
        .desc = MSG_SKILL_Echo,
        .icon = GFX_SkillIcon_Echo,
    },
#endif

#if (defined(SID_Guardian) && COMMON_SKILL_VALID(SID_Guardian))
    [SID_Guardian] = {
        .desc = MSG_SKILL_Guardian,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_ShadowFlash) && COMMON_SKILL_VALID(SID_ShadowFlash))
    [SID_ShadowFlash] = {
        .desc = MSG_SKILL_ShadowFlash,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_GrazingBlow) && COMMON_SKILL_VALID(SID_GrazingBlow))
    [SID_GrazingBlow] = {
        .desc = MSG_SKILL_GrazingBlow,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Counterattack) && COMMON_SKILL_VALID(SID_Counterattack))
    [SID_Counterattack] = {
        .desc = MSG_SKILL_Counterattack,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Wrestler) && COMMON_SKILL_VALID(SID_Wrestler))
    [SID_Wrestler] = {
        .desc = MSG_SKILL_Wrestler,
        .icon = GFX_SkillIcon_Wrestler,
    },
#endif

#if (defined(SID_AbsorbMelee) && COMMON_SKILL_VALID(SID_AbsorbMelee))
    [SID_AbsorbMelee] = {
        .desc = MSG_SKILL_AbsorbMelee,
        .icon = GFX_SkillIcon_AbsorbMelee,
    },
#endif

#if (defined(SID_AbsorbMagic) && COMMON_SKILL_VALID(SID_AbsorbMagic))
    [SID_AbsorbMagic] = {
        .desc = MSG_SKILL_AbsorbMagic,
        .icon = GFX_SkillIcon_AbsorbMagic,
    },
#endif

#if (defined(SID_Duel) && COMMON_SKILL_VALID(SID_Duel))
    [SID_Duel] = {
        .desc = MSG_SKILL_Duel,
        .icon = GFX_SkillIcon_Duel,
    },
#endif

#if (defined(SID_Trader) && COMMON_SKILL_VALID(SID_Trader))
    [SID_Trader] = {
        .desc = MSG_SKILL_Trader,
        .icon = GFX_SkillIcon_Trader,
    },
#endif

#if (defined(SID_Offhand) && COMMON_SKILL_VALID(SID_Offhand))
    [SID_Offhand] = {
        .desc = MSG_SKILL_Offhand,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_TwinCrests) && COMMON_SKILL_VALID(SID_TwinCrests))
    [SID_TwinCrests] = {
        .desc = MSG_SKILL_TwinCrests,
        .icon = GFX_SkillIcon_TwinCrests,
    },
#endif

#if (defined(SID_Flurry) && COMMON_SKILL_VALID(SID_Flurry))
    [SID_Flurry] = {
        .desc = MSG_SKILL_Flurry,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Antihex) && COMMON_SKILL_VALID(SID_Antihex))
    [SID_Antihex] = {
        .desc = MSG_SKILL_Antihex,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Equalizer) && COMMON_SKILL_VALID(SID_Equalizer))
    [SID_Equalizer] = {
        .desc = MSG_SKILL_Equalizer,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Perch) && COMMON_SKILL_VALID(SID_Perch))
    [SID_Perch] = {
        .desc = MSG_SKILL_Perch,
        .icon = GFX_SkillIcon_Perch,
    },
#endif

#if (defined(SID_MountainMan) && COMMON_SKILL_VALID(SID_MountainMan))
    [SID_MountainMan] = {
        .desc = MSG_SKILL_MountainMan,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Saint) && COMMON_SKILL_VALID(SID_Saint))
    [SID_Saint] = {
        .desc = MSG_SKILL_Saint,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_AidRefusal) && COMMON_SKILL_VALID(SID_AidRefusal))
    [SID_AidRefusal] = {
        .desc = MSG_SKILL_AidRefusal,
        .icon = GFX_SkillIcon_AidRefusal,
    },
#endif

#if (defined(SID_WhiteMage) && COMMON_SKILL_VALID(SID_WhiteMage))
    [SID_WhiteMage] = {
        .desc = MSG_SKILL_WhiteMage,
        .icon = GFX_SkillIcon_WhiteMage,
    },
#endif

#if (defined(SID_GorillaTactics) && COMMON_SKILL_VALID(SID_GorillaTactics))
    [SID_GorillaTactics] = {
        .desc = MSG_SKILL_GorillaTactics,
        .icon = GFX_SkillIcon_GorillaTactics,
    },
#endif

#if (defined(SID_MoreForMe) && COMMON_SKILL_VALID(SID_MoreForMe))
    [SID_MoreForMe] = {
        .desc = MSG_SKILL_MoreForMe,
        .icon = GFX_SkillIcon_MoreForMe,
    },
#endif

#if (defined(SID_Mimicry) && COMMON_SKILL_VALID(SID_Mimicry))
    [SID_Mimicry] = {
        .desc = MSG_SKILL_Mimicry,
        .icon = GFX_SkillIcon_Mimicry,
    },
#endif

#if (defined(SID_ShedSkin) && COMMON_SKILL_VALID(SID_ShedSkin))
    [SID_ShedSkin] = {
        .desc = MSG_SKILL_ShedSkin,
        .icon = GFX_SkillIcon_ShedSkin,
    },
#endif

#if (defined(SID_PhaseShift) && COMMON_SKILL_VALID(SID_PhaseShift))
    [SID_PhaseShift] = {
        .desc = MSG_SKILL_PhaseShift,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_CursedHeal) && COMMON_SKILL_VALID(SID_CursedHeal))
    [SID_CursedHeal] = {
        .desc = MSG_SKILL_CursedHeal,
        .icon = GFX_SkillIcon_CursedHeal,
    },
#endif

#if (defined(SID_Decadon) && COMMON_SKILL_VALID(SID_Decadon))
    [SID_Decadon] = {
        .desc = MSG_SKILL_Decadon,
        .icon = GFX_SkillIcon_Decadon,
    },
#endif

#if (defined(SID_Camouflage) && COMMON_SKILL_VALID(SID_Camouflage))
    [SID_Camouflage] = {
        .desc = MSG_SKILL_Camouflage,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Warpath) && COMMON_SKILL_VALID(SID_Warpath))
    [SID_Warpath] = {
        .desc = MSG_SKILL_Warpath,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_SwiftAttack) && COMMON_SKILL_VALID(SID_SwiftAttack))
    [SID_SwiftAttack] = {
        .desc = MSG_SKILL_SwiftAttack,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_BlacksmithPlus) && COMMON_SKILL_VALID(SID_BlacksmithPlus))
    [SID_BlacksmithPlus] = {
        .desc = MSG_SKILL_BlacksmithPlus,
        .icon = GFX_SkillIcon_BlacksmithPlus,
    },
#endif

#if (defined(SID_DeathBlight) && COMMON_SKILL_VALID(SID_DeathBlight))
    [SID_DeathBlight] = {
        .desc = MSG_SKILL_DeathBlight,
        .icon = GFX_SkillIcon_DeathBlight,
    },
#endif

#if (defined(SID_Trace) && COMMON_SKILL_VALID(SID_Trace))
    [SID_Trace] = {
        .desc = MSG_SKILL_Trace,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Scavenger) && COMMON_SKILL_VALID(SID_Scavenger))
    [SID_Scavenger] = {
        .desc = MSG_SKILL_Scavenger,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Upgrade) && COMMON_SKILL_VALID(SID_Upgrade))
    [SID_Upgrade] = {
        .desc = MSG_SKILL_Upgrade,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Shotput) && COMMON_SKILL_VALID(SID_Shotput))
    [SID_Shotput] = {
        .desc = MSG_SKILL_Shotput,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_ShotputPlus) && COMMON_SKILL_VALID(SID_ShotputPlus))
    [SID_ShotputPlus] = {
        .desc = MSG_SKILL_ShotputPlus,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Extrovert) && COMMON_SKILL_VALID(SID_Extrovert))
    [SID_Extrovert] = {
        .desc = MSG_SKILL_Extrovert,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Transpose) && COMMON_SKILL_VALID(SID_Transpose))
    [SID_Transpose] = {
        .desc = MSG_SKILL_Transpose,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Lifefont) && COMMON_SKILL_VALID(SID_Lifefont))
    [SID_Lifefont] = {
        .desc = MSG_SKILL_Lifefont,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_DivineReprieve) && COMMON_SKILL_VALID(SID_DivineReprieve))
	[SID_DivineReprieve] = {
		.name = MSG_MenuSkill_DivineReprieve_NAME,
		.desc = MSG_MenuSkill_DivineReprieve_DESC,
		.icon = GFX_SkillIcon_WIP,
	},
#endif

#if (defined(SID_EternalVanity) && COMMON_SKILL_VALID(SID_EternalVanity))
    [SID_EternalVanity] = {
        .desc = MSG_SKILL_EternalVanity,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_KnackStrength) && COMMON_SKILL_VALID(SID_KnackStrength))
    [SID_KnackStrength] = {
        .desc = MSG_SKILL_KnackStrength,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_KnackMagic) && COMMON_SKILL_VALID(SID_KnackMagic))
    [SID_KnackMagic] = {
        .desc = MSG_SKILL_KnackMagic,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_KnackSkill) && COMMON_SKILL_VALID(SID_KnackSkill))
    [SID_KnackSkill] = {
        .desc = MSG_SKILL_KnackSkill,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_KnackSpeed) && COMMON_SKILL_VALID(SID_KnackSpeed))
    [SID_KnackSpeed] = {
        .desc = MSG_SKILL_KnackSpeed,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_KnackLuck) && COMMON_SKILL_VALID(SID_KnackLuck))
    [SID_KnackLuck] = {
        .desc = MSG_SKILL_KnackLuck,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_KnackDefense) && COMMON_SKILL_VALID(SID_KnackDefense))
    [SID_KnackDefense] = {
        .desc = MSG_SKILL_KnackDefense,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_KnackResistance) && COMMON_SKILL_VALID(SID_KnackResistance))
    [SID_KnackResistance] = {
        .desc = MSG_SKILL_KnackResistance,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_KnackHealth) && COMMON_SKILL_VALID(SID_KnackHealth))
    [SID_KnackHealth] = {
        .desc = MSG_SKILL_KnackHealth,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_ScrollSavant) && COMMON_SKILL_VALID(SID_ScrollSavant))
    [SID_ScrollSavant] = {
        .desc = MSG_SKILL_ScrollSavant,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_SwordSaint) && COMMON_SKILL_VALID(SID_SwordSaint))
    [SID_SwordSaint] = {
        .desc = MSG_SKILL_SwordSaint,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_SteadyRider) && COMMON_SKILL_VALID(SID_SteadyRider))
    [SID_SteadyRider] = {
        .desc = MSG_SKILL_SteadyRider,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_SteadyRiderPlus) && COMMON_SKILL_VALID(SID_SteadyRiderPlus))
    [SID_SteadyRiderPlus] = {
        .desc = MSG_SKILL_SteadyRiderPlus,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_WyvernCrash) && COMMON_SKILL_VALID(SID_WyvernCrash))
    [SID_WyvernCrash] = {
        .desc = MSG_SKILL_WyvernCrash,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_ExplosiveHeal) && COMMON_SKILL_VALID(SID_ExplosiveHeal))
    [SID_ExplosiveHeal] = {
        .desc = MSG_SKILL_ExplosiveHeal,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_BanditBane) && COMMON_SKILL_VALID(SID_BanditBane))
    [SID_BanditBane] = {
        .desc = MSG_SKILL_BanditBane,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_ExplosiveBuff) && COMMON_SKILL_VALID(SID_ExplosiveBuff))
    [SID_ExplosiveBuff] = {
        .desc = MSG_SKILL_ExplosiveBuff,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Sellsword) && COMMON_SKILL_VALID(SID_Sellsword))
    [SID_Sellsword] = {
        .desc = MSG_SKILL_Sellsword,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_PeoplesKnight) && COMMON_SKILL_VALID(SID_PeoplesKnight))
    [SID_PeoplesKnight] = {
        .desc = MSG_SKILL_PeoplesKnight,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Predation) && COMMON_SKILL_VALID(SID_Predation))
    [SID_Predation] = {
        .desc = MSG_SKILL_Predation,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_PredationPlus) && COMMON_SKILL_VALID(SID_PredationPlus))
    [SID_PredationPlus] = {
        .desc = MSG_SKILL_PredationPlus,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_ScrollScribe) && COMMON_SKILL_VALID(SID_ScrollScribe))
    [SID_ScrollScribe] = {
        .desc = MSG_SKILL_ScrollScribe,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_SpiritedSteps) && COMMON_SKILL_VALID(SID_SpiritedSteps))
    [SID_SpiritedSteps] = {
        .desc = MSG_SKILL_SpiritedSteps,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_Switcher) && COMMON_SKILL_VALID(SID_Switcher))
    [SID_Switcher] = {
        .desc = MSG_SKILL_Switcher,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_DesertTiger) && COMMON_SKILL_VALID(SID_DesertTiger))
    [SID_DesertTiger] = {
        .desc = MSG_SKILL_DesertTiger,
        .icon = GFX_SkillIcon_WIP,
    },
#endif

#if (defined(SID_GracefulWielder) && COMMON_SKILL_VALID(SID_GracefulWielder))
    [SID_GracefulWielder] = {
        .desc = MSG_SKILL_GracefulWielder,
        .icon = GFX_SkillIcon_WIP,
    },
#endif
};
