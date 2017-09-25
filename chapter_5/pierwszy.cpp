#include <iostream>

int main()
{
    using namespace std;

    cout << "Podaj dwie liczby calkowite\n";

    int a, b, c;
    cin >> a;
    cin >> b;
    for (a, b, c=0; a<=b; a++)
        {
            c=a+c;

        };
    cout << "KONIEC " << c;

    cin.get();
    cin.get();

    return 0;
}
