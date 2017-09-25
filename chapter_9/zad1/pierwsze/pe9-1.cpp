#include <iostream>
#include "golf.h"

int main()
{
    using std::cout;
    golf struktura;
    cout << "Ustawianie \"reczne\" struktury...\n";
    setgolf(struktura);
    cout << "\nWynik \"recznego\" ustawienia...\n";
    showgolf(struktura);
    cout << "\nPodanie stalych z programu: Dupa123, 321...\n";
    setgolf(struktura, "Dupa123", 321);
    cout << "Wynik \"maszynowego\" ustawienia...\n";
    showgolf(struktura);
    cout << "\nZmiana handicap na 987...\n";
    handicap(struktura, 987);
    cout << "Wynik zmiany handicap...\n";
    showgolf(struktura);
    return 0;
}
