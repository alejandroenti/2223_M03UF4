#pragma once

#include <string>

enum Suit { SPADES, COINS, CUPS, CLUBS };
std::string suits[4] = { "SPADES", "COINS", "CUPS", "CLUBS" };

class Card {

private:
	Suit palo;
	int valor;

public:
	Card(Suit palo, int valor);
	Suit GetPalo();
	int GetValor();
	std::string PrintCard();
	bool operator == (const Card& otherCard);
};