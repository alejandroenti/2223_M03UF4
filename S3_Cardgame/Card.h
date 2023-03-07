#pragma once

enum Suit { SPADES, COINS, CUPS, CLUBS };

class Card {

private:
	int value;
	Suit type;

public:
	Card();
	Card(int v, Suit t);
	int GetValue();
	void SetValue(int v);
	Suit GetType();
	void SetType(Suit t);
	bool operator == (const Card& c);
	bool operator > (const Card& c);
};