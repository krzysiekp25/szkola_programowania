#include "worker.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void Worker::Data() const
{
	cout << "Imie i nazwisko: " << fullname << endl;
	cout << "Numer identyfikacyjny: " << id << endl;
}

void Worker::Get()
{
	getline(cin, fullname);
	cout << "Podaj numer identyfikacyjy: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}

Worker::~Worker()
{
}

void Worker::Set()
{
	cout << "Podaj imie i nazwisko pracownika: ";
	Get();
}

void Worker::Show() const
{
	cout << "Kategoria: pracownik\n";
	Data();
}
