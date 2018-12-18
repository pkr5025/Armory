
#pragma once

#include "Deck.h"

class player {
public:
	void getinitialhand(deck &d);  //generates a 7 card opening hand
	virtual card playcard() = 0 ;
	void displayhand();
	void displayscore();
	int getscore();


protected:
	std::vector<card> hand;
	int score = 0;
};

class humanplayer : public player {
public:
	card playcard();

private:

};

class computerplayer : public player {
public:


private:

};
