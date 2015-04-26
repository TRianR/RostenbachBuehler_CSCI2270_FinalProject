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
        Player* setPlayer(int);
        void printMenu(Player*);
        void preChoiceStatus(Player*);
<<<<<<< HEAD

=======
>>>>>>> e9d46bf72bb0db1319570b7511ab849b7bb903cd
        void showStatus(Player*);
        //int dealDamage(int attack, int hitChance, int enemyHealth);
        //int takeDamage(int enemyAttack, int dodge, int health);
        Room* makeMap();
        void changeRoom(Player*);
        void startGame(Player*);
    protected:
    private:
		void playerSet(int);
		void printMenu(Player);

};

#endif // GAME_H
