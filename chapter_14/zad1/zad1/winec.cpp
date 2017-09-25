#include <iostream>
#include "winec.h"

Wine::Wine(const char * l, int y, const int yr[], const int bot[])
	: name(l), year_numb(y), wine_inf(std::valarray<int>(yr, y), std::valarray<int>(bot, y))
{
}

Wine::Wine(const char * l, int y)
	: name(l), year_numb(y), wine_inf(std::valarray<int>(y), std::valarray<int>(y))
{

}

Wine::Wine()
	: name("Brak"), year_numb(0), wine_inf(std::valarray<int>(0), std::valarray<int>(0))
{
}

void Wine::GetBottles()
{
	int buf;
	std::cout << "Podaj dane o winie " << name << " dla " << year_numb << " rocznikow.\n";
	for (int i = 0; i < year_numb; i++)
	{
		std::cout << "Podaj rocznik: ";
		std::cin >> buf;
		wine_inf.first()[i] = buf;
		std::cout << "Podaj liczbe butelek: ";
		std::cin >> buf;
		wine_inf.second()[i] = buf;
	}
}

const std::string & Wine::Label()
{
	return name;
}

int Wine::sum()
{
	return wine_inf.second().sum();
}

void Wine::Show()
{
	std::cout << "Wino: " << name << std::endl;
	std::cout << "\tRocznik\tButelki\n";
	for (int i = 0; i < year_numb; i++)
	{
		std::cout << "\t" << wine_inf.first()[i] << "\t" << wine_inf.second()[i] << "\n";
	}
}
