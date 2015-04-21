#ifndef GAME_H
#define GAME_H

using namespace std;

struct Player
{
	string name;
	int health;
	int strength;
	int dodge;
	int potions;
	int keys;
	bool hasKey;
	Weapon weapon;

};

struct Weapon
{
	string weaponName;
	int attackPlus;
	int dodgePlus;
};

struct Room
{

};

class Game
{
    public:
        Game();
        virtual ~Game();
        void setPlayer(int)
    protected:
    private:
		void playerSet(int);
    
};

#endif // GAME_H
