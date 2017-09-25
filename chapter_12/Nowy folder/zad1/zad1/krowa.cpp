#include <iostream>
#include <string>
#include "krowa.h"

Cow::Cow()
{
	name[0] = '\0';
	hobby = new char[1];
	hobby[0] = '\0';
	weight = 0.0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
	std::strcpy(name, nm);
	hobby = new char[sizeof(ho) + 1];
	std::strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow & c)
{
	std::strcpy(name, c.name);
	hobby = new char[sizeof(c.hobby) + 1];
	std::strcpy(hobby, c.hobby);
	weight = c.weight;
	std::cout << "Uzyto!";
}

Cow::~Cow()
{
	std::cout << "Usuwanie!\n";
	std::cout << name << std::endl;
	delete [] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
	if (this == &c)
		return *this;
	delete[] hobby;
	std::strcpy(name, c.name);
	hobby = new char[sizeof(c.hobby) + 1];
	std::strcpy(hobby, c.hobby);
	weight = c.weight;
	return *this;
}

void Cow::ShowCow() const
{
	std::cout << "Krowa ma na imie: " << name << std::endl;
	std::cout << "Jej hobby to: " << hobby << std::endl;
	std::cout << "Jej waga: " << weight << std::endl;
}
