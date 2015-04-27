# https-github.com-TRianR-RostenbachBuehler_CSCI2270_FinalProject
Tyler Rostenbach's and Josh Buehler's Final Project for CSCI2270
========
Project Summary
========
A dungeon game using linked lists to connect the rooms, a player class for tracking 
their status, structs for enemies. The story revolving around you being trapped
in a haunted mansion and trying to supplies to escape. The player will traverse
the rooms of the mansion looking for items and a way out while trying to survive the horrors that await.
The player will only be able to escape once they have completed certain objectives and challenges.


How to Run
========
Clone the Main.cpp, Game.cpp, and Game.h to your machine.
git clone https://github.com/TRianR/RostenbachBuehler_CSCI2270_FinalProject.git
Compile and run the Main.cpp and play the game.


Dependencies
========
The only files the program needs are Main.cpp, Game.cpp, and Game.h found here https://github.com/TRianR/RostenbachBuehler_CSCI2270_FinalProject


System Requirements
========
Program was completed and ran on the Virtual Machine.


Group Members
========
Tyler Rostenbach and Josh Buehler.


Contributors
========
No other contributors besides those from the Group Members.


Open Issues/Bugs
========
No known bugs or issues at this time.


Open Enhancement Requests
========
Convert our player struct into a class, make a weapon and item struct, and add more rooms and bosses.


Public Methods Info
========
void printMenu(Player* p1) 
Takes in the player pointer p1 and cout's 5 options that the player can do. It then calls and passes p1 to other functions, quits the game, or if something other than 1 through 5 was input by the user it tells the user they inputed something wrong and reprints the menu.


void searchRoom(Player* p1)
Called via the printMenu function and if the pointer p1->location->hasWeapon == true it sets hasWeapon to false calls the addWeapon function, if pointer p1->location->hasPotion == true it adds one to p1->potions and sets hasPotion to false, and if neither hasWeapon or hasPotion is true it cout's the statement that the user found nothing and calls printMenu. It sets hasWeapon and hasPotion to false after it has been found so the "item" can only be found and picked up once. If left true the user could continuously click search room and find the same items an infinite amount of times.


void addWeapopn(Player* p1)
Called via the searchRoom function and is passed the player pointer p1. With only one weapon implemented, when the player finds it in one of the rooms it increases the players attack +10, displays what weapon they have found, and sets the p1->weaponName to the name of the weapon found. Players damage later on is determined by p1->attack + p1->strength.

void changeRoom(Player* p1)
Called via the printMenu function, option #2. It first checks that if the current room the player is located in has an option to go North South East or West and if they do it then prints out the name of the room and the direction it is that user can take to move there. It then takes the user input, of which room they wish to travel to, and sets the p1->location to said room, i.e if the user selected to go north then it would do p1->location = p1->location->north. Once the room is changed it checks p1->location->hasMon to see if the room has a monster/boss is it, if so it calls the doBattle function. If not it calls printMenu. If user inputs a wrong input, one that is not optional, it simply recalls changeRoom function for them to select again.

bool doBattle(Player* p1)
When p1->location->hasMon == true in the room that the user is it this function is called. It starts by setting a Monster* m1 to function MakeMonster where it sets m1->monHealth and m1->monAttack based of the user's player stats. From here the player(p1) and the monster(m1) do battle. While the player's health and the monster's is greater than 0 the user can select 2 options to perform. 1 to attack the monster, calling the function dealDamage(p1, m1) or 2 which is take a potion which calls the takePotion(p1) function. After the user selects their choice and it deals damage or takes a potion the monster attacks the player, done by calling the takeDamage(p1, m1) function. Once the player's or monster's health is not > 0 it quits the while loop and checks to see if the player died or the monster died. If player died the game ends and outputs a "You lose" screen and if the monster died it outputs a "You killed the enemy" screen. It then checks if the rooms the monster was slain in is the last room, via p1->location->isEnd == false, and if it is not the game continues, if it equals true then it cout's a "Victory Screen" and ends the game.

void showStatus(Player* p1)
Called when user selects option 3 from the printMenu function. It is passed p1 and it then prints out all the player attributes and then calls printMenu so the user can continue with the game.


int takePotion(Player* p1)
Option 4 from the printMenu function. It checks it the user has any potions and if you have none it says you have none and if you have atleast one potion it states what your health was, increases your health, then states what is after taking the potion. It then decreases the amount of potions you have by one and prints out how many potions you have left.

int dealDamage(Player* p1, Monster* m1)
Called during battle from the doBattle function, it takes in p1 and m1. It first make a variable attack which is the sum of p1->strength and p1->attack. It then calls the HitOrMiss function passing the p1->hitChance and it returns false then the player missed their attack and it is done. It HitOrMiss returns true then the players attack has hit the monster and it lowers the monster health by the attack variable made at the start. If the monster's health is less than or equal to 0 then it just assigns the health to 0. It then prints out the monster's name with their health.

int takeDamage(Player* p1, Monster* m1)
Called right after the dealDamage function in the doBattle function if the monster health, m1->MonHealth != 0, and it checks to see if the monster's attack hits the player and if it does it reduces the players health, p1->health. It checks if the mmonster attacks hit by callling the HitOrMiss function and passing the players dodge chance, p1->dodge. If it returns true than the attack hit the player and it lowers the players health by the monster's attack, m1->MonAttack, and cout's the amount for the player was hit for and what their health is after. If it returns false the monster's attack missed and it cout's that the player has dodged.

bool HitOrMiss(int chance)
Passed the players chance to hit the monster and the players chance to dodge the monster's attack. It assigns an int variable randomNum to a randomly generated number between 1 and 10. Then if the passed variable, either p1->dodge or p1->hitChance, is less than or equal the number randomly generated then it returns true, meaning the player has hit or dodged. Else returns false meaning the player didn't hit or get hit turning this turn.

Monster* MakeMonster(Player* p1)
Called when the player is traversing the rooms and finds one with a monster in it, p1->location->hasMon == true. It assigns the monster's attack and health, m1->MonAttack and m1->MonHealth, scaled off the players attack and health and then returns the pointer.

void startGame(Player* p1)
Called via Main.cpp at the very start of the game after the player has selected and signified that they like the character they are going to play as. It "pauses" the game and will continue once the player entered in anything into the terminal, does not matter what they input as long as they input something. It then cout's some messages to build the story of the game and it finally calls printMenu so the player can begin.

Room* makeMap()
Also called via Main.cpp and builds the doubly linked list of rooms that the player can traverse through. It assigns variables to each room, such as if it has a potion/weapon, its name, and if it has a monster.

Player* setPlayer(int charNum)
It sets all the player pointer values to what they are by default depending on which character the user wishes to play as. It then returns p1 which is then passed and used through out the game.

void preChoiceStatus(Player* p1)
Called in Main.cpp and is only called prior the user specifying that they like which character they have selected. It prints out the stats of the character they have currently selected whenever they select a character to play until they say they like it. It is never called later on as showStatus is called in its place.

