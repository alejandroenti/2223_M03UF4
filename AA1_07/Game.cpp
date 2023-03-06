#include "Game.h"

Game::Game(int playersActive, int numCards) {

	for (int i = 0; i < playersActive; i++) {
		players[i] = Player(names[rand() % 10]);
	}

	for (int i = 0; i < numCards; i++) {
		deck.push(Card((Suit)(rand() % 4), rand() % 12));
	}

}

Card Game::GetNewCard() {
	
	Card newCard = deck.top();
	deck.pop();

	return newCard;

}

void Game::DiscartedCard(Card c) {

	discarted.push(c);

}

void Game::PrintDiscarted() {
	
	std::cout << discarted.top().PrintCard() << std::endl;

}