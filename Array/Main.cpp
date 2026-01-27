#include <iostream>
#include <array>

using namespace std;

int main()
{
	int array[10] = { 0 };
	//memset(array, 0, sizeof(int) * 10);
	for (const int& item : array) // for (const int& const item : array)
		cout << item << endl;

	int* pointArray = new int[10];
	memset(pointArray, 0, sizeof(int) * 10);
	
	delete[] pointArray;
	cin.get();
}