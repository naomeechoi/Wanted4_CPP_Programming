#include <iostream>
#include <Windows.h>

#define MYTEXT(val,val2) L##val##val2
#define MYTEXT2(val) #val

using namespace std;

int main()
{
	// wide-character.
	//const wchar_t* wideString = L"Hello wide string";
	const wchar_t* wideString = TEXT("Hello wide string");

	wcout << MYTEXT2(wchar_t) << endl;
	std::cin.get();
}