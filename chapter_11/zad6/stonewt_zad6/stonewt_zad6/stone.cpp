// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
using std::cin;
#include "stonewt.h"
void display(const Stonewt & st, int n);
int main()
{
	Stonewt obiekty[6];
	obiekty[0] = Stonewt(11,0);
	obiekty[0] = Stonewt(11, 0);
	obiekty[0] = Stonewt(11, 0);
	for (int i = 3; i < 6; i++)
	{
		double wartosc;
		cin >> wartosc;
		obiekty[i] = Stonewt(wartosc);
	}
	for (int i = 1; i < 6; i++)
	{
		cout << (obiekty[i] == obiekty[0]);
	}
	cin.get();
	cin.get();

	return 0;
}
void display(const Stonewt & st, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Wow! ";
		st.show_stn();
	}
}