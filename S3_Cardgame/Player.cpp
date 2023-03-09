#include "Player.h"

Player::Player(std::string name)
{
	id = name;
}

void Player::InsertCard(Card c)
{
	// We sort from smallest to greatest
	//  1 of SPADES is the smallest card
	// 12 of CLUBS is the greatest card

	std::vector<Card>::iterator it = hand.begin();

	for (it; it != hand.end(); it++) {
		if (*it > c) {
			hand.emplace(it, c);
			return;
		}
	}

	if (it == hand.end()) {
		hand.push_back(c);
	}
}

Card Player::GetCard()
{
	int cardPosition = rand() % hand.size();
	
	Card temp = hand[cardPosition];
	hand.erase(hand.begin() + cardPosition);

	return temp;
}

Card Player::GetCard(Suit t)
{
	for (int i = hand.size() - 1; i >= 0; i--) {
		if (hand[i].GetType() == t) {
			Card temp = hand[i];
			hand.erase(hand.begin() + i);
			return temp;
		}
	}

	return Card();
}

void Player::PrintHand()
{
	// Print card:
	// -> Card.value << " of " << uitNames[(int)Card.type]

	std::string suitNames[] = { "SPADES", "COINS", "CUPS", "CLUBS" };

	std::cout << " ------ PLAYER HAND ------ " << std::endl;
	for (int i = 0; i < hand.size(); i++) {
		std::cout << " - " << hand[i].GetValue() << " of " << suitNames[(int)hand[i].GetType()] << std::endl;
	}
}