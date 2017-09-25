#include <iostream>
#include <cstdlib>

using namespace std;
const int liczba_czlonkow = 2;
struct zpdw
{
    char imie[20];
    char stanowisko[30];
    char pseudonim[20];
    int preferencja;
};
zpdw czlonkowie[liczba_czlonkow]=
{
    {"Mariusz", "Programista", "Mlody", 1},
    {"Daniel", "Zamiatacz", "Gruby", 3},
};
void menu(void);
void imie(void);
void stanowisko(void);
void pseudonim(void);
void preferencja(void);

int main()
{
    char znak;
    bool koniec = true;
    menu();
    while(koniec)
    {
        cin >> znak;
        switch(znak)
        {
        case 'a':
            imie();
            break;
        case 'b':
            stanowisko();
            break;
        case 'c':
            pseudonim();
            break;
        case 'd':
            preferencja();
            break;
        case 'e':
            koniec = false;
            break;
        default:
            cout << "Masz do wyboru a, b, c, d, e: ";
            break;
        }
    }
    return 0;
}

void menu(void)
{
    cout << "a - Lista imion\n";
    cout << "b - Lista stanowisk\n";
    cout << "c - Lista pseudonimow\n";
    cout << "d - Preferencja nazywania\n";
    cout << "e - Zakoncz program.\n";
    cout << "\nPodaj litere i wcisnij enter: ";
}

void imie(void)
{
    cout << "Imiona zalogi:\n";
    for(int i=0; i<liczba_czlonkow; i++)
    {
        cout << czlonkowie[i].imie << endl;
    }
    cout << "Nacisnij enter aby powrocic...";
    cin.get();
    cin.get();
    system("cls");
    menu();
}

void stanowisko(void)
{
    cout << "Stanowiska zalogi:\n";
    for(int i=0; i<liczba_czlonkow; i++)
    {
        cout << czlonkowie[i].stanowisko << endl;
    }
    cout << "Nacisnij enter aby powrocic...";
    cin.get();
    cin.get();
    system("cls");
    menu();
}

void pseudonim(void)
{
    cout << "Pseudonimy zalogi:\n";
    for(int i=0; i<liczba_czlonkow; i++)
    {
        cout << czlonkowie[i].pseudonim << endl;
    }
    cout << "Nacisnij enter aby powrocic...";
    cin.get();
    cin.get();
    system("cls");
    menu();
}

void preferencja(void)
{
    cout << "Preferencja nazywania:\n";
    for(int i=0; i<liczba_czlonkow; i++)
    {
        if(czlonkowie[i].preferencja==1)
            cout << czlonkowie[i].imie << endl;
        else if(czlonkowie[i].preferencja==2)
            cout << czlonkowie[i].stanowisko << endl;
        else
            cout << czlonkowie[i].pseudonim << endl;
    }
    cout << "Nacisnij enter aby powrocic...";
    cin.get();
    cin.get();
    system("cls");
    menu();
}
