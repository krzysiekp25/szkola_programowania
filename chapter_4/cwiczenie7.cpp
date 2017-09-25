#include <iostream>
#include <string>

int main()
{
    using namespace std;

    struct pizza
    {
        string firma;
        float srednica;
        int waga;
    };

    pizza margeritta;

    cout << "Podaj nazwe firmy: ";
    getline(cin, margeritta.firma);

    cout << "Podaj srednice pizzy: ";
    cin >> margeritta.srednica;

    cout << "Podaj wage pizzy: ";
    cin >> margeritta.waga;


    cout << "\nFirma: " << margeritta.firma << endl;
    cout << "Srednica: " << margeritta.srednica << endl;
    cout << "Waga: " << margeritta.waga;

    cin.get();
    cin.get();

    return 0;
}
