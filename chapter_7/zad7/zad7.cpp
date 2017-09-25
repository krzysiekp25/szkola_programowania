#include <iostream>

double * fill_array(double tablica[],double koniec[]);
void show_array(const double tablica[],const double koniec[]); // koniec to ostatni+1 element tablicy funkcje fill_array
void revalue_array(double zmiana, double tablica[], double koniec[]); // jak wyzej plus wartosc zmiany

int main()
{
    using namespace std;
    const int maks = 10;
    double tab[maks];
    double * wielkosc;
    wielkosc = fill_array(tab,tab+maks);
    show_array(tab,wielkosc);
    if(wielkosc>0)
    {
        cout << "Podaj czynnik zmiany wartosci: ";
        double zmiana;
        while(!(cin>>zmiana))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Niepoprawna wartosc. Podaj liczbe: ";
        }
        revalue_array(zmiana, tab, wielkosc);
        show_array(tab, wielkosc);
    }
    cout << "Koniec\n";
    return 0;
}

double * fill_array(double * poczatek, double * koniec)
{
    using namespace std;
    double * pcz = poczatek;
        for(int i=0;pcz!=koniec;i++)
        {
            cout << "tab[" << i <<"] = ";
            if(!(cin>>*pcz))
            {
                cin.clear();
                while(cin.get() != '\n')
                    continue;
                break;
            }
            pcz++;
        }
        return pcz;
}

void show_array(const double * poczatek,const double * koniec)
{
    using namespace std;
    const double * pcz = poczatek;
    for(int i=0;pcz!=koniec;i++)
    {
        cout << "tab[" << i << "]: " << *pcz << endl;
        pcz++;
    }
}

void revalue_array(double z, double * poczatek, double * koniec)
{
    double * pcz = poczatek;
    while(pcz!=koniec)
    {
        *pcz *= z;
        pcz++;
    }
}

