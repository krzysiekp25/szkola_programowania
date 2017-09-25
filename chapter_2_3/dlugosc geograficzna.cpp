#include <iostream>

#define MINUTA 60
#define SEKUNDA 3600

int main()
{
    using namespace std;

    cout << "Podaj dlugosc geograficzna w stopniach, minutach i sekundach:\n";


    cout << "Stopnie: ";
    int stopnie;
    cin >> stopnie;


    cout << "Minuty: ";
    int minuty;
    cin >> minuty;


    cout << "Sekundy: ";
    int sekundy;
    cin >> sekundy;


    double dlugosc_geograficzna;
    dlugosc_geograficzna = stopnie + double (minuty) / MINUTA + double (sekundy) / SEKUNDA;


    cout << stopnie << " stopni, " << minuty << " minut i "
    << sekundy << " sekund dziesietnie wynosi: " << dlugosc_geograficzna << ".";

    cin.get();
    cin.get();
    return 0;
}
