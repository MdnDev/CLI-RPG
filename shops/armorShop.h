#ifndef ARMORSHORP_H
#define ARMORSHORP_H
#include "character.h"
#include "location.h"

typedef struct {
    char name[30];
    int price;
    int defense; // percentage of defense increment
    int attack; // percentage of attack increment
    char description[100];
    int magic_resistance; // 0 if not applicable
    CharacterClass characterClass; // Character allowed to get armor/weapon
    Location location;
} ArmorItem;

typedef struct {
    ArmorItem items[5];
} Armorshop;

#endif