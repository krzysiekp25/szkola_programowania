#include <iostream>

using namespace std;

double calculate(double x, double y, double (*funkcja)(double, double));

double dodaj(double x, double y);
double pomnoz(double x, double y);
double podziel(double x, double y);
double odejmij(double x, double y);

int main()
{
    cout << calculate(5,2,dodaj) << endl;
    cout << calculate(5,2,pomnoz) << endl;
    cout << calculate(5,2,podziel) << endl;
    cout << calculate(5,2,odejmij) << endl;
    return 0;
}

double calculate(double x, double y, double (*funkcja)(double, double))
{
    return (*funkcja)(x,y);
}

double dodaj(double x, double y)
{
    return x+y;
}

double pomnoz(double x, double y)
{
    return x*y;
}

double podziel(double x, double y)
{
    return x/y;
}

double odejmij(double x, double y)
{
    return x-y;
}
