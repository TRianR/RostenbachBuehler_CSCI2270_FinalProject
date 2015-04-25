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

<<<<<<< HEAD
struct Weapon
{
	string weaponName;
	int attackPlus;
	int dodgePlus;
};

struct Room
{

};

=======
>>>>>>> 27573df79d443684588efaa1188bfa04d0b0b459
class Game
{
    public:
        Game();
        virtual ~Game();
        void setPlayer(int);
        void printMenu();
        void preChoiceStatus(int choice);
        void showStatus(Player);
        int dealDamage(int attack, int hitChance, int enemyHealth);
        int takeDamage(int enemyAttack, dodge, int health);
        void setPlayer(int);
    protected:
    private:
		void playerSet(int);
		void printMenu();

};

#endif // GAME_H
