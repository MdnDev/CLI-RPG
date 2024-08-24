#ifndef ITEMSHOP_H
#define ITEMSHOP_H
#include "location.h"

typedef struct {
    char name[30];
    int price;
    int effect_amount;
    char description[100];
    Location location;
} ShopItem;

typedef struct {
    ShopItem items[5];
} ItemShop;

#endif