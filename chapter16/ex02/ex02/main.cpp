#include <iostream>
#include <algorithm>
#include <string>

bool palindrom(const std::string & s);

int main()
{
	using std::cout;
	using std::cin;
	using std::string;

	cout << "Podaj slowo: ";
	string str;
	std::getline(cin, str);
	if (palindrom(str))
		cout << "To palindrom\n";
	else
		cout << "To nie jest palindrom\n";
	system("pause");
	return 0;
}

bool palindrom(const std::string & s)
{
	std::string str1 = s;
	std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
	str1.erase(std::remove_if(str1.begin(), str1.end(), isspace), str1.end()); //erase usuwa w zadanym przedziale //remove_if przeszukuje str1 i wywala 
													//spacje na koniec nastepnie zwraca iterator na spacje i erase usuwa od tego momentu do konca stringa
	std::string str2 = str1;
	std::reverse(str1.begin(), str1.end());
	if (str1 == str2)
		return true;
	else return false;
}