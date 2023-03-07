#include "Card.h"

Card::Card() 
{
	value = -1;
	type = SPADES;
}

Card::Card(int v, Suit t)
	: value(v), type(t)
{
}

int Card::GetValue() 
{
	return value;
}

void Card::SetValue(int v) 
{
	value = v;
}

Suit Card::GetType() 
{
	return type;
}

void Card::SetType(Suit t) 
{
	type = t;
}

bool Card::operator == (const Card& c) 
{
	bool sameValue = value == c.value;
	bool sameType = type == c.type;

	return sameValue && sameType;
}

bool Card::operator > (const Card& c) 
{
	if (type > c.type) {
		return true;
	}
	else if (type == c.type) {
		return value > c.value;
	}
	else {
		return false;
	}
}
