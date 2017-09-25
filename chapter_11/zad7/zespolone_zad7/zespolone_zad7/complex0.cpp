#include <iostream>
#include "complex0.h"

Complex0::Complex0(double i, double j)
{
	x = i;
	y = j;
}

Complex0::Complex0()
{
	x = y = 0.0;
}

Complex0 Complex0::operator+(const Complex0 & cp) const
{
	Complex0 zespolona;
	zespolona.x = x + cp.x;
	zespolona.y = y + cp.y;
	return zespolona;
}

Complex0 Complex0::operator-(const Complex0 & cp) const
{
	Complex0 zespolona;
	zespolona.x = x - cp.x;
	zespolona.y = y - cp.y;
	return zespolona;
}

Complex0 Complex0::operator*(const Complex0 & cp) const
{
	Complex0 zespolona;
	zespolona.x = x * cp.x - y * cp.y;
	zespolona.y = x * cp.y + y * cp.x;
	return zespolona;
}

Complex0 Complex0::operator*(const double & n) const
{
	Complex0 zespolona;
	zespolona.x = x * n;
	zespolona.y = y * n;
	return zespolona;
}

Complex0 Complex0::operator~() const
{
	Complex0 zespolona;
	zespolona.x = x;
	zespolona.y = -y;
	return zespolona;
}

std::istream & operator >>(std::istream & is, Complex0 & cp)
{
	std::cout << "Skladowa rzeczywista: ";
	is >> cp.x;
	if (!is.good())
		return is;
	std::cout << "Skladowa urojona: ";
	is >> cp.y;
	return is;
}

std::ostream & operator <<(std::ostream & os, const Complex0 & cp)
{
	os << "(" << cp.x << ',' << cp.y << "i)";
	return os;
}