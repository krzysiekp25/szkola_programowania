#include <ctime>
#include <cstdlib>
#include <iostream>
#include "Gunslinger.h"
using std::string;
using std::cout;
using std::endl;
float Gunslinger::Draw()
{
	srand(time(NULL));
	float pom = rand() % 5;
	return pom;
}

void Gunslinger::Show()
{
	Person::Show();
	cout << "Ilosc szram rewolweru: " << scar << endl;
	cout << "Uwaga! wyciaga rewolwer...\n" << "Zajelo mu to: " << Draw() << " sekund!\n";
}
