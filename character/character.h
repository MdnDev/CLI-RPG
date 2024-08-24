#ifndef CHARACTER_H
#define CHARACTER_H
#include "../enemies.types.h"

typedef enum {
    HERO,
    KNIGHT,
    WIZARD,
    SAMOURAI,
    NINJA,
    ADVENTURER,
    ARCHER,
    MARTIAL_ARTIST,
    MECHA,
    NPC
} CharacterClass;

typedef struct {
    char name[30];
    int health;
    int maxHealth;
    int maxMana;
    int mana;
    int defense;
    int attackStrength;
    char weakness[50];
    bool inRageMode; // Only for Bosses and Rivals
    int experience;
    int gold;
    AttackList attacks;
    CharacterClass charClass;
} Character;

// HERO
Character hero = {"The hero", 60, 60,30, 30, 20, 25, "None", false, 10, 10, {{"Lightning Blade", 15}, {"Avalanche", 25}, {"Thunder strike", 50}}, HERO};

// TORA (Samurai)
Character tora = {"Tora", 90, 90, 40, 40, 20, 35, "Lightning", false, 40, 80, {{"Katana Slash", 25}, {"Spirit Strike", 20}, {"Iaijutsu", 40}}, SAMOURAI};

// MECHA_KUMA (Mecha)
Character mecha_kuma = {"Mecha Kuma", 120, 120, 70, 0, 40, 45, "Water", false, 60, 150, {{"Rocket Punch", 30}, {"Laser Cannon", 35}, {"Energy Shield", 25}}, MECHA};

// GLENN (Knight)
Character glenn = {"Glenn", 110, 20, 35, 35, 40, 110, "Fire", false, 45, 90, {{"Sword of Valor", 30}, {"Shield Bash", 20}, {"Holy Smite", 25}}, KNIGHT};

// LEONARD (Wizard)
Character leonard = {"Leonard", 70, 70, 100, 100, 15, 20, "Physical Attacks", false, 60, 120, {{"Fireball", 35}, {"Ice Lance", 30}, {"Arcane Explosion", 40}}, WIZARD};

// JOY (Martial Artist)
Character joy = {"Joy", 80, 80, 10, 10, 20, 35, "Poison", false, 35, 70, {{"Fist of Fury", 25}, {"Roundhouse Kick", 20}, {"Chi Burst", 30}}, MARTIAL_ARTIST};

// TOPAZ (Archer)
Character topaz = {"Topaz", 75, 75, 30, 30, 18, 35, "Wind", false, 40, 75, {{"Piercing Arrow", 30}, {"Volley", 20}, {"Hunter's Mark", 25}}, ARCHER};

// JADE (Ninja)
Character jade = {"Jade", 65, 65, 20, 20, 15, 45, "Light", false, 50, 85, {{"Shadow Strike", 35}, {"Smoke Bomb", 10}, {"Silent Kill", 50}}, NINJA};

#endif