#include "lotto.h"
#include <iostream>
#include <iterator>

int main()
{
	using namespace std;
	vector<int> randomNumb = lotto(10, 3);
	copy(randomNumb.begin(), randomNumb.end(), ostream_iterator<int, char>(cout, " "));
	system("pause");
	return 0;
}