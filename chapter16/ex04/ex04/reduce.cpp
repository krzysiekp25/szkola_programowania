#include "reduce.h"
#include <set>
#include <algorithm>

int reduce(long ar[], int n)
{
	//you can use unique() function instead
	std::set<long> vecSet(ar, ar + n);
	std::copy(vecSet.begin(), vecSet.end(), ar);
	return vecSet.size();
}
