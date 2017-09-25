#include "person.h"

Person::Person(const std::string & ln, const char * fn)
{
	strcpy_s(fname, fn);
	lname = ln;
}

void Person::Show() const
{
	std::cout << fname << " " << lname << std::endl;
}

void Person::FormalShow() const
{
	std::cout << lname << " " << fname << std::endl;
}
