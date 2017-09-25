#include <iostream>
#include "stos.h"

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	customer cus1 = { "Jeden",13.05 };
	customer cus2 = { "Dwa",25.5 };
	customer cus3 = { "Trzy",5.0 };
	customer cus4 = { "Cztery",12 };
	
	cout << "Customersi " << endl;
	cout << cus1.fullname << ", zaplacil $"
		<< cus1.payment << endl;
	cout << cus2.fullname << ", zaplacil $"
		<< cus2.payment << endl;
	cout << cus3.fullname << ", zaplacil $"
		<< cus3.payment << endl;
	cout << cus4.fullname << ", zaplacil $"
		<< cus4.payment << endl;

	cout << "Dodac cus1 na stos" << endl;

	// push customers
	Stack s;
	if (s.push(cus1))
		cout << cus1.fullname << " dodane poprawnie!"
		<< endl;
	else
		cout << cus1.fullname << " nie zostal dodany"
		<< endl;

	double total = 0.0;
	cout << "Forsa: $" << total << endl;

	cout << "Wyrzucamy cus1" << endl;

	// pop customers
	customer c;
	if (s.pop(c))
	{
		cout << "Customers " << c.fullname << " wywalony."
			<< endl;
		total += c.payment;
	}
	else
		cout << "Brak customersow" << endl;

	cout << "Wywalmy kolejnego" << endl;

	// let's pop one last customer
	if (s.pop(c))
	{
		cout << "Customers " << c.fullname << " wywalony."
			<< endl;
		total += c.payment;
	}
	else
		cout << "Brak customersow" << endl;

	cout << "Forsa: $" << total
		<< endl;
	cin.get();
	return 0;
}