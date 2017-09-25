#include <iostream>


int main()
{
	using namespace std;

    cout << "Podaj ilosc przejechanych km: ";
    long km;
    cin >> km;

    cout << "Podaj ilosc zuzytego paliwa: ";
    long litr;
    cin >> litr;

    double zuzycie;

    zuzycie = ( double(litr) / double(km) ) *100;

    cout << "Samochod zurzywa: " << zuzycie << " litrow paliwa na 100 km.";
    cin.get();
    cin.get();
    return 0;
}
