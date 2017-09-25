#include <iostream>
#include <iomanip>
using namespace std;

const int Maks = 10;
int main()
{
    double tablica[Maks];
    int licznik = 0;
    double suma=0;
    while(licznik<Maks)
    {
        cout << "Datek nr "<< licznik+1 <<": ";
        cin >> tablica[licznik];
        if(cin.good())
        {
            suma+=tablica[licznik];
            licznik++;
            continue;
        }
        else
        {
            cout << "Podano wartosc nieliczbowa.\n";
        }
        break;
    }
    if(licznik==10)
        cout << "Tablica pelna\n";
    cout << fixed;
    cout << setprecision(2);
    cout << "Srednia wynosi: " << suma/licznik << endl;
    cout << "Liczby powyzej sredniej: ";
    for(int i=0;i<licznik;i++)
    {
        if(tablica[i]>suma/licznik)
            cout << tablica[i] << " ";
    }
    return 0;
}
