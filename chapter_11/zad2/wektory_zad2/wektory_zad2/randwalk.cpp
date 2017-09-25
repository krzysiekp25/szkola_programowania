#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
#include "vect.h"

int main()
{
	setlocale(LC_ALL, "");
	using namespace std;
	using VECTOR::Vector;
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
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		cout << "Po " << steps << " krokach delikwent osi¹gn¹³ po³o¿enie:\n";
		cout << result << endl;
		result.polar_mode();
		cout << " czyli\n" << result << endl;
		cout << "Œrednia d³ugoœæ kroku pozornego = " << result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Podaj dystans do przejœcia (k, any zakoñczyæ): ";
	}
	cout << "Koniec\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	return 0;
}