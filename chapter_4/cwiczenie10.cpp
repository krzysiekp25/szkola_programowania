#include <iostream>
#include <array>

int main()
{
	using namespace std;

    array<int, 3> sprint;

	cout << "Podaj pierwszy wynik sprintu na 100m: ";
	cin >> sprint[0];

	cout << "Podaj drugi wynik sprintu na 100m: ";
    cin >> sprint[1];

    cout << "Podaj trzeci wynik sprintu na 100m: ";
    cin >> sprint[2];

    float srednia = float(sprint[0]+sprint[1]+sprint[2])/3;

    cout << "Czasy: " << sprint[0] << " " << sprint[1] << " i " << sprint[2]
    << " srednio wynosza: " << srednia;

    cin.get();
    cin.get();

	return 0;
}
