#include <iostream>
#include <string>
#include <cstring>

int main()
{
    using namespace std;
    string name;
    string dessert;

    cout << "Podaj swoje imie:\n";
    getline(cin, name);
    cout << "Podaj swoj ulubiony deser: \n";
    getline(cin, dessert);
    cout << "Mam dla ciebie " << dessert;
    cout << ", " << name << ".\n";

    cin.get();
    cin.get();

    return 0;
}
