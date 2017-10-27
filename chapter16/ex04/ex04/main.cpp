#include "reduce.h"
#include <iostream>

int main()
{
	long arrrr[10] = { 1, 1, 2, 5, 4, 7, 3, 2, 3, 6 };
	int size = reduce(arrrr, 10);
	for (int i = 0; i < size; i++)
	{
		std::cout << arrrr[i] << " ";
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}