#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "Enemy.h"

int main() {

	srand(time(NULL));

	Enemy e(RICHARD, "Eustaqui");
	
	std::cout << e.GetEnemyType() << std::endl;
	std::cout << e.GetName() << std::endl;
	std::cout << e.GetHealth();
}