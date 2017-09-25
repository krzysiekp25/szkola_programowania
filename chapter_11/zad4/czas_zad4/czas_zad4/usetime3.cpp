//usetime3.cpp -- using the fourth draft of the Time class
// compile usetime3.cpp and mytime3.cpp together
#include <iostream>
#include "mytime3.h"
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;
	cout << "Aida i Tosca:\n";
	cout << aida << "; " << tosca << endl;
	temp = aida + tosca; // operator+()
	cout << "Aida + Tosca: " << temp << endl;
	temp = aida* 1.17; // member operator*()
	cout << "Aida * 1.17: " << temp << endl;
	cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
	cin.get();
	return 0;
}