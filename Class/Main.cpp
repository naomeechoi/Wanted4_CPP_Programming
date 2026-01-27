#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
#include "Player.h"

using namespace std;

int main()
{
	Player* player1 = new Player();
	Player* player2 = new Player();
	const Player* player3 = player1;
	//player3->x = 3; // 불가능
	player3 = player2; // 가능

	Player* const player4 = player1;
	player4->x = 3; // 가능
	//player4 = player2; // 불가능

	Player* player1 = new Player();
	Player* player2 = new Player();
	const Player* player3 = player1;
	//player3->x = 3; // 불가능인거 암


	Player* const player4 = player1;
	player4->x = 3;
	//player4 = player2; // 불가능


	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_DEBUG);
	_CrtDumpMemoryLeaks();
}