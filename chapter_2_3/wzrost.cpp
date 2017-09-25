#include <iostream>

using namespace std;
int main()
{
    double centymetr, stopa, cal;
    const double stopy = 30.48;
    const double cale = 2.54;
    cout << "Podaj wzrost w centymetrach: ";
    cin >> centymetr;
    stopa = centymetr/stopy;
    cout << "Wielkosc w stopach: " << stopa << endl;
    cal = centymetr/cale;
    cout << "Wielkosc w calach: " << cal;
    cin.get();
    cin.get();
    return 0;
}
