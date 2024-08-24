enemies have additional fields: 
    - id
    - level_type

creation of arrays of enemies based on level_type:
    - low_level_enemies_array
    - mid_level_enemies_array
    - high_level_enemies_array

during battle:
    - creation of empty array : enemy_battle_ array
This is a temporary array effective only during battle

Depending on the zone and the average level of the hero team, the level_type of the enemies to beat is determined: 

example:
    - if the hero is at a beginner level, and on a beginner zone: 
        - create empty battle array : enemy_battle_ array
        - enemies level should be low_level
        - generate a random integer between min-id and max-id of the enemies in the low_level_enemies_array
        - loop through low_level_enemies_array
        - if the random int == iterator && length of enemy_battle_ array is < 4:
            - push low_level_enemies_array[i] to enemy_battle_ array
        - if length of enemy_battle_ array is = 4:
            - array is full, so we break the loop
    - let the battle happen, at the end of battle:
        - free(enemy_battle_ array)
        - enemy_battle_ array = NULL



Battle mechanics:
    - command line:
        - team stats is printed
        - user is asked to either choose a character or pass or quit the battle:
            - example of user input: "Jade" or "Pass" or "Quit"
            - if the input does not match a name from the hero team or "Pass" or "Quit":
                - user is asked to enter a valid command
        if the user chose a character:
            - user is asked either to:
                - choose a technique -> print_character_techniques
                - choose a spell -> print_character_spells
                - use an object -> print_character_inventory
                - get back to previous prompt
            - user chooses a target for spells and attacks:
                - ex: "Bodkin archer"
        after choosing the user action prompt says:
            - "Jade" is ready !
        this repeats until all characters are ready or if the player passes

Battle actions:
    - temporary empty array is created: user_actions
    - if the user typed "Jade", then "Shadow strike", then "Bodkin Archer:
        - object/struct of type HERO_TEAM_ACTION
            typedef enum {
                char user
                char action
                int target
                char attackName
            } HERO_TEAM_ACTION

        example: {"Jade", "attack", 3, "Shadow Strike } -> pushed to user_actions
    - a function then is called that uses all the info from the array element and takes a hero character and target as parameters:
        - launch attack is the name of the function
    loop through the user_actions_array:
        - for each item of the array, call the function with the right character and target
    - after each attack call a function to check characters stats:
        - if enemy's mp is < 1 -> enemy is dead
        - if hero character's mp is < 1 -> character is knocked out
    - if all character's are knocked out:
        - GAME OVER
    - if all enemeies are dead: 
        - victory -> experience gained -> gold gained
        