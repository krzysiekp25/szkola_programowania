#include <iostream>
#include <fstream>

int main(int argc, char * argv[])
{
	using namespace std;

	if (argc != 4)
	{
		cout << "Nieodpowiednia ilosc argumentow!\n";
		system("pause");
		return 0;
	}

	ifstream file1(argv[1], ios_base::in);
	ifstream file2(argv[2], ios_base::in);
	ofstream file3(argv[3], ios_base::out);

	if (!file1.is_open())
	{
		cout << "Blad otwarcia pliku " << argv[1] << endl;
		system("pause");
		return 0;
	}
	if (!file2.is_open())
	{
		cout << "Blad otwarcia pliku " << argv[2] << endl;
		system("pause");
		return 0;
	}
	if (!file3.is_open())
	{
		cout << "Blad otwarcia pliku " << argv[3] << endl;
		system("pause");
		return 0;
	}
	while (!file1.eof() || !file2.eof())
	{
		char ch;
		bool file1end;
		file1.get(ch);
		if (file1.eof())
			file1end = true;
		else
			file1end = false;
		while (ch != '\n' && !file1.eof())
		{
			file3 << ch;
			file1.get(ch);
		}
		if(!file1end && !file2.eof())
			file3 << ' ';
		file2.get(ch);
		while (ch != '\n' && !file2.eof())
		{
			file3 << ch;
			file2.get(ch);
		}
		file3 << '\n';

	}
	//jezeli nie ma konca pliku to przenies wiersz - warunek dla obu plikow wejsciowych ifstream do pliku wyjsciowego ofstream (argv[1, 2, 3])
	system("pause");
	return 0;
}