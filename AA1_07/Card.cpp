#include "Card.h"

Card::Card(Suit palo, int valor) {

	this->palo = palo;
	this->valor = valor;
}

Suit Card::GetPalo() {
	return palo;
}

int Card::GetValor() {
	return valor;
}

std::string Card::PrintCard() {

	std::string result = "";
	result += suits[palo];
	result += valor;

	return result;
}

bool Card::operator == (const Card& otherCard) {

	bool result = true;

	result &= palo && otherCard.palo;
	result &= valor && otherCard.valor;

	return result;
}