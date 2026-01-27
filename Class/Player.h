#pragma once

class Player
{
public:
	Player() = default;
	Player(int _x, int _y, int _speed);

	inline void setx(const int _x)
	{
		x = _x;
	}

	inline int getx() const
	{
		return x;
	}

	inline int gety() const
	{
		return y;
	}

	void move(int _x, int _y);

	const Player* getSelf() const
	{
		return this;
	}

	const Player* test()
	{
		return this;
	}

	void doTest(Player* p)
	{
		test()->x = 10;
	}

	int x = 0;

private:
	char* name = nullptr;
	int y = 0;
	int speed = 0;
	int test = 0;
	int test2 = 0;
	Player* p = nullptr;
};