#include <iostream>
#include "golf.h"

int main()
{
	using std::cout;
	using std::cin;
	cout << "Ustawianie \"reczne\" obiektu...\n";
	Golf obiekt = Golf();
	cout << "\nWynik \"recznego\" ustawienia...\n";
	obiekt.show();
	cout << "\nPodanie stalych z programu: Dupa123, 321...\n";
	obiekt = Golf("Dupa123", 321);
	cout << "Wynik \"maszynowego\" ustawienia...\n";
	obiekt.show();
	cout << "\nZmiana handcap na 987...\n";
	obiekt.handicap(987);
	cout << "Wynik zmiany handcap...\n";
	obiekt.show();
	cin.get();
	cin.get();
	return 0;
}