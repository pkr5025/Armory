#pragma once


enum suit { Spades=1, Hearts, Diamonds, Clubs };
enum value { Ace = 1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King };

class card {
public:
	card();
	card( suit s, value v);
	void displaycard();
	suit get_suit();
	value get_value();
private:
	void displayvalue(value v);
	void displaysuit(suit s);
	suit card_suit;
	value card_value;
};
