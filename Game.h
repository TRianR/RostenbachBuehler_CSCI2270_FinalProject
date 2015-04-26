#ifndef GAME_H
#define GAME_H
#include <string>

<<<<<<< HEAD



=======
>>>>>>> 3b2654d7840ff9d0ea2c0be2e34e72aa4d93a5b1
struct Room
{
	std::string name;
	std::string entMes;
	std::string bossName;
	std::string weaponName;
	bool hasWeapon;
	bool hasPotion;
	bool hasMonster;
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
<<<<<<< HEAD
	int potions;
	std::string weaponName;
	
=======
	int potions = 3;
	int attack;
	int dodgeTrue;
	std::string weaponName;
	//Weapon weapon;
>>>>>>> 3b2654d7840ff9d0ea2c0be2e34e72aa4d93a5b1
	int hitChance;
	Room* location;

};

struct Monster {
    int MonHealth;
    int MonAttack;
};
class Game
{
    public:
        Game();
        virtual ~Game();
        Player* setPlayer(int);
        void printMenu(Player*);
        void preChoiceStatus(Player*);
        void showStatus(Player*);
        void takePotion(Player*);
        void addWeapon(Player*);
        void doBattle(Player*);
        //int dealDamage(int attack, int hitChance, int enemyHealth);
        //int takeDamage(int enemyAttack, int dodge, int health);
        Room* makeMap();
        void changeRoom(Player*);
<<<<<<< HEAD
        void startGame(Player*);
        void searchRoom(Player*);
        void doBattle(Player*
=======
        void startGame(Player* , Monster*);
        void MakeMonster(Player* , Monster*);
>>>>>>> 3b2654d7840ff9d0ea2c0be2e34e72aa4d93a5b1
    protected:
    private:
		void playerSet(int);
		//void printMenu(Player);

};

#endif // GAME_H
