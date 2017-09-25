#include <iostream>
#include <cstring>
#include "klasy.h"

Cd::Cd(char * s1, char * s2, int n, double x)
{
	performers = new char[std::strlen(s1) + 1];
	strcpy(performers, s1);
	label = new char[std::strlen(s2) + 1];
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	performers = new char[std::strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	label = new char[std::strlen(d.label) + 1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd()
{
	performers = new char[5];
	strcpy(performers, "null");
	label = new char[5];
	strcpy(label, "null");
	selections = 0;
	playtime = 0.0;
}

Cd::~Cd()
{
	delete[] performers;
	delete[] label;
}

void Cd::Report() const
{
	std::cout << "Performers: " << performers << std::endl;
	std::cout << "label: " << label << std::endl;
	std::cout << "liczba utworow: " << selections << std::endl;
	std::cout << "dlugosc w minutach: " << playtime << std::endl;
}

Cd & Cd::operator=(const Cd & d)
{
	if (this == &d)
		return *this;
	delete[] performers;
	performers = new char[std::strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	delete[] label;
	label = new char[std::strlen(d.label) + 1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(char * mp, char * s1, char * s2, int n, double x)
	: Cd(s1, s2, n, x)
{
	mainperform = new char[std::strlen(mp) + 1];
	strcpy(mainperform, mp);
}

Classic::Classic(char * mp, const Cd & d)
	: Cd(d)
{
	mainperform = new char[std::strlen(mp) + 1];
	strcpy(mainperform, mp);
}

Classic::Classic(const Classic & d)
	: Cd(d)
{
	mainperform = new char[std::strlen(d.mainperform) + 1];
	strcpy(mainperform, d.mainperform);
}

Classic::Classic()
	: Cd()
{
	mainperform = new char[5];
	strcpy(mainperform, "null");
}

Classic::~Classic()
{
	delete[] mainperform;
}

void Classic::Report() const
{
	Cd::Report();
	std::cout << "Glowny utwor: " << mainperform << std::endl;
}

Classic & Classic::operator=(const Classic & d)
{
	if (this == &d)
		return *this;
	Cd::operator=(d);
	delete[] mainperform;
	mainperform = new char[std::strlen(d.mainperform) + 1];
	strcpy(mainperform, d.mainperform);
	return *this;
}
