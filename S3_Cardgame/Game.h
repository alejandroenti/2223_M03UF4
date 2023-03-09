#pragma once

#include <string>
#include <vector>
#include <stack>
#include <stdlib.h>
#include <Algorithm>
#include <random>

#include "Player.h"
#include "Card.h"

class Game {

public:
	std::vector<Player> players;
	std::stack<Card> deck;
	std::stack<Card> discardedCards;

	Game();
	Card GetNewCard();
	void DiscardCard(Card c);
	void PrintDiscarded();
};