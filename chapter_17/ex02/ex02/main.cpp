#include <iostream>
#include <fstream>

int main()
{
	using namespace std;
	
	const int MAX = 255;
	char nazwa[MAX];
	
	cout << "Podaj nazwe tworzonego pliku: ";
	cin.getline(nazwa, MAX);
	ofstream plik(nazwa, ios_base::out);
	cout << "Wprowadz tekst, zakonczenie wymus koncem pliku:\n";
	char ch;
	while (cin.get(ch))
	{
		plik << ch;
	}
	plik.close();
	cout << "Koniec wprowadzania!\n";
	system("pause");
	return 0;
}