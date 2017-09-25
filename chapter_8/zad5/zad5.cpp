#include <iostream>
using namespace std;
template <typename T>
auto max5(T * tablica) -> decltype(*tablica);

int main()
{
    double tab[5];
    cout << "Podaj wartosci tablicy: ";
    for(int i=0;i<5;i++)
    {
        cout << "tab[" << i << "]: ";
        cin >>tab[i];
    }
    cout << "Najwieksza wartosc tablicy: " << max5(tab);
    return 0;
}

template <typename T>
auto max5(T * tablica) -> decltype(*tablica)
{
    T maksimum = tablica[0];
    for(int i=0;i<4;i++)
    {
        if(tablica[i+1]>maksimum) maksimum=tablica[i+1];
    }
    return maksimum;
}
