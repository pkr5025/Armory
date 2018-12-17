
#pragma once

#include "Deck.h"

class player {
public:
	void getinitialhand(deck &d);  //generates a 7 card opening hand
	card playcard(card c);
	void displayhand();
	void displayscore();
	int getscore();


private:
	std::vector<card> hand;
	int score = 0;
};

