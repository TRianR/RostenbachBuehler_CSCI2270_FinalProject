#ifndef GAME_H
#define GAME_H
#include <string>


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
        bool doBattle(Player*);
        bool HitOrMiss(int);
        int dealDamage(Player*, Monster*);
        int takeDamage(Player*, Monster*);
        Room* makeMap();
        void changeRoom(Player*);
        void startGame(Player*);
        void searchRoom(Player*);
        Monster* MakeMonster(Player*);
    protected:
    private:
		void playerSet(int);
};

#endif // GAME_H
