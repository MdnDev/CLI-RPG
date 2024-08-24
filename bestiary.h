#ifndef BESTIARY_H
#define BESTIARY_H
#include "enemies.types.h"

// DANCING DEVIL
Enemy dancing_devil = {"Dancing Devil", 20, 0, 14, 16, "None", false, 7, 10, false, {""}, {{"Normal attack", 15}, {"Sultry Dance", 25}, {"None", 0}}, MONSTER, LOCATION_1 };

//BODKIN ARCHER
Enemy bodkin_archer = {"Bodkin Archer", 21, 2, 18, 22, "None", false, 10, 8, true, {"Buff", 1, 2, "multiplies defense by 2", 60, 2, MULTIPLY, DEFENSE}, {{"Normal attack", 15}, {"None", 0}, {"None", 0}}, MONSTER, LOCATION_1 };

//SLIME
Enemy slime = {"Slime", 7, 0, 8, 10, "None", false, 1, 1, false, {""}, {{"Normal attack", 10}, {"None", 0}, {"None", 0}}, MONSTER, LOCATION_1};

//FENCING FOX
Enemy fencing_fox = {"Fencing Fox", 25, 8, 20, 28, "None", false, 1, 1, true, {"Fizzle", 20, 2, "Seals the magic", 60, 2, DIVIDE, MANA}, {{"Normal attack", 10}, {"Tension reducing dance", 18}, {"None", 0}}, MONSTER, LOCATION_1};

#endif