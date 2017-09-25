#include <iostream>
#include <string>
#include "krowa.h"

int main()
{
	using std::cout;
	using std::cin;
	cout << "Tworzenie nowej krowy konstruktorem domyslnym...\n";
	Cow krowa;
	krowa.ShowCow();
	cout << "Przypisanie nowych wartosci za pomoca konstruktora (testowanie konstr2 i przypisania)...\n";
	char* name = new char[20];
	char* hobby = new char[40];
	double weight = 0;
	cin.getline(name,20);
	cin.getline(hobby,40);
	cin >> weight;
	krowa = Cow(name, hobby, weight);
	krowa.ShowCow();
	cout << "Utworzenie nowej krowy...\n";
	Cow krowa2("Zosia","trawka",100);
	krowa2.ShowCow();
	krowa.ShowCow();
	system("pause");
	return 0;
}