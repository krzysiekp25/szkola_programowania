#include <iostream>
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
	std::string str = s;
	std::reverse(str.begin(), str.end());
	if (str == s)
		return true;
	else return false;
}