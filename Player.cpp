
#include "Player.h"
#include <iostream>
#include <algorithm>
#include <string>

// BASE PLAYER FUNCTIONS

void player::getinitialhand(deck &d)
{
	for (int i = 0; i < 7; i++) {
		hand.push_back(d.draw());
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


///////////// HUMAN PLAYER FUNCTIONS //////////////////////////

card humanplayer::playcard() {
	std::cout << "Choose a card to play. Enter the suit first as (h,d,s, or c):"<<std::endl;
	char s;
	std::cin >> s;
	std::string n;
	std::cout << "Enter the card value as a,k,j, or it's numerical value" << std::endl;

	std::cin >> n;

	suit cardsuit;
	value cardvalue;

	switch (s) {
	case('h'):
	case('H'):
		cardsuit = Hearts; break;
	case('d'):
	case('D'):
		cardsuit = Diamonds; break;
	case('s'):
	case('S'):
		cardsuit = Spades; break;
	case('c'):
	case('C'):
		cardsuit = Clubs; break;
	default:
		throw std::logic_error("Not a valid suit"); break;
	}
	if (n == "a")
		cardvalue = Ace;
	else if (n == "k")
		cardvalue = King;
	else if (n == "j")
		cardvalue = Jack;
	else {
		int i = std::stoi(n);
		if (1 < i < 11)
			cardvalue = static_cast<value> (i);
		else
			throw std::logic_error("Not a valid value");
	}
	card c(cardsuit, cardvalue);


	auto a = std::find(hand.begin(), hand.end(), c);
	if (a != hand.end()) // c is in vector
	{
		hand.erase(a);
		std::cout << "You play: ";
		c.displaycard();
		return c;
	}
	else { 
		std::cout << "Trying to play a card you don't have you CHEATER!" << std::endl;
		throw std::logic_error("Trying to play a card you don't have you CHEATER!");
	}
}


// COMPUTER PLAYER FUNCTIONS
