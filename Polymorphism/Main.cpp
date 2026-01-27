#include <iostream>

// 매크로 안에서 어떤 항목 앞에 ##를 붙이면 무조건 문자열로 변환함.
#define NAME(x) #x
/*
#define NAME(x) L#x; -> 와이드 캐릭터 스트링으로 변환
*/
#define PURE = 0
using namespace std;

class NameInterface
{
public:
	virtual const char* GetName() const PURE;
};

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

	virtual const char* GetName() const { return NAME(Entity); };
};

class Player : public Entity
{
public:
	Player(const char* name)
	{
		cout << "Player in" << endl;
		size_t len = strlen(name) + 1;
		this->name = new char[len];
		strcpy_s(this->name, len, name);
	}

	~Player()
	{
		cout << "Player out" << endl;
		if (name)
		{
			delete[] name;
			name = nullptr;
		}
	}

	void Test() const { cout << "test2" << endl; }
	const char* GetName() const override { return name; }

private:
	char* name = nullptr;
};

int main()
{
	Entity* entity = new Entity();

	const char* name = "Polymorphis";
	Entity* player = new Player(name);
	cout << player->GetName() << endl;

	cin.get();
} 

//class Person
//{
//public:
//	Person(const char* name)
//	{
//		size_t length = strlen(name) + 1;
//		this->name = new char[length];
//		strcpy_s(this->name, length, name);
//	}
//
//	virtual ~Person()
//	{
//		std::cout << "~Person() call!\n";
//		delete[] name;
//	}
//
//	virtual void Print()
//	{
//		std::cout << "이름: " << name << "\n";
//	}
//
//protected:
//	char* name;
//};
//
//class Student : public Person
//{
//public:
//	Student(const char* name, const char* major)
//		: Person(name)
//	{
//		size_t length = strlen(major) + 1;
//		this->major = new char[length];
//		strcpy_s(this->major, length, major);
//	}
//
//	~Student() override
//	{
//		std::cout << "~Student() call\n";
//		delete[] major;
//	}
//
//	virtual void Print() override
//	{
//		Person::Print();
//		std::cout << "전공: " << major << "\n";
//	}
//
//private:
//	char* major;
//};
//
//int main()
//{
//	Person* person1 = new Student("Ronnie", "Infomation Commucation Engineering");
//	Student* person2 = new Student("Emily", "Computer Science");
//
//	person1->Print();
//	person2->Print();
//
//	std::cout << "객체 소멸 전\n";
//	delete person1;
//	delete person2;
//}