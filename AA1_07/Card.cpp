#include "Card.h"

Card::Card(Suit palo, int valor) {

	this->palo = palo;
	this->valor = valor;
}

bool Card::operator == (const Card& otherCard) {

	bool result = true;

	result &= palo && otherCard.palo;
	result &= valor && otherCard.valor;

	return result;
}