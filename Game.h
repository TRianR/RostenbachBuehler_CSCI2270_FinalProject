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
	//Weapon weapon;
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
        void doBattle(Player*);
        //int dealDamage(int attack, int hitChance, int enemyHealth);
        //int takeDamage(int enemyAttack, int dodge, int health);
        Room* makeMap();
        void changeRoom(Player*);
        void startGame(Player*);
        void searchRoom(Player*);
        void addWeapon(Player*);
        void startGame(Player*, Monster*);
        void MakeMonster(Player* , Monster*);
    protected:
    private:
		void playerSet(int);
		//void printMenu(Player);

};

#endif // GAME_H
