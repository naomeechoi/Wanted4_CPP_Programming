#include <iostream>
using namespace std;

class Point
{
public:
	Point(int x = 0, int y = 0)
		: x(x), y(y)
	{
	}

	Point Add(const Point& other)
	{
		return Point(x + other.x, y + other.y);
	}

	friend Point Add(const Point& p1, const Point& p2)
	{
		return Point(p1.x + p2.x, p1.y + p2.y);
	}

	Point operator+(/*여기에는 this 객체가 넘어오는데 숨겨져 있다. 2항 연산자이다.*/const Point& other)
	{
		return Point(x + other.x, y + other.y);
	}

	const Point& operator+=(/*여기에는 this 객체가 넘어오는데 숨겨져 있다. 2항 연산자이다.*/const Point& other)
	{
		x += other.x;
		y += other.y;
		return *this;
	}

	// friend 가 붙은 함수는 사실 외부 함수인데(외부에 정의될 때는 friend 키워드 빼고 정의하면 된다.)
	// 내부에 정의해도 상관없다.
	friend Point operator+(const Point& p1, const Point& p2)
	{
		return Point(p1.x + p2.x, p1.y + p2.y);
	}

	friend std::ostream& operator<<(std::ostream& os, const Point& point)
	{
		return os << "(" << point.x << ", " << point.y << ")" << "\n";
	}

public:
	int x = 0;
	int y = 0;
};

int main()
{
	Point p1(1, 1);
	Point p2(5, 5);
	Point p3 = p1 + p2;
	std::cout << p3 << p1;

}