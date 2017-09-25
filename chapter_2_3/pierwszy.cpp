#include <iostream>
void czas(int, int);

int main()
{
    using namespace std;
    cout << "Podaj liczbe godzin: ";
    int godzina;
    cin >> godzina;
    cout << "Podaj liczbe minut: ";
    int minuta;
    cin >> minuta;
    czas(godzina, minuta);
    cin.get();
    cin.get();
    return 0;
}
void czas(int h, int m)
{
    std::cout << "Czas: " << h << ":" << m;
}

