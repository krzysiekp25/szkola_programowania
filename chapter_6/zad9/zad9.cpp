#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct donatorzy
{
    string nazwisko;
    double dotacja;
};

int main()
{
    ifstream plik;
    plik.open("daroczyncy.txt");
    int liczba;
    plik >> liczba;
    plik.get();
    donatorzy * lista = new donatorzy [liczba];
    for(int i=0;i<liczba;i++)
    {
        getline(plik,lista[i].nazwisko);
        plik >> lista[i].dotacja;
        plik.get();
    }
    plik.close();
    cout << "Nasi wspaniali donatorzy: \n";
    bool x=0;
    for(int i=0; i<liczba; i++)
    {
        if(lista[i].dotacja>=10000)
        {
            cout << fixed;
            cout << setprecision(2);
            cout << lista[i].nazwisko << " : " << lista[i].dotacja << endl;
            x=1;
        }
    }
    if(x==0)
    {
        cout << "brak\n";
        x=1;
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
            x=1;
        }
    }
    if(x==0)
    {
        cout << "brak\n";
        x=1;
    }
    delete [] lista;
    return 0;
}
