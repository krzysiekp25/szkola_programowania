#include <iostream>
#include <iomanip>
using namespace std;

struct donatorzy
{
    string nazwisko;
    double dotacja;
};

int main()
{
    cout << "Podaj liczbe donatorow: ";
    int liczba;
    cin >> liczba;
    donatorzy * lista = new donatorzy [liczba];
    for(int i=0; i<liczba; i++)
    {
        cout << "Podaj nazwisko "<< i+1<< " osoby: ";
        cin >> lista[i].nazwisko;
        cout << "Podaj dotacje "<< i+1<< " osoby: ";
        cin >> lista[i].dotacja;
    }
    cout << "Nasi wspaniali donatorzy: \n";
    int x=0;
    for(int i=0; i<liczba; i++)
    {
        if(lista[i].dotacja>=10000)
        {
            cout << fixed;
            cout << setprecision(2);
            cout << lista[i].nazwisko << " : " << lista[i].dotacja << endl;
            x++;
        }
        if(x==0)
        {
            cout << "brak\n";
            x++;
        }
    }
    cout << "Nasi donatorzy: \n";
    x=0;
    for(int i=0; i<liczba; i++)
    {
        if(lista[i].dotacja<10000)
        {
            cout << fixed;
            cout << setprecision(2);
            cout << lista[i].nazwisko << " : " << lista[i].dotacja << endl;
            x++;
        }
        if(x==0)
        {
            cout << "brak\n";
            x++;
        }
    }
    delete [] lista;
    return 0;
}
