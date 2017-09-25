#include <iostream>
#include <string.h>
struct Batonik
{
    char marka[50];
    double waga;
    int kalorie;
};

void wypelnij(Batonik & struktura, const char *napis = "Millennium Munch", double waga = 2.85, int kalorie = 350);
void wypisz(const Batonik & struktura);

int main()
{
    Batonik fajny;
    Batonik slaby;
    wypelnij(slaby);
    wypelnij(fajny,"mega",123.10,99);
    wypisz(slaby);
    wypisz(fajny);

}
void wypelnij(Batonik & struktura, const char* napis, double waga, int kalorie)
{
    strcpy(struktura.marka, napis);
    struktura.waga = waga;
    struktura.kalorie = kalorie;
}
void wypisz(const Batonik & struktura)
{
    using namespace std;
    cout << "Marka: " << struktura.marka << endl;
    cout << "Waga: " << struktura.waga << endl;
    cout << "Kalorie: " << struktura.kalorie << endl;
}
