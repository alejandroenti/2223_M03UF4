#include "Enemy.h"

Enemy::Enemy() {
	type = (EnemyType)(rand() % 5);
	name = "--- NO NAME ---";
	health = 100 + rand() % (500 - 100 + 1);
}

Enemy::Enemy(int health) {
	type = (EnemyType)(rand() % 5);
	name = "--- NO NAME ---";
	this->health = health;
}

Enemy::Enemy(EnemyType type, std::string name, int health) 
	: type(type), name(name), health(health)
{
	
}

bool Enemy::RecieveDamage(int amount) {

	health -= amount;

	return health <= 0;
}

bool Enemy::operator == (const Enemy& other) {

	bool result = true;

	result &= type == other.type;
	result &= name == other.name;
	result &= health == other.health;

	return result;
}