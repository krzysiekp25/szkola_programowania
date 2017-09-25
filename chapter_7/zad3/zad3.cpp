#include <iostream>

using namespace std;

struct pudlo
{
    char producent[40];
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float objetosc;
};

void wyswietl(pudlo struktura);
void ustaw(pudlo *struktura);

int main()
{
    pudlo karton = {"dupa",10,20,15};
    wyswietl(karton);
    ustaw(&karton);
    wyswietl(karton);
    return 0;
}

void wyswietl(pudlo struktura)
{
    cout << "Producent: " << struktura.producent << endl;
    cout << "Wysokosc: " << struktura.wysokosc << endl;
    cout << "Szerokosc: " << struktura.szerokosc << endl;
    cout << "Dlugosc: " << struktura.dlugosc << endl;
    cout << "Objetosc: " << struktura.objetosc << endl;
}

void ustaw(pudlo *struktura)
{
   struktura->objetosc = (struktura->dlugosc)*(struktura->szerokosc)*(struktura->wysokosc);
   cout << endl;
}
