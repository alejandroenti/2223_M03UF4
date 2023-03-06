#pragma once

enum Suit { SPADES, COINS, CUPS, CLUBS };

class Card {

private:
	Suit palo;
	int valor;

public:
	Card(Suit palo, int valor);
	bool operator == (const Card& otherCard);
};