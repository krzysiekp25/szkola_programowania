#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    ifstream plik;
    plik.open("tekst.txt");
    char znak;
    int ile_znakow=0;
    plik >> znak;
    while(!plik.eof())
    {
        ile_znakow++;
        plik >> znak;
    }
    plik.close();
    cout << "Ilosc znakow w czytanym pliku wynosi: " << ile_znakow << endl;
    return 0;
}
