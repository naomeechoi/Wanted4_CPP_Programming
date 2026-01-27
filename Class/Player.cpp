#include "Player.h"

Player::Player(int _x, int _y, int _speed)
	:x(_x), y(_y), speed(_speed)
{
}

void Player::move(int _x, int _y)
{
	x += _x;
	y += _y;
}