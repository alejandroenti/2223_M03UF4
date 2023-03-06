#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <stdlib.h>

#include "Player.h"
#include "Card.h"

std::string names[10] = { "Joel",
						  "Arnau",
						  "Biel",
						  "Eduard",
						  "Alex",
						  "Jordi",
						  "Toni",
						  "Victor",
						  "Dennys",
						  "Albert"
};

class Game {

private:
	Player players[4];
	std::stack<Card> deck;
	std::stack<Card> discarted;

public:
	Game(int playersActive, int numCards);
	Card GetNewCard();
	void DiscartedCard(Card c);
	void PrintDiscarted();
};