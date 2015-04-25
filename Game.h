#ifndef GAME_H
#define GAME_H
#include <string>

<<<<<<< HEAD
/*
=======
>>>>>>> d2c59c9789dcf76130ff5a89b36fd7196807078c
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

<<<<<<< HEAD

=======
>>>>>>> d2c59c9789dcf76130ff5a89b36fd7196807078c
class Game
{
    public:
        Game();
        virtual ~Game();
        void setPlayer(int);
        void printMenu();
<<<<<<< HEAD
        void preChoiceStatus(int choice);
        //void showStatus(Player);
        //int dealDamage(int attack, int hitChance, int enemyHealth);
        //int takeDamage(int enemyAttack, dodge, int health);
        void setPlayer(int);
        Room* makeMap();
=======
        void preChoiceStatus(int);
        void showStatus(Player);
        int dealDamage(int, int, int);
        int takeDamage(int, int, int);
>>>>>>> d2c59c9789dcf76130ff5a89b36fd7196807078c
    protected:
    private:
		void playerSet(int);
		void printMenu(Player);

};

#endif // GAME_H
