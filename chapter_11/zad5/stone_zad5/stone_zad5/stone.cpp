// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
using std::cin;
#include "stonewt.h"
void display(const Stonewt & st, int n);
int main()
{
	Stonewt incognito = 275; // uses constructor to initialize
	Stonewt wolfe(285.7); // same as Stonewt wolfe = 285.7;
	Stonewt taft(21, 8);
	cout << "Celebryta wazyl ";
	incognito.stone_mode();
	cout << incognito;
	cout << "Detektyw wazyl ";
	wolfe.stone_mode();
	cout << wolfe;
	cout << "Prezydent wazyl ";
	taft.pound_double_mode();
	cout << taft;
	incognito = 276.8; // uses constructor for conversion
	taft = 325; // same as taft = Stonewt(325);
	Stonewt nowe = incognito + taft;
	nowe.stone_mode();
	cout << nowe;
	nowe.pound_int_mode();
	cout << nowe;
	nowe.pound_double_mode();
	cout << nowe;
	cout << "Po obiedzie celebryta wazy ";
	incognito.stone_mode();
	cout << incognito;
	cout << "Po obiedzie prezydent wazy ";
	taft.pound_double_mode();
	cout << taft;
	display(taft, 2);
	cout << "A zapasnik wazy jeszcze wiecej.\n";
	display(422, 2);
	cout << "Nie pozostal kamien na kamieniu\n";
	cin.get();
	return 0;
}
void display(const Stonewt & st, int n)
{
	Stonewt pom = st;
	for (int i = 0; i < n; i++)
	{
		cout << "Wow! ";
		pom.stone_mode();
		cout << pom;
	}
}