#ifndef GAME_H
#define GAME_H
#include <string>
<<<<<<< HEAD
=======


>>>>>>> 61cf7eb7c8e2d07c91ccec33947b97915b77143c
struct Room
{
	std::string name;
	std::string entMes;
	std::string bossName;
	std::string weaponName;
	bool hasWeapon;
	bool hasPotion;
	bool hasMon;
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
	std::string weaponName;
	int potions = 3;
	int attack;
	int dodgeTrue;
<<<<<<< HEAD
	//Weapon weapon;
=======
>>>>>>> 61cf7eb7c8e2d07c91ccec33947b97915b77143c
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
<<<<<<< HEAD
        void takePotion(Player*);
=======
        int takePotion(Player*);
        void addWeapon(Player*);
>>>>>>> 61cf7eb7c8e2d07c91ccec33947b97915b77143c
        void doBattle(Player*);
        bool HitOrMiss(int);
        int dealDamage(Player*, Monster*);
        int takeDamage(Player*, Monster*);
        Room* makeMap();
        void changeRoom(Player*);
<<<<<<< HEAD
        void startGame(Player*);
        void searchRoom(Player*);
        void addWeapon(Player*);
        void startGame(Player*, Monster*);
        void MakeMonster(Player* , Monster*);
=======
        void searchRoom(Player*);
        void startGame(Player*);
        Monster* MakeMonster(Player*);
>>>>>>> 61cf7eb7c8e2d07c91ccec33947b97915b77143c
    protected:
    private:
		void playerSet(int);
		//void printMenu(Player);

};

#endif // GAME_H
