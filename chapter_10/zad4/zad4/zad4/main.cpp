#include <iostream>
#include "przestrzen.h"

int main()
{
	using std::cin;
	using namespace SALES;
	Sale str1 = Sale();
	str1.showSales();
	double tablica[4] =
	{
		9, 23, 5, 4
	};
	Sale str2 = Sale(tablica, 4);
	str2.showSales();
	cin.get();
	cin.get();
	return 0;
}