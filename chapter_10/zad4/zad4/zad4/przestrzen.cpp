#include <iostream>
#include "przestrzen.h"

SALES::Sale::Sale(const double ar[], int n)
{
	this->average = 0;
	this->max = ar[0];
	this->min = ar[0];
	for (int i = 0; i < n; i++)
	{
		this->sales[i] = ar[i];
		this->average += ar[i];
		if (this->max < this->sales[i])
			this->max = this->sales[i];
		if (this->min > this->sales[i])
			this->min = this->sales[i];
	}
	this->average /= n;
}

SALES::Sale::Sale()
{
	using std::cout;
	using std::cin;
	cout << "Podawaj kolejne elementy po spacji w ilosci 4:\n";
	for (int i = 0; i<4; i++)
	{
		cin >> this->sales[i];
	}
	this->average = this->sales[0];
	this->max = this->sales[0];
	this->min = this->sales[0];
	for (int i = 1; i<4; i++)
	{
		this->average += this->sales[i];
		if (this->max<this->sales[i])
			this->max = this->sales[i];
		if (this->min > this->sales[i])
			this->min = this->sales[i];
	}
	this->average /= 4;
}

void SALES::Sale::showSales() const
{
	using std::cout;
	cout << "Srednia: " << this->average << "\n";
	cout << "Min: " << this->min << "\n";
	cout << "Max: " << this->max << "\n";
}
