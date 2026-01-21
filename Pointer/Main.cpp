#include <iostream>
void DeletePointer(void* ptr)
{
	delete ptr;
	ptr = nullptr;
 }

void DeletePointer(void** ptr)
{
	delete *ptr;
	*ptr = nullptr;

}

void DeletePointer(void*& ptr)
{
	if (ptr == nullptr)
		return;

	delete ptr;
	ptr = nullptr;
}

int main()
{
	void* pointer = new int;
	DeletePointer(&pointer);

	return 0;
}