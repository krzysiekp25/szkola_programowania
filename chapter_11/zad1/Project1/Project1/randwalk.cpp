#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <clocale>
#include "vect.h"

int main()
{
	setlocale(LC_ALL, "");
	using namespace std;
	using VECTOR::Vector;
	ofstream plik;
	plik.open("wyjscie.txt", ios::out);
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Podaj dystans do przejœcia (k, aby zakoñczyæ): ";
	while (cin >> target)
	{
		cout << "Podaj d³ugoœæ kroku: ";
		if (!(cin >> dstep))
			break;
		plik << "Dystans do przejœcia: " << target << ", d³ugoœæ kroku: " << dstep << endl << endl;
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
			plik << steps << ": " << result << endl;
		}
		cout << "Po " << steps << " krokach delikwent osi¹gn¹³ po³o¿enie:\n";
		plik << "Po " << steps << " krokach delikwent osi¹gn¹³ po³o¿enie:\n";
		cout << result << endl;
		plik << result << endl;
		result.polar_mode();
		cout << " czyli\n" << result << endl;
		plik << " czyli\n" << result << endl;
		cout << "Œrednia d³ugoœæ kroku pozornego = " << result.magval() / steps << endl;
		plik << "Œrednia d³ugoœæ kroku pozornego = " << result.magval() / steps << endl << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Podaj dystans do przejœcia (k, any zakonczyc): ";
	}
	cout << "Koniec\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}