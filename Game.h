#ifndef GAME_H
#define GAME_H
#include <string>

struct Weapon
{
	std::string weaponName;
	int attackPlus;
	int dodgePlus;
};

struct Room
{

};

struct Player
{
	std::string name;
	int health;
	int strength;
	int dodge;
	int potions;
	int keys;
	bool hasKey;
	Weapon weapon;
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
        void preChoiceStatus(int);
        void showStatus(Player);
        int dealDamage(int, int, int);
        int takeDamage(int, int, int);
    protected:
    private:
		void playerSet(int);
		void printMenu(Player);

};

#endif // GAME_H
