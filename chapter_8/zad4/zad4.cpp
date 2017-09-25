#include <iostream>
using namespace std;
#include <cstring>
struct stringy
{
    char * str;
    int ct;
};
void set(stringy & struktura, char * napis);
void show(const stringy & struktura, int ile = 1);
void show(const char * napis, int ile = 1);

int main()
{
    stringy beany;
    char testing[] = "Rzeczywistosc to juz nie to, co kiedys.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Gotowe!");
    delete [] beany.str;
    return 0;
}

void set(stringy & struktura, char * napis)
{
    int ile = strlen(napis);
    char * wynik = new char[ile+1];
    struktura.str = wynik;
    strcpy(struktura.str, napis);
    struktura.ct = ile;
}
void show(const stringy & struktura, int ile)
{
    while(ile-->0)
    {
        cout << struktura.str;
        cout << endl;
    }
}

void show(const char * napis, int ile)
{
    while(ile-->0)
    {
        cout << napis;
        cout << endl;
    }
}
