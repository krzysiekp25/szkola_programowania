#include <iostream>
#include <string>
#include "konto.h"

int main()
{
	Konto kowalski = Konto("Kowalski Jan", 123456789, 10000.0);
	kowalski.show();
	kowalski.deposit(123.20);
	kowalski.show();
	std::cout << "Pobieram 99999999.00 zl:\n";
	kowalski.withdraw(99999999.0);
	kowalski.show();
	std::cout << "Pobieram 987.00 zl:\n";
	kowalski.withdraw(987.0);
	kowalski.show();
	std::cin.get();
	return 0;
}