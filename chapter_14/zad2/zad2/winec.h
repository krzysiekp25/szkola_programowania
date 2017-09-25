#pragma once
#include <string>
#include <valarray>
#include "pairs.h"

class Wine : private std::string, private Pair< std::valarray<int>, std::valarray<int> >
{
private:
	int year_numb;
	//std::string name;
	//Pair< std::valarray<int>, std::valarray<int> > wine_inf;
	//tym razem dziedziczenie prywatne po tych obiektach
public:
	Wine(const char * l, int y, const int yr[], const int bot[]);
	Wine(const char * l, int y);
	Wine();
	void GetBottles();
	const std::string & Label();
	int sum();
	void Show();
};