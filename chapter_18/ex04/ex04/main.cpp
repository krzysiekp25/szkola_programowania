#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <functional>

void outint(int n) { std::cout << n << " "; }

int main()
{
	using std::list;
	using std::cout;
	using std::endl;
	
	int vals[10] = { 50, 100, 90, 180, 60, 210, 415, 88, 188, 201 };
	list<int> yadayada(vals, vals + 10);
	list<int> etcetera(vals, vals + 10);

	std::function<void(int)> outint = [](int n) { std::cout << n << " "; };//przejecie lambdy

	cout << "Oryginalne listy:\n";
	std::for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	std::for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;
	yadayada.remove_if([](int x) { return x > 100; });//anonimowe lambdy
	etcetera.remove_if([](int x) { return x > 200; });
	cout << "Przeciete listy:\n";
	std::for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	std::for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;

	system("pause");
	return 0;
}