
#include "Player.h"
#include <iostream>
#include <algorithm>

void player::getinitialhand(deck &d)
{
	for (int i = 0; i < 7; i++) {
		hand.push_back(d.draw());
	}
}

card player::playcard(card c) {

	auto a = std::find(hand.begin(), hand.end(), c);
	if (a != hand.end()) // c is in vector
	{
		hand.erase(a);
		return c;
	}
	else {
		throw std::logic_error("Trying to play a card you don't have you CHEATER!");
	}
}
void player::displayhand() {
	for (auto i : hand) {
		i.displaycard();
	}
}
void player::displayscore() {
	std::cout << score << std::endl;
}

int player::getscore() {
	return score;
}
