#include <cstring>
#include <iostream>
#include "golf.h"

void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handcap = hc;
}

void setgolf(golf & g)
{
    using std::cout;
    using std::cin;

    cout << "Podaj pelne imie: ";
    cin.getline(g.fullname, Len);
    cout << "Podaj handicap: ";
    cin >> g.handcap;
}

void handicap(golf & g, int hc)
{
    g.handcap = hc;
}

void showgolf(const golf & g)
{
    using std::cout;
    using std::endl;

    cout << "Pelne imie: " << g.fullname << endl;
    cout << "Handicap: " << g.handcap << endl;
}
