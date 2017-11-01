#include <iostream>
#include <fstream>

int main(int argc, char * argv[])
{
	using namespace std;
	ifstream odczyt;
	ofstream zapis;
	if (argc == 3)
	{
		odczyt.open(argv[1]);
		if (!odczyt.is_open())
		{
			cout << "Blad otwarcia pliku: " << argv[1];
			system("pause");
			return 0;
		}
		zapis.open(argv[2]);
		if (!zapis.is_open())
		{
			cout << "Blad otwarcia pliku: " << argv[2];
			system("pause");
			return 0;
		}
	}
	else
	{
		cout << "Brak argumentow.\n";
		system("pause");
		return 0;
	}

	char ch;
	while (odczyt.get(ch))
	{
		zapis.put(ch);
	}
	cout << "Koniec!\n";

	odczyt.close();
	zapis.close();

	system("pause");
	return 0;
}