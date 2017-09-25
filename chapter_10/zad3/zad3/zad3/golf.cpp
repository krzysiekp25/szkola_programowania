#include <cstring>
#include <iostream>
#include "golf.h"

Golf::Golf(const char * name, int hc)
{
	strcpy_s(this->fullname, name);
	this->handcap = hc;
}

Golf::Golf()
{
	using std::cout;
	using std::cin;

	cout << "Podaj pelne imie: ";
	cin.getline(this->fullname, Len);
	cout << "Podaj handcap: ";
	cin >> this->handcap;
}

void Golf::handicap(int hc)
{
	this->handcap = hc;
}

void Golf::show()
{
	using std::cout;
	using std::endl;

	cout << "Pelne imie: " << this->fullname << endl;
	cout << "Handcap: " << this->handcap << endl;
}
