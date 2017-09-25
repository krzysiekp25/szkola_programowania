#include <iostream>

long double prawdopodobienstwo(unsigned liczby, unsigned wybory);

int main()
{
    using namespace std;
    double  liczby, wybory, megaliczby;
    cout << "Podaj najwieksza liczbe, jaka mozna wybrac, oraz liczbe skreslen: ";
    while((cin >> liczby >> wybory) && wybory <= liczby)
    {
    cout << "Podaj najwieksza megaliczbe: ";
    cin >> megaliczby;
    cout << "Szansa wygranej w podanych przedzialach to jeden do ";
    cout << prawdopodobienstwo(liczby, wybory)*prawdopodobienstwo(megaliczby,1.0);
    cout << "\n";
    cout << "Podaj kolejne liczby, lub wpisz q: ";
    }
    cout << "Koniec\n";
    return 0;
}

long double prawdopodobienstwo(unsigned liczby, unsigned wybory)
{
    long double wynik = 1.0;
    long double l;
    unsigned w;

    for(l=liczby, w=wybory;w>0;l--,w--)
    {
        wynik = wynik * l/w;
    }
    return wynik;
}
