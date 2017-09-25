#pragma once
#include <string>

using std::string;

class Person
{
private:
	string imie;
	string nazwisko;
public:
	Person() : imie("brak"), nazwisko("brak") {}
	Person(string im, string naz) : imie(im), nazwisko(naz) {}
	virtual ~Person() {}
	virtual void Show();
};