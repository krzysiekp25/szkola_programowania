#include "emp.h"
#include <fstream>
using std::cin;
using std::cout;
using std::endl;
abstr_emp::abstr_emp()
	: fname("brak"), lname("brak"), job("brak")
{
}

abstr_emp::abstr_emp(const std::string & fn, const std::string & ln, const std::string & j)
	: fname(fn), lname(ln), job(j)
{
}

void abstr_emp::ShowAll() const
{
	cout << "Imie i nazwisko: " << fname << " " << lname
		<< "\nPraca: " << job << endl;
}

void abstr_emp::SetAll()
{
	cout << "Podaj imie: ";
	cin >> fname;
	cout << "Podaj nazwisko: ";
	cin >> lname;
	cout << "Podaj prace: ";
	cin >> job;
}

abstr_emp::~abstr_emp()
{
}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
	os << e.fname << " " << e.lname << ", " << e.job << endl;
	return os;
}

employee::employee()
	: abstr_emp("brak", "brak", "brak")
{
}

employee::employee(const std::string & fn, const std::string & ln, const std::string & j)
	: abstr_emp(fn, ln, j)
{
}

void employee::ShowAll() const
{
	abstr_emp::ShowAll();
}

void employee::SetAll()
{
	abstr_emp::SetAll();
}

void employee::writeall(std::ofstream & f)
{
	classkind type = Employee;
	f << (int)type;
	f << ' ';
	f << getFname();
	f << ' ';
	f << getLname();
	f << ' ';
	f << getJob();
	f << ' ';
}

void employee::readall(std::ifstream & f)
{
	std::string fn;
	std::string ln;
	std::string j;
	f >> fn;
	f >> ln;
	f >> j;
	setFname(fn);
	setLname(ln);
	setJob(j);
}

manager::manager()
	: abstr_emp("brak", "brak", "brak"), inchargeof(0)
{
}

manager::manager(const std::string & fn, const std::string & ln, const std::string & j, int ico)
	: abstr_emp(fn, ln, j), inchargeof(ico)
{
}

manager::manager(const abstr_emp & e, int ico)
	: abstr_emp(e), inchargeof(ico)
{
}

manager::manager(const manager & m)
	: abstr_emp(m), inchargeof(m.inchargeof)
{
}

void manager::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "Posiada pracownikow: " << inchargeof << endl;
}

void manager::SetAll()
{
	abstr_emp::SetAll();
	cout << "Podaj ilosc posiadanych pracownikow: ";
	cin >> inchargeof;
}

void manager::writeall(std::ofstream & f)
{
	classkind type = Manager;
	f << (int)type;
	f << ' ';
	f << getFname();
	f << ' ';
	f << getLname();
	f << ' ';
	f << getJob();
	f << ' ';
	f << InChargeOf();
	f << ' ';
}

void manager::readall(std::ifstream & f)
{
	std::string fn;
	std::string ln;
	std::string j;
	f >> fn;
	f >> ln;
	f >> j;
	f >> InChargeOf();
	setFname(fn);
	setLname(ln);
	setJob(j);
}

fink::fink()
	: abstr_emp("brak", "brak", "brak"), reportsto("brak")
{
}

fink::fink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo)
	: abstr_emp(fn, ln, j), reportsto(rpo)
{
}

fink::fink(const abstr_emp & e, const std::string & rpo)
	: abstr_emp(e), reportsto(rpo)
{
}

fink::fink(const fink & e)
	: abstr_emp(e), reportsto(e.reportsto)
{
}

void fink::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "Do kogo przesylamy raport: " << reportsto << endl;
}

void fink::SetAll()
{
	abstr_emp::SetAll();
	cout << "Do kogo przesylac raport: ";
	cin >> reportsto;
}

void fink::writeall(std::ofstream & f)
{
	classkind type = Fink;
	f << (int)type;
	f << ' ';
	f << getFname();
	f << ' ';
	f << getLname();
	f << ' ';
	f << getJob();
	f << ' ';
	f << ReportsTo();
	f << ' ';
}

void fink::readall(std::ifstream & f)
{
	std::string fn;
	std::string ln;
	std::string j;
	f >> fn;
	f >> ln;
	f >> j;
	f >> ReportsTo();
	setFname(fn);
	setLname(ln);
	setJob(j);
}

highfink::highfink()
	: abstr_emp("brak", "brak", "brak"), manager("brak", "brak", "brak", 0), fink("brak", "brak", "brak", "brak")
{
}

highfink::highfink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo, int ico)
	: abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo)
{
}

highfink::highfink(const abstr_emp & e, const std::string & rpo, int ico)
	: abstr_emp(e), manager(e, ico), fink(e, rpo)
{
}

highfink::highfink(const fink & f, int ico)
	: abstr_emp(f), fink(f), manager((const abstr_emp &)f, ico)
{
}

highfink::highfink(const manager & m, const std::string & rpo)
	: abstr_emp(m), manager(m), fink((const abstr_emp &)m, rpo)
{
}

highfink::highfink(const highfink & h)
	: abstr_emp(h), manager((const abstr_emp &)h, h.InChargeOf()), fink((const abstr_emp &)h, h.ReportsTo())
{
}

void highfink::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "Posiada pracownikow: " << InChargeOf() << endl;
	cout << "Do kogo przesylamy raport: " << ReportsTo() << endl;
}

void highfink::SetAll()
{
	abstr_emp::SetAll();
	cout << "Podaj ilosc posiadanych pracownikow: ";
	cin >> InChargeOf();
	cout << "Do kogo przesylac raport: ";
	cin >> ReportsTo();
}

void highfink::writeall(std::ofstream & f)
{
	classkind type = Highfink;
	f << (int)type;
	f << ' ';
	f << getFname();
	f << ' ';
	f << getLname();
	f << ' ';
	f << getJob();
	f << ' ';
	f << InChargeOf();
	f << ' ';
	f << ReportsTo();
	f << ' ';
}

void highfink::readall(std::ifstream & f)
{
	std::string fn;
	std::string ln;
	std::string j;
	f >> fn;
	f >> ln;
	f >> j;
	f >> InChargeOf();
	f >> ReportsTo();
	setFname(fn);
	setLname(ln);
	setJob(j);
}
