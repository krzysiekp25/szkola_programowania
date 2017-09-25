#include <iostream>

#define METR 0.0254
#define KILO 2.2
#define STOPA 12

int main()
{
    using namespace std;

    cout << "Podaj wzrost w stopach i calach:\n";
    cout << "Stopy: ";
    int stopa;
    cin >> stopa;

    cout << "Cale: ";
    int cale;
    cin >> cale;

    cout << "Podaj wage w funtach: ";
    int funty;
    cin >> funty;

    int wzrost;
    wzrost = stopa * STOPA + cale;

    double metry;
    metry = wzrost * METR;

    double waga;
    waga = funty / KILO;

    double BMI;
    BMI = waga / (wzrost * wzrost);

    cout << "Waga w BMI wynosi: " << BMI << ".";

    cin.get();
    cin.get();
    return 0;
}
