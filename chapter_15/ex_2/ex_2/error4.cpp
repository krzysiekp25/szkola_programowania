#include <iostream>
#include <cmath>
#include <stdexcept>

double hmean(double a, double b);
double gmean(double a, double b);

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z;

	cout << "Podaj dwie liczby: ";
	while (cin >> x >> y)
	{
		try
		{
			z = hmean(x, y);
			cout << "Srednia harmoniczna liczb " << x << " i " << y
				<< " wynosi " << z << endl;
			cout << "Srednia geometryczna liczb " << x << y
				<< " wynosi " << gmean(x, y) << endl;
			cout << "Podaj kolejna pare liczb <w, aby wyjsc>: ";
		}
		catch (const std::logic_error & le)
		{
			cout << le.what() << endl;
			cout << "Sprobuj ponownie.\n";
			continue;
		}
	}
	cout << "Koniec\n";
	system("pause");
	return 0;
}

class bad_hmean : public std::logic_error
{
public:
	bad_hmean() : logic_error("Niepoprawne argumenty a = -b\n") {}
};

class bad_gmean : public std::logic_error
{
public:
	bad_gmean() : logic_error("Argumenty powinny byc >= 0\n") {}
};

double hmean(double a, double b)
{
	if (a == -b)
		throw bad_hmean();
	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw bad_gmean();
	return std::sqrt(a * b);
}