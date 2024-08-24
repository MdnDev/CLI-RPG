#ifndef BLACKSMITH_SHOP_H
#define BLACKSMITH_SHOP_H
#include "location.h"

typedef struct {
    char name[30];
    int price;
    int attack;
    char description[100];
    Location location;
} WeaponItem;

typedef struct {
    WeaponItem items[5];
} BlacksmithShop;

void initBlacksmithShop(BlacksmithShop *shop);

#endif // BLACKSMITH_SHOP_H