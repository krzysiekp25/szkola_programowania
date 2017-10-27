#pragma once
#pragma warning(disable:4996)
#include <set>
#include <algorithm>
template <class T>
int reduce(T ar[], int n)
{
	//you can use unique() function instead
	std::set<T> vecSet(ar, ar + n);
	std::copy(vecSet.begin(), vecSet.end(), ar);
	return vecSet.size();
}