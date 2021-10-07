#ifndef GAME_BOARD_H
#define GAME_BOARD_H

//#include "space.h"
//#include "move_action.h"
#include "player.h"
#include <iomanip>

class Game_Board
{


public:
//class variables
	string array[20];
	string user_pos[20];
	int variable;
//class methods
	Game_Board();
	void Display_Board();
	void player_position(string player);
	//int rollDice();
	//create players should be done in the main function, not in our gameboard class.
	// Player* createPlayers(int numPlayers);
	// Player* playerList;
};
#endif
