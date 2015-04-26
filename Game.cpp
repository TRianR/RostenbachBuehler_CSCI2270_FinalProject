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

void Game::printMenu(Player* p1){
	cout<<"1. Search room"<<endl;
	cout<<"2. Leave room"<<endl;
	cout<<"3. Show player status"<<endl;
	cout<<"4. Take potion"<<endl;
	string option;
	cin>>option;
	if(option=="1")
	{
		cout<<"search"<<endl;
	}
	else if(option=="2")
	{
		changeRoom(p1);
	}
	else if(option=="3")
	{
		showStatus(p1);
	}
	else if(option=="4")
	{
	    takePotion(p1);
	}


}

/*
void searchRoom(Player->location){

}
*/


void Game::changeRoom(Player* p1) {

    if(p1->location->north != NULL) {
        cout << "N: Go North to "<<p1->location->north->name << endl;
    }
    if(p1->location->south != NULL) {
        cout << "S: Go South to "<<p1->location->south->name << endl;
    }
    if(p1->location->east != NULL) {
        cout << "E: Go East to "<<p1->location->east->name << endl;
    }
    if(p1->location->west != NULL) {
        cout << "W: Go West to "<<p1->location->west->name << endl;
    }
    string direction;
    cin>>direction;
    if(direction=="N" || direction=="n" )
    {
		p1->location=p1->location->north;
		cout<<p1->location->entMes<<endl;
		printMenu(p1);
	}
	else if(direction=="S" || direction=="s")
    {
		p1->location=p1->location->south;
		cout<<p1->location->entMes<<endl;
		printMenu(p1);
	}
	else if(direction=="E" || direction=="e")
    {
		p1->location=p1->location->east;
		cout<<p1->location->entMes<<endl;
		printMenu(p1);
	}
	else
    {
		p1->location=p1->location->west;;
		cout<<p1->location->entMes<<endl;
		printMenu(p1);
	}
}

Player* Game::setPlayer(int charNum) {
    Player* p1=new Player;

    if(charNum == 1) {
        // Football player
        p1->name = "Logan";
        p1->strength = 9;
        p1->dodge = 2;
        p1->health = 125;
        p1->location=NULL;
    }
    else if(charNum == 2) {
        // Cheerleader
        p1->name = "Kari";
        p1->strength = 5;
        p1->dodge = 6;
        p1->health = 75;
        p1->location=NULL;
    }
    else{
        // Average Dude
        p1->name = "Jackson";
        p1->strength = 7;
        p1->dodge = 4;
        p1->health = 100;
        p1->location=NULL;
    }
    return p1;
}

void Game::preChoiceStatus(Player* p1) {
    cout << "Player Health: " << p1->health << endl;
    cout << "Attack Damage: " << p1->strength << endl;
    cout << "Dodge Chance: " << p1->dodge << endl;
    cout << "Hit Chance: " << p1->hitChance << endl;
}

void Game::showStatus(Player* p1) {
    cout << "========================================" << endl;
    cout << "Player Health: " << p1->health << endl;
    cout << "Attack Damage: " << p1->attack << endl;
    cout << "Dodge Chance: " << p1->dodgeTrue << endl;
    cout << "Hit Chance: " << p1->hitChance << endl;
    cout << "Number of Potions: " << p1->potions << endl;
    cout << "Weapon Name: " << p1->weaponName<< endl;
    cout << "========================================" << endl;
    printMenu(p1);
}

void Game::addWeapon(Player* p1){
    p1->attack = p1->attack + 10;
    cout << "You have picked up a  " << p1->location->weaponName << "!" << endl << "You increase your attack by 10!" << endl;
    p1->weapon = p1->location->weaponName;
    printMenu(p1);
}

/*

int Game::dealDamage(int attack, int hitChance, int enemyHealth) {

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
	Room* const1= new Room;
	const1->name= "Outside";
	const1->entMes="You are on the front porch of the house";
	Room* root=const1;
	Room* const2= new Room;
	const2->name="Foyer";
	const2->entMes="You entered the old house. Looking around, you see cobwebs in the corners of the room. It's larger then you thought it would be from the outside.";
	const1->east=const2;
	const2->west=const1;
	Room* const3= new Room;
	const3->name= "Den";
	const3->entMes="You stand in a decaying den, with a large fireplace in the far wall.";
	const2->east=const3;
	const3->west=const2;

	return root;
}

void Game::MakeMonster(Player *p1, Monster *m1) {
    m1->MonAttack = (p1->health *3);
    m1->MonHealth = (p1->strength *3);
}

void Game::startGame(Player* p1, Monster* m1) {
    cout << p1->location->entMes << endl;
    cout << "Enter anything to enter the house and begin your journey!" << endl;
    string input;
    cin >> input;
    p1->location = p1->location->east;
    cout << p1->location->entMes << endl;

    // Initialize monster
    MakeMonster(p1, m1);
    printMenu(p1);
}

void Game::takePotion(Player* p1) {
    if(p1->potions == 0) {
        cout <<"You have no potions left!" << endl;
        printMenu(p1);
    }
    else{
        cout << "You're health went from " << p1->health;
        p1->health = p1->health +50;
        p1->potions = p1->potions - 1;
        cout << " to " << p1->health << "!" << endl;
        cout << "You have " << p1->potions << " left." << endl;
        printMenu(p1);
    }
}

/*
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

*/
