#ifndef GAME_H
#define GAME_H
#include <string>

/*
struct Weapon
{
	std::string weaponName;
	int attackPlus;
	int dodgePlus;
};
* */

struct Room
{
	std::string name;
	std::string entMes;
	Room* north;
	Room* east;
	Room* south;
	Room* west;
	
};

struct Player
{
	std::string name;
	int health;
	int strength;
	int dodge;
	//int potions;
	//int keys;
	//bool hasKey;
	//Weapon weapon;
	int hitChance;
	Room* location;

};


class Game
{
    public:
        Game();
        virtual ~Game();
        void setPlayer(int);
        void printMenu();
        void preChoiceStatus(int choice);
        //void showStatus(Player);
        //int dealDamage(int attack, int hitChance, int enemyHealth);
        //int takeDamage(int enemyAttack, dodge, int health);
        void setPlayer(int);
        Room* makeMap();
    protected:
    private:
		void playerSet(int);
		void printMenu();

};

#endif // GAME_H
