#include <iostream>

using namespace std;

float podatek(float);

int main()
{
    cout << "Podaj ilosc twarpow: ";
    float twarp;
    cin >> twarp;
    if(!cin.good())
    {
        cout << "Blad, nie podano liczby!";
        return 1;
    }
    else if(twarp<0)
    {
        cout << "Blad, podano wartosc ujemna!";
        return 1;
    }
    cout << "Podatek z " << twarp << " twarpow wynosi: " << podatek(twarp);
    return 0;
}

float podatek(float tw)
{
    if(tw<=5000)
        return 0;
    else if(tw<=15000)
        return 0.1*(tw-5000);
    else if(tw<=35000)
        return 0.1*10000+0.15*(tw-15000);
    else
        return 0.1*10000+0.15*20000+0.2*(tw-35000);
}
