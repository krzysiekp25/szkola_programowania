#include <iostream>


int main()
{
	using namespace std;

    const double GALON = 3.875;
    const double MILA = 62.14;
    cout << "Podaj ilosc zuzywanych litrow benzyny na 100 km: ";
    int litr;
    cin >> litr;        //ile litrow na 100km

    double galon;
    galon = litr/GALON;    //zmiana litrow na galon

    double predkosc;
    predkosc = MILA/galon;     //mile dzielimy przez galon aby wiedziec ile jest na 1 galon

    cout << "Samochod przejedzie " << predkosc << " mil na galon.";


    cin.get();
    cin.get();
    return 0;
}
