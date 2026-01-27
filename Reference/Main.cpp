#include <iostream>
#include <Windows.h>

#define MYTEXT(val) L##val

using namespace std;

int main()
{
	// wide-character.
	//const wchar_t* wideString = L"Hello wide string";
	const wchar_t* wideString = TEXT("Hello wide string");

	cout << MYTEXT("letstest") << endl;
	std::cin.get();
}