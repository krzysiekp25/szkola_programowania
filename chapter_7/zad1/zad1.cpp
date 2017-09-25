#include <iostream>

using namespace std;

double srednia(double a, double b);

int main()
{
    double a, b;
    cout << "Podaj dwie liczby do sredniej harmonicznej:\n";
    cin >> a >> b;
    while(a!=0&&b!=0)
    {
        cout << srednia(a,b) << endl;
        cout << "Podaj dwie liczby do sredniej harmonicznej:\n";
        cin >> a >> b;
    }
    return 0;
}

double srednia(double x, double y)
{
    return 2.0*x*y/(x+y);
}
