#include "blacksmithShop.h"

// Implementation of the initialization function
void initBlacksmithShop(BlacksmithShop *shop) {
    WeaponItem ironSword = {"Iron Sword", 200, 10, "A reliable sword made of iron."};
    WeaponItem battleAxe = {"Battle Axe", 300, 15, "A heavy axe that deals significant damage."};
    WeaponItem steelDagger = {"Steel Dagger", 150, 8, "A sharp dagger, perfect for quick attacks."};
    WeaponItem warHammer = {"War Hammer", 350, 18, "A massive hammer that crushes enemies."};
    WeaponItem weaponUpgrade = {"Weapon Upgrade", 100, 5, "Enhance your weapon to make it more powerful."};

    shop->items[0] = ironSword;
    shop->items[1] = battleAxe;
    shop->items[2] = steelDagger;
    shop->items[3] = warHammer;
    shop->items[4] = weaponUpgrade;
}
