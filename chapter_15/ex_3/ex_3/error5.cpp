#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>

double hmean(double a, double b);
double gmean(double a, double b);
//classes
class bad_mean : public std::logic_error
{
private:
	double x;
	double y;
public:
	bad_mean(double a, double b) : x(a), y(b), logic_error("Niepoprawne argumenty ") {}
	virtual void show() const
	{
		std::cout << x << " " << y << std::endl;
	}
};

class bad_gmean : public bad_mean
{
public:
	bad_gmean(double a, double b) : bad_mean(a, b) {}
	void show() const
	{
		bad_mean::show();
		std::cout << "Argumenty powinny byc >= 0\n";
	}
};

class bad_hmean : public bad_mean
{
public:
	bad_hmean(double a, double b) : bad_mean(a, b) {}
	void show() const
	{
		bad_mean::show();
		std::cout << "Argumenty powinny byc rozne od siebie\n";
	}
};
//main function
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
		catch (const bad_mean & bm)
		{
			cout << bm.what();
			bm.show();
			break;
		}
	}
	cout << "Koniec\n";
	system("pause");
	return 0;
}



double hmean(double a, double b)
{
	if (a == -b)
		throw bad_hmean(a, b);
	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw bad_gmean(a, b);
	return std::sqrt(a * b);
}