#pragma once

#include <string>
#include <vector>
#include <stdlib.h>

#include "Card.h"

class Player {

private:
	std::vector<Card> hand;

public:
	std::string id;

	Player(std::string name);
	void InsertCard(Card c);
	Card GetCard();
	Card GetCard(Suit t);
	void PrintHand();
};