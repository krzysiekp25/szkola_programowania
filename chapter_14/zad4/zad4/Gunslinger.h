#pragma once
#include "Person.h"
using std::string;

class Gunslinger : virtual public Person
{
private:
	int scar;
public:
	Gunslinger() : Person(), scar(0) {}
	Gunslinger(string im, string naz, int sc) : Person(im, naz), scar(sc) {}
	float Draw();
	virtual void Show();
};