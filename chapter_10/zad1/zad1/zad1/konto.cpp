#include <iostream>
#include <string>
#include "konto.h"

Konto::Konto(std::string s, int r, double sld)
{
	nazwisko = s;
	numer_rachunku = r;
	saldo = sld;
}

Konto::~Konto()
{
}

void Konto::show()
{
	std::cout << "Nazwisko: " << nazwisko << std::endl;
	std::cout << "Numer rachunku: " << numer_rachunku << std::endl;
	std::cout << "Saldo dostepne: " << saldo << std::endl;
}

void Konto::deposit(double depo)
{
	saldo += depo;
	std::cout << "Depozyt zakonczony sukcesem.\n";
}

double Konto::withdraw(double with)
{
	if(saldo < with)
	{
		std::cout << "Brak srodkow na koncie.\n";
		return 0.0;
	}
	else
	{
		saldo -= with;
		std::cout << "Pobrano...\n";
		return with;
	}
}
