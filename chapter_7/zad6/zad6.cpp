#include <iostream>

int fill_array(double tablica[],int wielkosc_maksymalna);
void show_array(const double tablica[], int wielkosc); // wielkosc to liczba zwracana przez funkcje fill_array
void reverse_array(double tablica[], int wielkosc); // jak wyzej

int main()
{
    using namespace std;
    double tab[10];
    int wielkosc;
    wielkosc = fill_array(tab,10);
    show_array(tab,wielkosc);
    reverse_array(tab,wielkosc);
    show_array(tab,wielkosc);
    cout << "Koniec\n";
    return 0;
}

int fill_array(double tab[],int x)
{
    using namespace std;
    cout << "tab[0] = ";
    int i=0;
        while(i<x&&cin >> tab[i])
        {
            i++;
            if(i==x)
                break;
            cout << "tab[" << i <<"] = ";
        }
        return i;
}

void show_array(const double tab[], int x)
{
    using namespace std;
    int i=0;
    while(i<x)
    {
        cout << "tab[" << i << "]: " << tab[i] << endl;
        i++;
    }
}

void reverse_array(double tab[], int x)
{
    double pomoc;
    int i=0;
    x--;
    while(i<x)
    {
        pomoc = tab[i];
        tab[i] = tab[x];
        tab[x] = pomoc;
        i++;
        x--;
    }
}

