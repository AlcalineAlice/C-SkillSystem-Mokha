#include "common-chax.h"
#include "jester_headers/soundtrack-ids.h"

typedef struct
{
    const char * values[3];
} GameOverQuotes;

#ifdef CONFIG_GAMEOVER_COMEDIC
static const GameOverQuotes game_over_quotes[] = 
{ 
    {{
        "If you want to see it jiggle",
        "then make her giggle.",
        "---------Genghas Khan---------"
    }}
};
#endif

#ifdef CONFIG_GAMEOVER_GENERIC
static const GameOverQuotes game_over_quotes[] = 
{ 
    {{ 
        "Never interrupt your enemy when",
        "they are making a mistake.     ",
        "------------Sun Tzu----------" 
    }},
    {{ 
        "Those who play with the devil's toys",
        "will be brought by degrees to wield his sword.",
        "------------Buckminster Fuller----------" 
    }},
    {{
        "The supreme art of war is to subdue",
        "the enemy without fighting.",
        "------------Sun Tsu----------"
    }},
};
#endif

#ifdef CONFIG_GAMEOVER_SPECIFIC
static const GameOverQuotes game_over_quotes[] = 
{ 
    {{
        "----------Tip----------"
        "Fliers are weak to bow units.",
        "Keep them outside of their range."
    }},
    {{
        "----------Tip----------",
        "Each unit can learn up to 7 skills.",
        "Equip your army wisely."
    }},
    {{
        "----------Tip----------",
        "This game uses a 2 random number state",
        "So hit rates will not always be accurate."
    }},
    {{
        "----------Tip----------",
        "Reaver weapons not only reverse the weapon",
        "triangle, but double its effects."
    }},
    {{
        "----------Tip----------",
        "Complete support convos, visit secret shops",
        "and defeat bosses to earn skill scrolls."
    }},
    {{
        "----------Tip----------",
        "Don't leave your lord units vulnerable.",
        "Build their supports for stat bonuses."
    }},
};
#endif

int HorizontalCenterText(const char *str)
{
    return (240 - GetStringTextLen(str)+7) / 16;
}

LYN_REPLACE_CHECK(GameOverScreen_Init);
void GameOverScreen_Init(struct ProcGameOverScreen *proc)
{
    BMapDispSuspend();

    StartBgm(SONG_GAME_OVER, 0);

    gLCDControlBuffer.bg0cnt.priority = 0;
    gLCDControlBuffer.bg1cnt.priority = 1;
    gLCDControlBuffer.bg2cnt.priority = 2;
    gLCDControlBuffer.bg3cnt.priority = 3;

    SetBackgroundTileDataOffset(2, 0);
    SetBackgroundTileDataOffset(3, 0);

    ApplyPalette(Pal_GameOverText1, BGPAL_GAMEOVER_4);
    Decompress(Img_ChapterIntroFog, BG_CHR_ADDR(BGCHR_BMFX_IMG));

#ifndef CONFIG_GAMEOVER_QUOTES
    Decompress(Img_GameOverText, BG_CHR_ADDR(BGCHR_GAMEOVER_TEXT));
    ApplyPalette(Pal_GameOverText2, BGPAL_GAMEOVER_TEXT);
#endif

    BG_SetPosition(0, 0, 0);
    ClearBg0Bg1();

#ifndef CONFIG_GAMEOVER_QUOTES
    CallARM_FillTileRect(
        TILEMAP_LOCATED(gBG0TilemapBuffer, 7, 9),
        Tsa_GameOverFx,
        TILEREF(BGCHR_GAMEOVER_TEXT, BGPAL_GAMEOVER_TEXT));
#endif

    PutScreenFogEffectOverlayed();
    PutScreenFogEffect();

    BG_EnableSyncByMask(BG2_SYNC_BIT + BG3_SYNC_BIT);

    SetPrimaryHBlankHandler(GameOverScreenHBlank);

    SetBlendConfig(1, 14, 14, 0);

    SetBlendTargetA(0, 0, 1, 0, 0);
    SetBlendTargetB(0, 0, 0, 1, 0);

    MaybeResetSomePal();
    MaybeSmoothChangeSomePal(&PAL_BG_COLOR(BGPAL_GAMEOVER_TEXT, 0), BGPAL_GAMEOVER_TEXT, 1, +1);
    MaybeSmoothChangeSomePal(&PAL_BG_COLOR(BGPAL_GAMEOVER_4, 0), BGPAL_GAMEOVER_4, 1, +1);

    proc->counter1 = 21;

    for (int i = 0; i < 10; ++i)
        CALLARM_ColorFadeTick();
    
#ifdef CONFIG_GAMEOVER_QUOTES
    int xStart    = 0;
    int tileWidth = 24;
    int chosenMessage = NextRN_N(ARRAY_COUNT(game_over_quotes));
    
    for (unsigned i = 0; i < ARRAY_COUNT(game_over_quotes[chosenMessage].values); i++)
    {
        const char *line = game_over_quotes[chosenMessage].values[i];
        PutDrawText(NULL, gBG0TilemapBuffer + TILEMAP_INDEX(HorizontalCenterText(line), 7 + (i * 2)), TEXT_COLOR_SYSTEM_GOLD, xStart, tileWidth, line);
    }
#endif    

    EnablePaletteSync();
}