#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  
#include "enemies.types.h"
#include "bestiary.h"
#include "character/character.h"
#include "menu/characterStatus.c"

void printEnemy(Enemy *e) {
    printf("==========================\n");
    printf("Name: %s \n", e->name);
    printf("Health: %d \n", e->health);
    printf("Mana: %d \n", e->mana);
    printf("Defense: %d \n", e->defense);
    printf("Attack Strengh: %d \n", e->attackStrength);
    printf("Weakness: %s \n", e->weakness);
    printf("In Rage Mode: %d \n", e->inRageMode);
    printf("Primary Attack: %s \n", e->attacks.primaryAttack->name);
    printf("Secondary Attack: %s \n", e->attacks.secondaryAttack->name);
    printf("Special Attack: %s \n", e->attacks.specialAttack->name);
    printf("Enemy Type: %d \n", e->enemyType);
    if (e->enemyType == BOSS || e->enemyType == RIVAL) {
        printf(" In Rage Mode: %s \n", e->inRageMode ? "Yes" : "No");
    }
    printf("==========================\n");
}





void printBattleStatus() {
    // Print the names of the characters
    Character heroTeam[3] = {hero, mecha_kuma, jade};
    int heroTeamLength = sizeof(heroTeam) / sizeof(heroTeam[0]);
    char buffer[100];
    printf("\n-----------------------------------------TEAM STATUS-----------------------------------------------\n");
    snprintf(buffer, sizeof(buffer), "| %-15s | %-5s | %-5s | %-15s | %-20s | %-20s |\n", "Name", "HP", "MP", "Main attack", "Sec Attack - MP cost", "Spec Att. - MP cost");
    printf("%s", buffer);
    printf("\n");
    for (int i = 0; i < heroTeamLength; i++) {
        printf("| %-15s | %-5d | %-5d | %-15s | %-15s%-5d | %-15s%-5d |\n", heroTeam[i].name, heroTeam[i].health, heroTeam[i].mana, heroTeam[i].attacks.primaryAttack->name, heroTeam[i].attacks.secondaryAttack->name, heroTeam[i].attacks.secondaryAttack->damage, heroTeam[i].attacks.specialAttack->name, heroTeam[i].attacks.specialAttack->damage );
    }
    printf("---------------------------------------------------------------------------------------------------\n");
}

size_t enemyStructSize = sizeof(Enemy);

// Battle functions

int launchAttack(Enemy *enemy, Character *target) {
    printf("%s launches %s !!! \n", enemy->name, enemy->attacks.primaryAttack->name);
    sleep(1);  // Pause for a second to show the message

    printf("\033[H\033[J");  // Clear the screen
    printf("Hero has %d HP.", target->health);
    fflush(stdout);

    sleep(1);  // Pause for a second before the next message

    if (enemy->attacks.primaryAttack->damage < target->health) {
        target->health = target->health - enemy->attacks.primaryAttack->damage;
        printf("\033[H\033[J");  // Clear the screen
        printf("%s is hit and loses %d health points !!! \n", target->name, enemy->attacks.primaryAttack->damage);
        fflush(stdout);
        sleep(1);  // Pause to show the message
    }

    printf("\033[H\033[J");  // Clear the screen
    printf("Hero has %d HP.", target->health);
    fflush(stdout);

    return 0;
}

typedef enum {
   ENEMY_STRIKE,
   HERO_STRIKE
} Attacker;

int launchSecAttack(Enemy *enemy, Character *character, Attacker attacker) {
    if(attacker == ENEMY_STRIKE){
        printf("%s launches %s !!! \n", enemy->name, enemy->attacks.secondaryAttack->name);

        printf("Hero has %d HP.", character->health);

        if(enemy->attacks.secondaryAttack->damage < character->health){
            character->health = character->health - enemy->attacks.secondaryAttack->damage;
            printf("%s is hit and loses %d health points !!! \n", character->name, enemy->attacks.secondaryAttack->damage);
        };
        
        printf("Hero has %d HP.", character->health);
    }

    printf("%s launches %s !!! \n", character->name, character->attacks.secondaryAttack->name);

        printf("%s has %d HP.", enemy->name, enemy->health);

        if(character->attacks.secondaryAttack->damage < enemy->health){
            enemy->health = enemy->health - character->attacks.secondaryAttack->damage;
            printf("%s is hit and loses %d health points !!! \n", enemy->name, character->attacks.secondaryAttack->damage);
            printf("%s has %d HP. \n",enemy->name, enemy->health);
        };
        
        printf("%s has been hit and lost all HP! \n HP: %d \n.",enemy->name, enemy->health);
        printf("%s is wrecked ! \n.",enemy->name);

    
   
    return 0;
};

int enemyBunchAttack(){
    Enemy *battleEnemies = malloc(enemyStructSize * 6);
    if (battleEnemies == NULL){
        printf("The allocator failed\n");
        return -1;
    }

    

    printf("Battle Time! LFG !!!");

    free(battleEnemies);

    return 0;
}

int main() {

    printf("size of enemy struct is ------> %lu\n", enemyStructSize);

    //printEnemy(&dancing_devil);
    printCharacterStatus(&jade);
    launchAttack(&dancing_devil, &jade);
    //launchSecAttack(&dancing_devil, &hero, HERO);
    //printEnemy(&bodkin_archer);
    //printEnemy(&slime);
    //printBattleStatus();
    printCharacterStatus(&jade);
    

   


    return 0;
};