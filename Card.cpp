#include "Card.h"
#include <iostream>
using namespace std;


card::card() {
	card_suit = Spades;
	card_value = Ace;
}
card::card(suit s, value v) {
	card_suit = s;
	card_value = v;
}
suit card::get_suit() {
	return card_suit;
}
value card::get_value() {
	return card_value;
}
bool card::operator==(const card &other) const {
	return other.card_suit == this->card_suit && other.card_value == this->card_value;
}
bool card::operator!=(const card &other) const {
	return !(other == *this);
}

void card::displayvalue(value v) {
	switch (v) {
	case Ace:
		cout << "Ace"; break;
	case Two:
		cout << "Two"; break;
	case Three:
		cout << "Three"; break;
	case Four:
		cout << "Four"; break;
	case Five:
		cout << "Five"; break;
	case Six:
		cout << "Six"; break;
	case Seven:
		cout << "Seven"; break;
	case Eight:
		cout << "eight"; break;
	case Nine:
		cout << "Nine"; break;
	case Ten:
		cout << "Ten"; break;
	case Jack:
		cout << "Jack"; break;
	case Queen:
		cout << "Queen"; break;
	case King:
		cout << "King"; break;
	default:
		cout << "INVALID VALUE" << endl; break;
	}
}
void card::displaysuit(suit s) {
	switch (s) {
	case Spades:
		cout << "Spades"; break;
	case Hearts:
		cout << "Hearts"; break;
	case Diamonds:
		cout << "Diamonds"; break;
	case Clubs:
		cout << "Clubs"; break;
	default:
		cout << "INVALID SUIT" << endl; break;
	}
}

void card::displaycard() {

	displayvalue(card_value);
	cout << " of ";
	displaysuit(card_suit);
	cout << endl;
}
