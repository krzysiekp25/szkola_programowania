#include <iostream>
#include <fstream>
#include <vector>
#include <memory>
#include <algorithm>
#include <functional>
#include "emp.h"

//mozna zmniejszyc kod alokujac w switchu jedynie odpowiedni wskaznik i pozniej uzyc funkcji witualnej do odczytu z pliku :d
using namespace std;

int main(void)
{
	vector<unique_ptr<abstr_emp> > emp;
	ifstream wejscie("plik.txt", ios_base::in);
	classkind type;
	int tmp;
	unique_ptr<abstr_emp> ptr;
	while (wejscie >> tmp)
	{
		type = (classkind)tmp;
		switch (type)
		{
		case classkind::Employee:
			ptr = unique_ptr<abstr_emp>(new employee);
			ptr->readall(wejscie);
			emp.push_back(move(ptr));
			break;
		case classkind::Manager:
			ptr = unique_ptr<abstr_emp>(new manager);
			ptr->readall(wejscie);
			emp.push_back(move(ptr));
			break;
		case classkind::Fink:
			ptr = unique_ptr<abstr_emp>(new fink);
			ptr->readall(wejscie);
			emp.push_back(move(ptr));
			break;
		case classkind::Highfink:
			ptr = unique_ptr<abstr_emp>(new highfink);
			ptr->readall(wejscie);
			emp.push_back(move(ptr));
			break;
		default:
			break;
		}
	}
	wejscie.close();

	if (emp.size() > 0)
		cout << "Aktualna lista pracownikow:\n\n";
	for (vector<unique_ptr<abstr_emp> >::iterator it = emp.begin(); it != emp.end(); it++)
	{
		it->get()->ShowAll();
		cout << endl;
	}
	emp.clear();

	cout << "Wprowadz nowych pracownikow:\n1 - employee\n2 - manager\n3 - fink\n4 - highfink\nq - zakoncz\n";
	char ch;
	cin.get(ch);
	ofstream wyjscie("plik.txt", ios_base::out | ios_base::app);
	switch (ch)
	{
	case '1':
		ptr = unique_ptr<abstr_emp>(new employee);
		ptr->SetAll();
		ptr->writeall(wyjscie);
		ptr.reset();
		break;
	case '2':
		ptr = unique_ptr<abstr_emp>(new manager);
		ptr->SetAll();
		ptr->writeall(wyjscie);
		ptr.reset();
		break;
	case '3':
		ptr = unique_ptr<abstr_emp>(new fink);
		ptr->SetAll();
		ptr->writeall(wyjscie);
		ptr.reset();
		break;
	case '4':
		ptr = unique_ptr<abstr_emp>(new highfink);
		ptr->SetAll();
		ptr->writeall(wyjscie);
		ptr.reset();
		break;
	default:
		break;
	}
	wyjscie.close();

	wejscie.open("plik.txt", ios_base::in);
	while (wejscie >> tmp)
	{
		type = (classkind)tmp;
		switch (type)
		{
		case classkind::Employee:
			ptr = unique_ptr<abstr_emp>(new employee);
			ptr->readall(wejscie);
			emp.push_back(move(ptr));
			break;
		case classkind::Manager:
			ptr = unique_ptr<abstr_emp>(new manager);
			ptr->readall(wejscie);
			emp.push_back(move(ptr));
			break;
		case classkind::Fink:
			ptr = unique_ptr<abstr_emp>(new fink);
			ptr->readall(wejscie);
			emp.push_back(move(ptr));
			break;
		case classkind::Highfink:
			ptr = unique_ptr<abstr_emp>(new highfink);
			ptr->readall(wejscie);
			emp.push_back(move(ptr));
			break;
		default:
			break;
		}
	}
	cout << endl;
	wejscie.close();

	if (emp.size() > 0)
		cout << "Aktualna lista pracownikow:\n\n";
	for (vector<unique_ptr<abstr_emp> >::iterator it = emp.begin(); it != emp.end(); it++)
	{
		it->get()->ShowAll();
		cout << endl;
	}
	emp.clear();

	system("pause");
	return 0;
}