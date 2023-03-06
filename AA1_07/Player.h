#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

#include "Card.h"

class Player {

private:
	std::string id;
	std::vector<Card> hand;

public:
	Player(std::string id);
	void SetId(std::string id);
	void InsertCard(Card c);
	Card GetCard();
	Card GetCard(Suit s);
	void PrintHand();
};