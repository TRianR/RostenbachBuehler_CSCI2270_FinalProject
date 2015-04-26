#ifndef GAME_H
#define GAME_H
#include <string>




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
	int potions;
	std::string weaponName;
	
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
        void showStatus(Player*);
        //int dealDamage(int attack, int hitChance, int enemyHealth);
        //int takeDamage(int enemyAttack, int dodge, int health);
        Room* makeMap();
        void changeRoom(Player*);
        void startGame(Player*);
        void searchRoom(Player*);
        void doBattle(Player*
    protected:
    private:
		void playerSet(int);
		void printMenu(Player);

};

#endif // GAME_H
