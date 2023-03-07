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
			break;
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
	return Card();
}

void Player::PrintHand()
{
}