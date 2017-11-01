#include <iostream>
#include <vector>
#include <ctime>
#include <list>
#include <algorithm>

int main()
{
	int elem = 1000000;
	srand(time(NULL));
	using namespace std;
	
	vector<int> vi0;
	for (int i = 0; i < elem; i++)
	{
		vi0.push_back(rand() % elem);
	}
	
	vector<int> vi(elem);
	clock_t start = clock();
	vi = vi0;
	clock_t end = clock();
	cout << "Kopiowanie do vector: " << (double)(end - start) / CLOCKS_PER_SEC << endl;
	
	list<int> li(elem);
	start = clock();
	copy(vi0.begin(), vi0.end(), li.begin());
	end = clock();
	cout << "Kopiowanie do listy: " << (double)(end - start) / CLOCKS_PER_SEC << endl;

	start = clock();
	sort(vi.begin(), vi.end());
	end = clock();
	cout << "Sortowanie vectora: " << (double)(end - start) / CLOCKS_PER_SEC << endl;

	start = clock();
	li.sort();
	end = clock();
	cout << "Sortowanie listy: " << (double)(end - start) / CLOCKS_PER_SEC << endl;

	copy(vi0.begin(), vi0.end(), li.begin());

	start = clock();
	copy(li.begin(), li.end(), vi.begin());
	end = clock();
	cout << "Przenoszenie listy do vektora: " << (double)(end - start) / CLOCKS_PER_SEC << endl;
	start = clock();
	sort(vi.begin(), vi.end());
	end = clock();
	cout << "Sortowanie vectora: " << (double)(end - start) / CLOCKS_PER_SEC << endl;
	start = clock();
	copy(vi.begin(), vi.end(), li.begin());
	end = clock();
	cout << "Przenoszenie posortowanych danych do listy: " << (double)(end - start) / CLOCKS_PER_SEC << endl;

	system("pause");
	return 0;
}