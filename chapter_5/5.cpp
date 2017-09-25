#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string miesiac[12] =
     {
         "Styczen",
         "Luty",
         "Marzec",
         "Kwiecien",
         "Maj",
         "Czerwiec",
         "Lipiec",
         "Sierpien",
         "Wrzesien",
         "Pazdziernik",
         "Listopad",
         "Grudzien",
     };

    int ilosc[12];
    int i= 0;
    cout << "Podaj ilosc sprzedanych ksiazek w ciagu kazdego miesiaca\n";
    while(i<12)
    {
     cout << miesiac[i] << endl;
     cin >> ilosc[i];
     i++;
    };
    int razem;
    for(ilosc, i=0,razem=0;i<12;i++)
    {
        razem += ilosc[i];
    };
    cout << "W ciagu calego roku sprzedano " << razem << " ksiazek.";
    cin.get();
    cin.get();

    return 0;
}
