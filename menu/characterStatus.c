#include <stdio.h>
#include "../character/character.h"

const char* getClassName(Character *selected_character) 
{
   switch (selected_character->charClass) 
   {
      case HERO: return "Hero";
      case KNIGHT: return "Knight";
      case WIZARD: return "Wizard";
      case SAMOURAI: return "Samourai";
      case NINJA: return "Ninja";
      case ADVENTURER: return "Adventurer";
      case ARCHER: return "Archer";
      case MARTIAL_ARTIST: return "Martial Artist";
      case MECHA: return "Mecha";
      case NPC: return "Non playable Character";
      default: return "Hero";
   }
}

void printCharacterStatus(Character *selected_character) {
    printf("\n********************************************************************************************\n");
    
    // Print character basic info
    printf("| %-15s | HP: %d / %d | MP: %d / %d \n", 
           selected_character->name, 
           selected_character->health, 
           selected_character->maxHealth, 
           selected_character->mana, 
           selected_character->maxMana);
    
    printf("| %-15s | %-5d \n", "Level", selected_character->experience);  
    
    printf("| %-15s | %-15s \n", "Class", getClassName(selected_character));  
    
    printf("********************************************************************************************\n");

    // Print character stats
    printf("| %-15s | %-5d | %-15s | %-5d \n", 
           "Attack", selected_character->attackStrength, 
           "Defense", selected_character->defense);

    printf("| %-15s | %-5d | %-15s | %-5d \n", 
           "Exp", selected_character->experience, 
           "Gold", selected_character->gold);

    printf("********************************************************************************************\n");
    printf("| %-15s | %-5s \n", 
           "Techniques", 
           "Damage");
    // Print character Techniques
    printf("| %-15s | %-5d \n", 
           selected_character->attacks.primaryAttack->name, 
           selected_character->attacks.primaryAttack->damage);

    printf("| %-15s | %-5d \n", 
           selected_character->attacks.secondaryAttack->name, 
           selected_character->attacks.secondaryAttack->damage);

    printf("| %-15s | %-5d \n", 
           selected_character->attacks.specialAttack->name, 
           selected_character->attacks.specialAttack->damage);
    printf("********************************************************************************************\n");
}
