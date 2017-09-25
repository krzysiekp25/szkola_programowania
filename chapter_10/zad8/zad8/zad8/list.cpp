#include <iostream>
#include "list.h"

Lista::Lista()
{
	elem = 0;
}

bool Lista::dodaj(const int & e)
{
	if(elem == MAX)
		return false;
	else
	{
		elementy[elem++] = e;
		return true;
	}
}

bool Lista::usun()
{
	if(elem == 0)
		return false;
	else
	{
		elem--;
		std::cout << "Usunieto ostatni element!\n";
		return true;
	}
}

bool Lista::pusta()
{
	if (elem == 0)
		return true;
	else
		return false;
}

bool Lista::pelna()
{
	if (elem == MAX)
		return true;
	else
		return false;
}

void Lista::odwiedz()
{
	using std::cout;
	using std::cin;
	using std::endl;
	if (pusta())
		cout << "Brak elementow!\n";
	for (int i = 0; i < elem; i++)
	{
		static char znak;
		static int bufor = 0;
		cout << "Element numer " << i + 1 << ": " << elementy[i] << endl;
		cout << "Czy chcesz edytwac element (t - tak, n - nie: ";
		cin >> znak;
		switch (znak)
		{
		case 't':
			cout << "Podaj nowa wartosc: ";
			cin >> bufor;
			elementy[i] = bufor;
			break;
		default:
			break;
		}
	}
}
