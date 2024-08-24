#ifndef INN_H
#define INN_H
#include "location.h"

typedef struct {
    char name[30];
    int price;
    int health_restore;
    int mana_restore; // 0 if not applicable
    char description[100];
    Location location;
} InnService;

typedef struct {
    InnService services[5];
} Inn;


#endif