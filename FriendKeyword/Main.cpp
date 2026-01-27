#include <iostream>

using namespace std;

class Entity
{
	friend void ShowEntity(Entity& e)
	{
		cout << e.x << ", " << e.y << endl;
	}

public:
	void ControlAnotherSameTypeObject(Entity& other)
	{
		other.x += 5;
	}

private:
	int x = 1;
	int y = 1;
};


int main()
{
	Entity e1;
	Entity e2;
	e1.ControlAnotherSameTypeObject(e2);
	ShowEntity(e2);

	return 0;
}

template<typename In, typename alloc>
class TArray
{
	template <typename other, typename otherAlloc>
	friend class TArray;

	//...
};