#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    cout << "Podaj imie: ";
    char imie[20];
    cin >> imie;

    cout << "Podaj nazwisko: ";
    char nazwisko[20];
    cin >> nazwisko;

    char wszystko[30];
    strcpy(wszystko, nazwisko);
    strcat(wszystko, ", ");
    strcat(wszystko, imie);

    cout << "Oto informacje zestawione w jeden napis: " << wszystko;

    cin.get();
    cin.get();

    return 0;
}
