#pragma once


enum suit { Spades=1, Hearts, Diamonds, Clubs };
enum value { Two = 2, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace};

class card {
public:
	card();
	card( suit s, value v);
	void displaycard();
	suit get_suit();
	value get_value();
	bool operator==(const card &other) const;
	bool operator!=(const card &other) const;
private:
	void displayvalue(value v);
	void displaysuit(suit s);
	suit card_suit;
	value card_value;
};
