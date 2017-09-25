#include <iostream>
#include <string>

struct batonik
    {
        char marka[12];
        float waga;
        int kalorie;
    };

int main()
{
    using namespace std;

    batonik snack = {"Mocha Munch", 2.3, 350};

    cout << "Marka: " << snack.marka << endl;
    cout << "Waga: " << snack.waga << endl;
    cout << "Kalorie " << snack.kalorie;

    cin.get();

    return 0;
}
