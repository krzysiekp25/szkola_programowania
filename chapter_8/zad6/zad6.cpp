#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
T maxn(T * tablica, int ile);
template <> char* maxn(char * tablica[], int ile);

int main()
{
    double tab1[5];
    cout << "Podaj wartosci tablicy double: ";
    for(int i=0;i<5;i++)
    {
        cout << "tab[" << i << "]: ";
        cin >>tab1[i];
    }
    cout << "Najwieksza wartosc tablicy: " << maxn(tab1,5) << endl;

    int tab2[4];
    cout << "Podaj wartosci tablicy int: ";
    for(int i=0;i<4;i++)
    {
        cout << "tab[" << i << "]: ";
        cin >>tab2[i];
    }
    cout << "Najwieksza wartosc tablicy: " << maxn(tab2,4) << endl;

    char jeden[]="jeden";
    char dwa[]="dwa";
    char trzy[]="trzy";
    char cztery[]="cztere";
    char piec[]="cztery";
    char *tab3[5] =
    {
        jeden,
        dwa,
        trzy,
        cztery,
        piec
    };

    char * napis = maxn(tab3, 5);
    cout << "adres najwiekszego napisu i jego wartosc: " << &napis <<", " << napis << endl;
    return 0;
}

template <typename T>
T maxn(T * tablica, int ile)
{
    T maksimum = tablica[0];
    for(int i=0;i<ile;i++)
    {
        if(tablica[i]>maksimum) maksimum=tablica[i];
    }
    return maksimum;
}

template <> char* maxn(char * tablica[], int ile)
{
    char *maxchar = tablica[0];
    for(int i=0;i<ile;i++)
    {
        if(strlen(tablica[i])>strlen(maxchar)) maxchar = tablica[i];
    }
    return maxchar;
}
