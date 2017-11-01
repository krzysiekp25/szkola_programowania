#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <cstdlib>

void ShowStr(const std::string & str);
void GetStrs(std::ifstream & f, std::vector<std::string> & v);

class Store
{
private:
	std::ofstream *file;
public:
	Store(std::ofstream & f) { file = &f; }
	void operator()(const std::string & s);//sprytne - przy for_each przekazujemy plik do konstruktora a pozniej wywolujemy operator() dla stringow z vectora :O
};

int main()
{
	using namespace std;
	vector<string> vostr;
	string temp;

	//pobierz
	cout << "Podaj lancuchy (aby zakonczyc, wprowadz pusty wiersz):\n";
	while (getline(cin, temp) && temp[0] != '\0')
		vostr.push_back(temp);
	cout << "Oto twoje dane wejsciowe.\n";
	for_each(vostr.begin(), vostr.end(), ShowStr);


	//zapisz
	ofstream fout("lancuchy.dat", ios_base::out | ios_base::binary);
	for_each(vostr.begin(), vostr.end(), Store(fout));
	fout.close();

	//odczytaj plik
	vector<string> vistr;
	ifstream fin("lancuchy.dat", ios_base::in | ios_base::binary);
	if (!fin.is_open())
	{
		cerr << "Nie mozna otworzyc pliku do odczytu.\n";
		exit(EXIT_FAILURE);
	}
	GetStrs(fin, vistr);
	cout << "\nOto lancuchy odczytane z pliku:\n";
	for_each(vistr.begin(), vistr.end(), ShowStr);

	cout << endl;
	system("pause");
	return 0;
}

void ShowStr(const std::string & str)
{
	std::cout << str << std::endl;
}

void GetStrs(std::ifstream & f, std::vector<std::string>& v)
{
	std::string tmp;
	int len;
	while (f.read((char*)&len, sizeof(std::size_t)))
	{
		char ch;
		for (int i = 0; i < len; i++)
		{
			f.read(&ch, sizeof(char));
			tmp += ch;
		}
		v.push_back(tmp);
		tmp.clear();
	}
}

void Store::operator()(const std::string & s)
{
	int len = s.length();
	file->write((char*)&len, sizeof(std::size_t));
	file->write(s.data(), len);
}
