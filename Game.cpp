#include "Game.h"
#include <cstring>
#include <iostream>
using namespace std;

Game::Game()
{

    //ctor
}

Game::~Game()
{
    //dtor
}

<<<<<<< HEAD
void printMenu(Player->location){
	cout<<"1. Search room"<<endl;
	cout<<"2. Leave room"<<endl;
	
}

/*
void searchRoom(Player->location){
	
}
*/


void changeRoom(Player->location) {
=======
void Game::printMenu() {
    printMenu();
}

void printMenu(Player->location) {
>>>>>>> d2c59c9789dcf76130ff5a89b36fd7196807078c
    if(Room->north != NULL) {
        cout << "N: Go North to "<<Player->location->north.name << endl;
    }
    if(Room->south != NULL) {
        cout << "S: Go South to "<<Player->location->south.name << endl;
    }
    if(Room->east != NULL) {
        cout << "E: Go East to "<<Player->location->east.name << endl;
    }
    if(Room->west != NULL) {
        cout << "W: Go West to "<<Player->location->west.name << endl;
    }
}

void Game::setPlayer(int charNum) {
    if(charNum == 1) {
        // Football player
        Player.name = "Logan";
        Player.strength = 9;
        Player.dodge = 2;
        Player.health = 125;
    }
    if else(charNum == 2) {
        // Cheerleader
        Player.name = "Kari";
        Player.strength = 5;
        Player.dodge = 6;
        Player.health = 75;
    }
    else{
        // Average Dude
        Player.name = "Jackson";
        Player.strength = 7;
        Player.dodge = 4;
        Player.health = 100;
    }
}

void Game::preChoiceStatus(int choice) {
    cout << "Player Health: " << Player.health << endl;
    cout << "Attack Damage: " << Player.strength << endl;
    cout << "Dodge Chance: " << Player.dodge << endl;
    cout << "Hit Chance: " << Player.hitChance << endl;
}

void Game::showStatus(Player) {
    cout << "Player Health: " << Player.health << endl;
    cout << "Attack Damage: " << Weapon.attack + Player.strength << endl;
    cout << "Dodge Chance: " << Weapon.dodgePlus + Player.dodge << endl;
    cout << "Hit Chance: " << Player.hitChance << endl;
    cout << "Number of Potions: " << Player.potions << endl;
    cout << "Number of Keys: " << Player.keys << endl;
    printMenu(Player);
}

<<<<<<< HEAD
/*
int dealDamage(int attack, int hitChance, int enemyHealth) {
=======
int Game::dealDamage(int attack, int hitChance, int enemyHealth) {
>>>>>>> d2c59c9789dcf76130ff5a89b36fd7196807078c
    // Do you hit or miss?
    if(HitOrMiss(hitChance) == false) {
        cout << "You missed!" << endl;
    }
    else{
        cout << "You hit for " << dealDamage(attack) << endl;
        enemyHealth = enemyHealth - attack;
        return enemyHealth;
    }
}

int Game::takeDamage(int enemyAttack, int dodge, int health) {
    // Do you dodge or get hit?
    if(HitOrMiss(dodge) == false) {
        cout << "The enemy has attacked you for " << enemyAttack << endl;
        health = health - enemyAttack;
        return health;
    }
    else{
        cout << "The enemy missed! You take no damage!" << endl;
    }
}
*/ 

Room* Game::makeMap()
{
	Room cons1= new Room;
	const1.name= "Outside";
	const1.entMes="You are on the front porch of the house";
	Room* root=const1;
	Room const2= new Room;
	const2.name="Foyer";
	const2.entMes="You entered the old house. Looking around, you see cobwebs in the corners of the room. It's larger then you thought it would be from the outside.";
	const1.east=const2;
	const2.west=const1;
	Room cons3= new Room;
	const3.name= "Den";
	const3.entMes="You stand in a decaying den, with a large fireplace in the far wall.";
	const2.east=const3;
	const3.west=const2;
	
	return root;
}


<<<<<<< HEAD

=======
int Game::HitOrMiss(int chance) {
    // random number between 1 and 10
    int randomNum = rand() % 10 +1;
    if(chance <= randomNum) {
        return true;
    }
    else {
        return false;
    }
}
<<<<<<< HEAD

=======
>>>>>>> d2c59c9789dcf76130ff5a89b36fd7196807078c
>>>>>>> 7b2d9a392b47cf4e7c79c790350ef6ac8e82ae94
