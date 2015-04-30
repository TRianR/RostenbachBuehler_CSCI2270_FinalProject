/*
 * Josh Buehler
 * Tyler Rostenbach
 * text based dungeon crawler
 */

#include "Game.h"
#include "Game.cpp"
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

Game G= Game();
Room* root=G.makeMap();
Player* p1= new Player;
Monster* m1 = new Monster;

int main()
{
	cout<<"Welcome to House of Frights"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"There are three characters to play"<<endl;
	cout<<endl;
	cout<<"Logan is a football player for the varsity team. He is a little on the shy side, but is nice to those around him." << endl;
	cout<<"He plays defensive tackle, and yes he lifts."<<endl;
	cout<<endl;
	cout<<"Kari is head of the cheer squad, she and Logan are dating. She is a little stuck up, but always supports Logan."<<endl;
	cout<<"She always claims the top of the pyramid."<<endl;
	cout<<endl;
	cout<<"Jackson has been friends with Kari and Logan since first grade. He's a pretty average guy, who doesn't take anything too seriously."<<endl;
	cout<<"He can keep up with Kari in a run, but works out with Logan."<<endl;
    cout<<endl;
	bool happy=false;
	string cont;
	string choice;
	while(happy == false)
	{
		cout<<"Who will you play as?"<<endl;
		cout<<"1. Logan"<<endl;
		cout<<"2. Kari"<<endl;
		cout<<"3. Jackson"<<endl;
		cin>>choice;
		p1=G.setPlayer(stoi(choice));
		G.preChoiceStatus(p1);
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"Are you happy with your choice?"<<endl;
		cout<<endl;
		cout<<"           y/n"<<endl;
		cin>>cont;
		if(cont=="y")
		{
			happy=true;
		}
		else
		{
			happy=false;
		}
	}

	cout<<"Three friends are walking down the road, they have their hoods and collars up against the wind."<<endl;
	cout<<"The other two are sharing friendly banter, but you are quiet thinking about what you're about to do."<<endl;
	cout<<"Once again you break your self-imposed silence, 'Are you sure that I have to do this?'"<<endl;
	cout<<"'It was your dare, I told you to pick truth' comes from one of the others during a pause in their conversation."<<endl;
	cout<<"An abandoned house looms in the moonlight. The roof collapsed in places, shutters askew or missing entirely."<<endl;
	cout<<"It's not a comforting sight."<<endl;
	cout<<"'What if it collapses on me?'"<<endl;
	cout<<"'Then we leave you...'"<<endl;
	cout<<"You shoot a glare at the two of them as they snicker, their faces partially hidden in shadow"<<endl;
	cout<<"'It was only a joke, relax'"<<endl;
	cout<<"It was a stupid dare to take, but this is what happens when you decide to step up"<<endl;
	cout<<"You realize you've arrived at the first step on to the porch"<<endl;
	cout<<"You brace yourself and take the first step onto the porch."<<endl;

	p1->location = root;
    G.startGame(p1);
}

