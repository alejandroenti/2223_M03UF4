#pragma once

#include <string>
#include <stdlib.h>

enum EnemyType { GOBLIN, RICHARD, RADEV, DIMAS, EDU };

class Enemy {
private:
	EnemyType type;
	std::string name;
	int health;

public:
	Enemy();
	Enemy(int health);
	Enemy(EnemyType type, std::string name, int health = 100);

	EnemyType GetEnemyType() { return type; }
	std::string GetName() { return name; }
	int GetHealth() { return health; }
	bool RecieveDamage(int amount);
	bool operator == (const Enemy& other);
};