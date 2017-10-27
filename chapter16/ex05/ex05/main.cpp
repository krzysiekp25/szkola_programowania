#include "reduce.h"
#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string words[5] = { "ala", "ela", "ala", "kot", "pot" };
	long numbers[5] = { 5, 3, 2, 1, 2 };
	int strSize = reduce(words, 5);
	int numSize = reduce(numbers, 5);
	for (int i = 0; i < strSize; i++)
	{
		cout << words[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < numSize; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}