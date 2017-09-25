#include <iostream>
#include "plorg.h"

int main()
{
	using std::cin;
	Plorg p1;
	Plorg p2("Ploreg", 20);
	p1.show();
	p2.show();
	p1.syty(30);
	p1.show();
	cin.get();
	return 0;
}