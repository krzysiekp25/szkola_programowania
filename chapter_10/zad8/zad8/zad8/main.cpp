#include <iostream>
#include "list.h"

int main()
{
	using std::cout;
	using std::cin;
	Lista jeden;
	if (jeden.dodaj(123))
		cout << "Wartosc dodana pomyslnie!\n";
	else
		cout << "Brak miejsca!\n";
	jeden.odwiedz();
	jeden.odwiedz();
	jeden.usun();
	jeden.odwiedz();
	cin.get();
	cin.get();
	return 0;
}
