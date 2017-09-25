#include <iostream>


int main()
{
	using namespace std;
    cout << "Podaj liczbe ludnosci swiata: ";
    long long swiat;
    cin >> swiat;
    cout << "Podaj liczbe lidnosci Polski: ";
    long long polska;
    cin >> polska;
    double procent;
    procent = ( double(polska) / double(swiat) )* 100;
    cout << "Populacja Polski stanowi " << procent << "% populacji swiata.";
    cin.get();
    cin.get();
    return 0;
}
