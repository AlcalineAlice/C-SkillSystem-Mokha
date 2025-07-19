#include "gbafe.h"

extern const int UseForgedItemDurability;
int GetForgedItemDurability(int id); 
int InitFreeForgedItemSlot(int item); 
int IncrementForgeCount(int item, int amount); 
int DecrementForgeCount(int item, int amount); 
int CanItemBeForged(int item); 

extern struct UnitInfoWindowProc* UnitInfoWindow_DrawBase(struct UnitInfoWindowProc* proc, struct Unit* unit, int x, int y, int width, int lines);
extern int GetUnitInfoWindowX(struct Unit* unit, int width);



struct ForgeBonuses {
	s8 mtBonus; 	/* 0x00 */
	s8 hitBonus; 	/* 0x01 */
	s8 critBonus;	/* 0x02 */
	s8 wtBonus;		/* 0x03 */
};

struct ForgeLimits {
	u8 forgeIndex;	/* 0x00 */
	u8 maxCount;	/* 0x01 */
	u16 baseCost;	/* 0x02 */
};

// list in EA of potential forging bonuses
extern const struct ForgeBonuses gForgeBonuses[];

// table in EA indexed by item id of forge parameters
extern const struct ForgeLimits gForgeLimits[256];

// text definitions
extern u16 ItemAtMaxForgeCountRText_Link;
extern u16 ItemCannotBeForgedRText_Link;
extern u16 NotEnoughGoldToForgeItemRText_Link;

// functions related to forge bonuses and limits
int GetItemForgeCount(int item);
int SetItemForgeCount(int item, int val);
int GetItemForgeCost(int item);
bool IsItemForgeable(int item);

// MENUS MENUS MENUS
void ForgeMenuInit(struct MenuProc* proc);
u8 ForgeMenuItemUsability(const struct MenuItemDef*, int number);
int DrawForgeMenuItem(struct MenuProc* menu, struct MenuItemProc* menuItem);
void DrawItemForgeMenuLine(struct Text* text, int item, u16* mapOut);
void CallForgeMenuASMC(struct EventEngineProc* proc);
int ForgeMenuSwitchIn(struct MenuProc* menu, struct MenuItemProc* menuItem);
u8 ForgeMenuOnSelect(struct MenuProc* menu, struct MenuItemProc* menuItem);

void MakeForgedItemUnbreakable(int item, bool state);

extern const int NumOfForgables; // Same as max item durability, 0 is invalid
struct ForgedItemRam {
	u16 uses : 6;
	u16 unbreakable : 1; // pay a lot of extra money to make it unbreakable?
	u16 hit : 3;  // currently forge count, but could be changed to how many times
					// hit has been forged
#ifdef CONFIG_FE4_CRIT_BONUS_ON_KILL
	u16 crit : 6; // Used to store an additional crit every time the user wins a battle, max 50
#else
	u16 mt : 3;   // unused: I recommend how many times mt has been forged
	u16 crit : 3; // also unused: I recommend crit
#endif
	// u8 skill; // idea guying here for Jester
	// u8 name[7]; // naming forged items would take up a lot of ram and be a pain
	// to do, good luck Jester
};
extern struct ForgedItemRam *gForgedItemRam; // NumOfForgables entries

// in vanilla, GameSavePackedUnit / SuspendSavePackedUnit don't save the 0x80
// durability bit but if it did, it could be used to determine whether it's
// forged or not. if not forged, then it could use durability in the regular way
// #define FORGED_ITEM 0x8000
// #define ITEM_FORGE_ID(id) "(id >> 8)& 0x3F"