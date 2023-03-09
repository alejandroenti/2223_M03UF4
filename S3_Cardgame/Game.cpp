#include "Game.h"

Game::Game()
{
	int playerAmount = 2 + rand() % (4 - 2 + 1);
	
	std::string names[] = {
		"Aitor Menta",
		"Luz Cuesta Mogollón",
		"Ana Tomía",
		"Dolores Delano",
		"Rosa Melano"
	};

	// ---- INITIALIZE DECK

	std::vector<Card> generatedCards;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 12; j++) {
			generatedCards.push_back(Card(j + 1, (Suit)i));
		}
	}

	auto rng = std::default_random_engine{};
	std::shuffle(generatedCards.begin(), generatedCards.end(), rng);

	for (int i = 0; i < generatedCards.size(); i++) {
		deck.push(generatedCards[i]);
	}

	// ---- INITIALIZE PLAYERS

	for (int i = 0; i < playerAmount; i++) {
		players.push_back(Player(names[rand() % 5]));
	}

	// ---- DEAL CARDS

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < playerAmount; j++) {
			players[j].InsertCard(deck.top());
			deck.pop();
		}
	}
}

Card Game::GetNewCard()
{
	Card temp = deck.top();
	deck.pop();

	return temp;
}

void Game::DiscardCard(Card c)
{
	discardedCards.push(c);
}

void Game::PrintDiscarded()
{
	std::stack<Card> temp = discardedCards;
	std::string suitNames[] = { "SPADES", "COINS", "CUPS", "CLUBS" };

	std::cout << " ------ DISCARDED CARDS ------ " << std::endl;
	while (temp.size() > 0) {
		Card c = temp.top();
		std::cout << " - " << c.GetValue() << " of " << suitNames[(int)c.GetType()] << std::endl;
		temp.pop();
	}
}