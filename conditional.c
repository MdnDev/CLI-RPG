#include <stdio.h>

// Define a struct to represent an item
typedef struct {
    char name[50];
    int quantity;
    char description[100]; // Updated size to 100 for description
} Item;



int main() {
    // Use a character array to store the player's name
    char playerName[50];

    printf("What is your name, young traveller? ");
    scanf("%49s", playerName); // Use playerName directly, limit input size to prevent overflow
    printf("Alright %s, now let's look at your inventory.\n", playerName);

    // Initialize the array of items with correct string notation
    Item playerItems[] = {
        {"Lightning sword", 1, "Sword incrementing damage to enemies of type water by 50%"},
        {"Iron shield", 4, "Basic shield effective against sword attacks"},
        {"Healing Potion", 15, "Restores 25% of maximum energy"},
        {"Warrior HeadBand", 1, "Increases charging speed by 15%"} // Added quantity for consistency
    };

    // Calculate the length of the array
    int arrayLength = sizeof(playerItems) / sizeof(playerItems[0]);

    // Loop through the array and print each item
    for (int i = 0; i < arrayLength; i++) {
        printf("Item: %s | Quantity: %d | Description: %s\n", playerItems[i].name, playerItems[i].quantity, playerItems[i].description);
    }

    

    return 0;
}