#include "Deck.h"
#include <algorithm>
#include <iostream>
#include <random>
#include <chrono>


deck::deck(){
	for (int j = 1; j < 5; j++) {
		for (int i = 2; i < 15; i++) {
			currentdeck.push_back(card(static_cast<suit>(j), static_cast<value>(i)));
		}
	}

}
card deck::draw() {
	card a;
	if (currentdeck.empty() == true) {
		throw std::logic_error("drawing from an empty deck");
	}
	else {
		a = currentdeck.back();
		currentdeck.pop_back();
		return a;
	}
}
card deck::top() {
	if (currentdeck.empty() == true)
		throw std::logic_error("deck is empty");
	else {
		return currentdeck.back();
	}
}
void deck::shuffledeck() {
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	shuffle(currentdeck.begin(), currentdeck.end(), std::default_random_engine(seed));
}
