#include <iostream>

int main()
{
	using namespace std;

	char ch;
	cin.get(ch);
	int count = 0;
	while (ch != '$')
	{
		count++;
		cin.get(ch);
	}
	cin.putback(ch);
	cout << "Zliczono: " << count << " znakow.\n";
	cout << "Kolejny znak w buforze: " << (char) cin.peek() << endl;
	system("pause");
	return 0;
}