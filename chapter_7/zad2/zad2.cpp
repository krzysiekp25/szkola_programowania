#include <iostream>

using namespace std;
const int maks = 10;
int wprowadz(double tab[], int maks);
void wyswietl(const double tab[], int x);
double srednia(const double tab[], int x);

int main()
{
    double tablica[maks];
    int wprowadzono = wprowadz(tablica,maks);
    wyswietl(tablica,wprowadzono);
    cout << "Srednia wynosi: " << srednia(tablica,wprowadzono) << endl;
}

int wprowadz(double tab[], int maks)
{
   cout << "Wprowadz wyniki z golfa, podanie wartosci nieliczbowej konczy wprowadzanie:\n";
   int x=0;
   while(cin>>tab[x]&&x<maks)
   {
       x++;
   }
   return x;
}

void wyswietl(const double tab[], int x)
{
    cout << "Wyniki: ";
    for(int i=0;i<x;i++)
    {
        cout << tab[i] << ", ";
    }
}

double srednia(const double tab[], int x)
{
    double suma = 0;
    for(int i=0;i<x;i++)
    {
        suma+=tab[i];
    }
    return suma/x;
}
