#include <initializer_list>
#include <iostream>

template<typename Type>
auto average_list(std::initializer_list<Type> list) -> Type;


int main()
{
	using namespace std;

	auto q = average_list({ 15.4, 10.7, 9.0 });
	cout << q << endl;

	cout << average_list({ 20,30,19,17,45,38 }) << endl;

	auto ad = average_list<double>({ 'A', 70, 65.33 });
	cout << ad << endl;

	system("pause");
	return 0;
}

template<typename Type>
auto average_list(std::initializer_list<Type> list) -> Type
{
	Type sum = 0;
	for (auto it = list.begin(); it != list.end(); it++)
	{
		sum += *it;
	}
	Type average = sum / list.size();
	return average;
}
