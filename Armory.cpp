﻿// Armory.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include "Card.h"
#include "Deck.h"
#include <iostream>

using namespace std;
int main()
{
	// Initializations
	deck thedeck;
	vector<card> player1;
	vector<card> player2;
	vector<card> player3;

	//Start game by dealing 
	for (int i = 0; i < 7; i++) {
		player1.push_back(thedeck.draw());
		player2.push_back(thedeck.draw());
		player3.push_back(thedeck.draw());
	}

	return 0;
}
