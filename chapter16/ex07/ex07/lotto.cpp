#include "lotto.h"
#include <algorithm>
#include <ctime>

std::vector<int> lotto(int maxNumb, int numbOfNumb)
{
	std::vector<int> numbers;
	for (int i = 1; i <= maxNumb; i++)
	{
		numbers.push_back(i);
	}
	srand(time(NULL));
	std::random_shuffle(numbers.begin(), numbers.end());
	std::vector<int> retVec(numbers.begin(), numbers.begin() + numbOfNumb);
	return retVec;
}
