#include <iostream>

int main()
{
    using namespace std;

    cout << "Jak masz na imie? ";
    char imie[20];
    cin.getline(imie, 20);

    cout << "Jak sie nazywasz? ";
    char nazwisko[20];
    cin.getline(nazwisko, 20);

    cout << "Na jaka ocene zaslugujesz? ";
    int ocena;
    cin >> ocena;
    ocena--;

    cout << "Ile masz lat? ";
    int wiek;
    cin >> wiek;

    cout << "Nazwisko: " << nazwisko << ", " << imie << endl;

    cout << "Ocena: " << ocena << endl;

    cout << "Wiek: " << wiek;

    cin.get();
    cin.get();

    return 0;
}
