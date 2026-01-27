#include <iostream>
using namespace std;

class Entity
{
public:
	Entity()
	{
		cout << "Entity in" << endl;
	}

	~Entity()
	{
		cout << "Entity out" << endl;
	}

protected:
	float x = 0.0f;
	float y = 0.0f;
};

class Player : public Entity
{
public:
	Player()
	{
		cout << "Player in" << endl;
	}

	~Player()
	{
		cout << "Player out" << endl;
	}

private:
	char* name = nullptr;
};

int main()
{
	Entity entity;
	Player player;

	cin.get();
}