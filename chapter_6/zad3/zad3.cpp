#include <iostream>
#include <cstdlib>

using namespace std;

void menu(void);
void tekst_a(void);
void tekst_b(void);
void tekst_c(void);
void tekst_d(void);

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
                tekst_a();
                break;
            case 'b':
                tekst_b();
                break;
            case 'c':
                tekst_c();
                break;
            case 'd':
                tekst_d();
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
    cout << "a - wybierz tekst numer 1.\n";
    cout << "b - wybierz tekst numer 2.\n";
    cout << "c - wybierz tekst numer 3.\n";
    cout << "d - wybierz tekst numer 4.\n";
    cout << "e - Zakoncz program.\n";
    cout << "\nPodaj litere i wcisnij enter: ";
}

void tekst_a(void)
{
    cout << "\naaaaaaaaaaaaaaa\n\n";
    cout << "Nacisnij enter aby powrocic...";
    cin.get();
    cin.get();
    system("cls");
    menu();
}

void tekst_b(void)
{
    cout << "\nbbbbbbbbbbbbbbbbbbbbb\n\n";
    cout << "Nacisnij enter aby powrocic...";
    cin.get();
    cin.get();
    system("cls");
    menu();
}

void tekst_c(void)
{
    cout << "\nccccccccccccccc\n\n";
    cout << "Nacisnij enter aby powrocic...";
    cin.get();
    cin.get();
    system("cls");
    menu();
}

void tekst_d(void)
{
    cout << "\nddddddddddddd\n\n";
    cout << "Nacisnij enter aby powrocic...";
    cin.get();
    cin.get();
    system("cls");
    menu();
}
