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



