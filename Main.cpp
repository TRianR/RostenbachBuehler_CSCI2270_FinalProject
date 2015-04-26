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
	cout<<"Logan is a footbal player for the varsity team. He is a little on the shy side, but is nice to those around him. Logan plays defensive tackle, and yes he lifts."<<endl;
	cout<<"Kari is head of the cheersquad, she and logan are dating. She is a little stuck up, but always supports logan. She always claims the top of the pyramid."<<endl;
	cout<<"Jackson has been friends with Kari and logan since first grade. He's a pretty average guy, who doesn't take anything too seriously. Jackson can keep up with Kari in a run, but works out with Logan."<<endl;

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
	p1->location = root;
	G.MakeMonster(p1, m1);
    G.startGame(p1, m1);
}

