#ifndef GAME_H
#define GAME_H


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
        void setPlayer(int)
    protected:
    private:
		void playerSet(int);
    
};

#endif // GAME_H
