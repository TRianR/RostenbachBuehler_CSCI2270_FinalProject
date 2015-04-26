#ifndef GAME_H
#define GAME_H
#include <string>
<<<<<<< HEAD
=======

>>>>>>> 22b64163272cb0d684b88c8bc79a5748792bf5d9
struct Room
{
	std::string name;
	std::string entMes;
	std::string bossName;
	std::string weaponName;
	bool isEnd;
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
        int takePotion(Player*);
        void addWeapon(Player*);
<<<<<<< HEAD
        bool doBattle(Player*);
=======
        void doBattle(Player*);
>>>>>>> 22b64163272cb0d684b88c8bc79a5748792bf5d9
        bool HitOrMiss(int);
        int dealDamage(Player*, Monster*);
        int takeDamage(Player*, Monster*);
        Room* makeMap();
        void changeRoom(Player*);
<<<<<<< HEAD
        void searchRoom(Player*);
        void startGame(Player*);
=======
        void startGame(Player*);
        void searchRoom(Player*);
        void startGame(Player*, Monster*);
        void MakeMonster(Player* , Monster*);
>>>>>>> 22b64163272cb0d684b88c8bc79a5748792bf5d9
        Monster* MakeMonster(Player*);
    protected:
    private:
		void playerSet(int);
};

#endif // GAME_H
