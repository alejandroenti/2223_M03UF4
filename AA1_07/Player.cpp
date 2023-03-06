#include "Player.h"

Player::Player(std::string id, std::vector<Card> hand) {
	
	this->id = id;
	this->hand = hand;
}

void Player::InsertCard(Card c) {

	for (std::vector<Card>::iterator it = hand.begin(); it != hand.end(); ++it) {
		if (c == *it) {
			hand.insert(it, c);
			return;
		}

		// TO DO GREATER OR LOWER
	}

}

Card Player::GetCard() {

	int size = hand.size();

	return hand[rand() % size];
}

Card Player::GetCard(Suit s) {

	std::vector<Card> cardPalos;

	for (int i = 0; i < hand.size(); i++) {
		if (hand[i].GetPalo() == s) {
			cardPalos.push_back(hand[i]);
		}
	}

	int size = cardPalos.size();

	return cardPalos[rand() % size];
}

void Player::PrintHand() {

	for (int i = 0; i < hand.size(); i++) {
		std::cout << hand[i].PrintCard() << " ";
	}
	std::cout << std::endl;
}