#include <stdlib.h>

#include "Game.h"
#include "Player.h"

int main() {

	srand(time(NULL));

	Game g;

	for (int i = 0; i < g.players.size(); i++) {
		g.players[i].PrintHand();
	}

	return 0;
}