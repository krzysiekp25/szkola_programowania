#include <iostream>


int main()
{
	using namespace std;

	const int MIN = 60;
	const int GODZ = 3600;
	const int DZIEN = 3600 * 24;

	cout << "Podaj liczbe sekund: ";
	long sek;
	cin >> sek;

	long sekundy = sek;

	int dz = sek / DZIEN;
	sek = sek % DZIEN;

	int godz = sek / GODZ;
	sek = sek % GODZ;

	int min = sek / MIN;
	sek = sek % MIN;

	cout << sekundy << " sekund = " << dz << " dni, " << godz << " godzin, " << min << " minut, " << sek
	     << " sekund." << endl;
    cin.get();
    cin.get();
	return 0;
}
