#include <iostream>
#include <cstring>
#include "klasy.h"

Cd::Cd(char * s1, char * s2, int n, double x)
{
	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd()
{
	strcpy(performers, "null");
	strcpy(label, "null");
	selections = 0;
	playtime = 0.0;
}

Cd::~Cd()
{
}

void Cd::Report() const
{
	std::cout << "Performers: " << performers << std::endl;
	std::cout << "label: " << label << std::endl;
	std::cout << "liczba utworow: " << selections << std::endl;
	std::cout << "dlugosc w minutach: " << playtime << std::endl;
}

Classic::Classic(char * mp, char * s1, char * s2, int n, double x)
	: Cd(s1, s2, n, x)
{
	strcpy(mainperform, mp);
}

Classic::Classic()
	: Cd()
{
	strcpy(mainperform, "null");
}

Classic::~Classic()
{
}

void Classic::Report() const
{
	Cd::Report();
	std::cout << "Glowny utwor: " << mainperform << std::endl;
}
