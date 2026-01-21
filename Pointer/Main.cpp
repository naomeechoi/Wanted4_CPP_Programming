#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>

#ifdef _DEBUG
#define new new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#else
#define new new
#endif

/*void DeletePointer(void* ptr)
{
	delete ptr;
	ptr = nullptr;
 }

void DeletePointer(void** ptr)
{
	delete *ptr;
	*ptr = nullptr;

}*/

void DeletePointer(void*& ptr)
{
	if (ptr == nullptr)
		return;

	delete ptr;
	ptr = nullptr;
}

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	// TODO Å×½ºÆ®
	int* intPointer = new int[10];
	void* pointer = new int;
	DeletePointer(pointer);
	delete intPointer;


	/*_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_DEBUG);
	_CrtDumpMemoryLeaks();*/
	return 0;
}