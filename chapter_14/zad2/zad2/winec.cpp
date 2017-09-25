#include <iostream>
#include "winec.h"

Wine::Wine(const char * l, int y, const int yr[], const int bot[])
	: std::string(l), year_numb(y), Pair(std::valarray<int>(yr, y), std::valarray<int>(bot, y))
{
}

Wine::Wine(const char * l, int y)
	: std::string(l), year_numb(y), Pair(std::valarray<int>(y), std::valarray<int>(y))
{

}

Wine::Wine()
	: std::string("Brak"), year_numb(0), Pair(std::valarray<int>(0), std::valarray<int>(0))
{
}

void Wine::GetBottles()
{
	int buf;
	std::cout << "Podaj dane o winie " << (const std::string &) *this << " dla " << year_numb << " rocznikow.\n";
	for (int i = 0; i < year_numb; i++)
	{
		std::cout << "Podaj rocznik: ";
		std::cin >> buf;
		Pair::first()[i] = buf;
		std::cout << "Podaj liczbe butelek: ";
		std::cin >> buf;
		Pair::second()[i] = buf;
	}
}

const std::string & Wine::Label()
{
	return (const std::string &) *this;
}

int Wine::sum()
{
	return Pair::second().sum();
}

void Wine::Show()
{
	std::cout << "Wino: " << (const std::string &) *this << std::endl;
	std::cout << "\tRocznik\tButelki\n";
	for (int i = 0; i < year_numb; i++)
	{
		std::cout << "\t" << Pair::first()[i] << "\t" << Pair::second()[i] << "\n";
	}
}
