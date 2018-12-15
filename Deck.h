#pragma once
#include "Card.h"
#include <vector>

class deck {
public:
	deck(); // default constructor makes a standard 52 card deck
	card draw(); // draws a card
	card top(); // peeks at the top card of the deck
	void shuffledeck(); // shuffles the deck
private:
	std::vector<card> currentdeck;
};
