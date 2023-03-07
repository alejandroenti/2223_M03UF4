#pragma once

#include <vector>
#include <stack>

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