#include <iostream>
#include <cstring>
#include "plorg.h"

Plorg::Plorg(char * im, int s)
{
	strcpy_s(imie, im);
	sytosc = s;
}

void Plorg::syty(int s)
{
	sytosc = s;
}

void Plorg::show()
{
	using std::cout;
	using std::endl;
	cout << "Moje imie: " << imie << endl;
	cout << "Moja sytosc: " << sytosc << endl;
}
