// stonewt.cpp -- Stonewt methods
#include <iostream>
#include "stonewt.h"
// construct Stonewt object from double value
Stonewt::Stonewt(double lbs, Mode m)
{
	stone = int(lbs) / Lbs_per_stn; // integer division
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
	mode = m;
}
// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs, Mode m)
{
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	mode = m;
}
Stonewt::Stonewt() // default constructor, wt = 0
{
	stone = pounds = pds_left = 0;
	mode = KAMIENIE;
}
Stonewt::~Stonewt() // destructor
{
}
void Stonewt::stone_mode()
{
	mode = KAMIENIE;
}
void Stonewt::pound_int_mode()
{
	mode = FUNTY_INT;
}

void Stonewt::pound_double_mode()
{
	mode = FUNTY_DOUBLE;
}

Stonewt Stonewt::operator+(Stonewt & wt) const
{
	Stonewt nowy;
	nowy.stone = stone + wt.stone;
	nowy.pds_left = pds_left + wt.pds_left;
	nowy.pounds = pounds + wt.pounds;
	return nowy;
}

Stonewt Stonewt::operator-(Stonewt & wt) const
{
	Stonewt nowy;
	nowy.stone = stone - wt.stone;
	nowy.pds_left = pds_left - wt.pds_left;
	nowy.pounds = pounds - wt.pounds;
	return nowy;
}

Stonewt Stonewt::operator*(double & n) const
{
	Stonewt nowy;
	nowy.stone = stone * n;
	nowy.pds_left = pds_left *n;
	nowy.pounds = pounds * n;
	return nowy;
}

std::ostream & operator<<(std::ostream & os, Stonewt & n1)
{
	if (n1.mode == Stonewt::KAMIENIE)
	{
		os << "Liczba kamieni: " << n1.stone << "\n";
	}
	else if (n1.mode == Stonewt::FUNTY_INT)
	{
		os << "Liczba funtow bez czesci ulamkowej: " << n1.stone*Stonewt::Lbs_per_stn << "\n";
	}
	else if (n1.mode == Stonewt::FUNTY_DOUBLE)
	{
		os << "Liczba funtow z czescia ulamkowa: " << n1.pounds << "\n";
	}
	else
	{
		os << "Nieprawidlowy tryb obiektu!\n";
	}
	return os;
}
