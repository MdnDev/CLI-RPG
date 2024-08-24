// enemies.h
#ifndef ENEMIES_TYPES_H
#define ENEMIES_TYPES_H
#include <stdbool.h>
#include "location/location.h"

typedef enum {
    MONSTER,
    BOSS,
    RIVAL
} EnemyType;

typedef enum {
    INCREMENT,
    DECREASE,
    MULTIPLY,
    DIVIDE
} Effect;

typedef enum {
    HEALTH,
    MANA,
    ATTACK,
    DEFENSE,
    RAGE_MODE
} EffectArea;

typedef struct {
    char name[50];
    int damage;
} Attack;

typedef struct {
    Attack primaryAttack[50];
    Attack secondaryAttack[50];
    Attack specialAttack[50];
} AttackList;

typedef struct {
    char name[50];
    int cost;
    int target;
    char description[50]; // seconds
    int duration;
    int amount;
    Effect effect;
    EffectArea effectArea;
} Spell;

typedef struct {
    char name[50];
    int health;
    int mana;
    int defense;
    int attackStrength;
    char weakness[50];
    bool inRageMode; // Only for Bosses and Rivals
    int experience;
    int gold;
    bool hasSpell;
    union {
        Spell spell;
    };
    AttackList attacks;
    EnemyType enemyType;
    Location location;
} Enemy;


#endif // ENEMIES_H
