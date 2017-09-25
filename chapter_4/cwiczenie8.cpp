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

    pizza * pz = new pizza;

    cout << "Podaj srednice pizzy: ";
    cin >> pz->srednica;

    cin.get();

    cout << "Podaj nazwe firmy: ";
    getline(cin, pz->firma);

    cout << "Podaj wage pizzy: ";
    cin >> pz->waga;


    cout << "\nFirma: " << pz->firma << endl;
    cout << "Srednica: " << pz->srednica << endl;
    cout << "Waga: " << pz->waga;

    delete pz;

    cin.get();
    cin.get();

    return 0;
}
