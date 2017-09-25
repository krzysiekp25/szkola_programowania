#include<iostream>

template <typename T>		// template A
void SumArray(T arr[], int n);

template <typename T> 		// template B
void SumArray(T * arr[], int n);

struct debts//
{
	char name[50];
	double amount;
};

int main(void)
{
	using namespace std;
	int things[6] = {13, 31, 103, 301, 310, 130};
	struct debts mr_E[3] =
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe ", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double * pd[3];

// set pointers to the amount members of the structures in the arr mr_E
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;

	cout << "Listing Mr. E's sum of things:\n";
// things is an array of int
	SumArray(things, 6);	// uses template A
	cout << "Listing Mr. E's sum of debts: \n";
// pd is an array of pointers to double
	SumArray(pd, 3); 	// uses template B (more specialized)
	return 0;
}

template <typename T>
void SumArray(T arr[], int n)
{
	using namespace std;
	cout << "template A\n";
	T suma = 0;
	for (int i = 0; i < n; i++)
		suma+=arr[i];
    cout << suma;
	cout << endl;
}

template <typename T>
void SumArray(T * arr[], int n)
{
	using namespace std;
	cout << "template B\n";
	T suma = 0;
	for (int i = 0; i < n; i++)
		suma+=*arr[i];
    cout << suma;
	cout << endl;
}
