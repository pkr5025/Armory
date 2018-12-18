#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include <iostream>

using namespace std;
int main()
{
	// Initializations
	deck thedeck;
	humanplayer hplayer1;
	player *player1 = & hplayer1;

	int winningscore;
	cin >> winningscore;

//	thedeck.shuffledeck();  //Uncomment to shuffle

	player1->getinitialhand(thedeck);
	player1->displayhand();
	player1->playcard();
	
	

//	thedeck.shuffledeck();  //Uncomment to shuffle

	// start the game and play until one player earns enough points
//	while (player1.getscore() < winningscore && player2.getscore() < winningscore && player3.getscore() < winningscore) {
//		while()
//		player1.getinitialhand(thedeck);
//		player2.getinitialhand(thedeck);
//		player3.getinitialhand(thedeck);
//	}

	

	return 0;
}
