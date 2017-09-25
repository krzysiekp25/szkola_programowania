#include <iostream>
#include <string>

int main()
{
    using namespace std;

    cout << "Podaj imie: ";
    string imie;
    cin >> imie;

    cout << "Podaj nazwisko: ";
    string nazwisko;
    cin >> nazwisko;

    string wszystko;
    wszystko = nazwisko;
    wszystko += ", ";
    wszystko += imie;

    cout << "Oto informacje zestawione w jeden napis: " << wszystko;

    cin.get();
    cin.get();

    return 0;
}
