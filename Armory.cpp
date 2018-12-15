// Armory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include <iostream>

using namespace std;
int main()
{
	// Initializations
	deck thedeck;
	player player1;
	player player2;
	player player3;
	int winningscore;
	cin >> winningscore;

//	thedeck.shuffledeck();  //Uncomment to shuffle

	// start the game and play until one player earns enough points
	while (player1.getscore() < winningscore && player2.getscore() < winningscore && player3.getscore() < winningscore) {
		while()
		player1.getinitialhand(thedeck);
		player2.getinitialhand(thedeck);
		player3.getinitialhand(thedeck);
	}

	

	return 0;
}
