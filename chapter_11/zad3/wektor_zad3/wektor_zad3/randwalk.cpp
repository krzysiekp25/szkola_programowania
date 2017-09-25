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
	int n;
	cout << "Podaj liczbê przejœæ delikwenta: ";
	cin >> n;
	cout << "Podaj dystans do przejœcia: ";
	cin >> target;
	cout << "Podaj d³ugoœæ kroku: ";
	cin >> dstep;
	int i = 0;
	double srednia_ilosc_krokow = 0;
	double max_kroki = 0;
	double min_kroki = 0;
	while (n>i++)
	{
		while (result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}
		srednia_ilosc_krokow += steps;
		if(min_kroki == 0)
			min_kroki = steps;
		if(max_kroki == 0)
			max_kroki = steps;
		if (steps < min_kroki)
			min_kroki = steps;
		if (steps > max_kroki)
			max_kroki = steps;
		//cout << steps << endl;
		result.polar_mode();
		steps = 0;
		result.reset(0.0, 0.0);
	}
	cout << "Œrednia iloœæ kroków: " << srednia_ilosc_krokow / n << "\nMaksymalna iloœæ kroków: " << max_kroki << "\nMinimalna iloœæ kroków: " << min_kroki << endl;
	cout << "Koniec\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
	cin.get();
	return 0;
}