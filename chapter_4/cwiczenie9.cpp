#include <iostream>
#include <string>

int main()
{
	using namespace std;

	struct Batonik
	{
		string marka;
		double waga;
		int kcal;
	};

	Batonik * bat = new Batonik [3];

	bat[0].marka = "Zero kalorii"; bat[0].waga = 10.5; bat[0].kcal =  1;
    bat[1].marka = "Zero kalorii"; bat[1].waga = 10.5; bat[1].kcal =  1;
    bat[2].marka = "Zero kalorii"; bat[2].waga = 10.5; bat[2].kcal =  1;

	cout << "Marka: " << bat[0].marka << endl;
	cout << "Waga: " << bat[0].waga << endl;
	cout << "Kcal: " << bat[0].kcal << endl << endl;

	cout << "Marka: " << bat[1].marka << endl;
	cout << "Waga: " << bat[1].waga << endl;
	cout << "Kcal: " << bat[1].kcal << endl << endl;

	cout << "Marka: " << bat[2].marka << endl;
	cout << "Waga: " << bat[2].waga << endl;
	cout << "Kcal: " << bat[2].kcal << endl;

    delete [] bat;

    cin.get();

	return 0;
}
