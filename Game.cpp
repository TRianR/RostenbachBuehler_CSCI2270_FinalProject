#include "Game.h"
using namespace std;

Game::Game()
{
    //ctor
}

Game::~Game()
{
    //dtor
}

void printMenu(Player->location) {
    if(Room->north != NULL) {
        cout << "N: Go North" << endl;
    }
    if(Room->south != NULL) {
        cout << "S: Go South" << endl;
    }
    if(Room->east != NULL) {
        cout << "E: Go East" << endl;
    }
    if(Room->west != NULL) {
        cout << "W: Go West" << endl;
    }
}

void setPlayer(int charNum) {
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

void preChoiceStatus(int choice) {
    cout << "Player Health: " << Player.health << endl;
    cout << "Attack Damage: " << Player.strength << endl;
    cout << "Dodge Chance: " << Player.dodge << endl;
    cout << "Hit Chance: " << Player.hitChance << endl;
}

void showStatus(Player) {
    cout << "Player Health: " << Player.health << endl;
    cout << "Attack Damage: " << Weapon.attack + Player.strength << endl;
    cout << "Dodge Chance: " << Weapon.dodgePlus + Player.dodge << endl;
    cout << "Hit Chance: " << Player.hitChance << endl;
    cout << "Number of Potions: " << Player.potions << endl;
    cout << "Number of Keys: " << Player.keys << endl;
    printMenu();
}

int dealDamage(int attack, int hitChance, int enemyHealth) {
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

int takeDamage(int enemyAttack, int dodge, int health) {
    // Do you dodge or get hit?
    if(DodgeOrNot(dodge) == false) {
        cout << "The enemy has attacked you for " << enemyAttack << endl;
        health = health - enemyAttack;
        return health;
    }
    else{
        cout << "The enemy missed! You take no damage!" << endl;
    }
}


