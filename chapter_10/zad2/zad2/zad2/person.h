#pragma once
#include <iostream>
#include <string>

class Person
{
private:
	static const int LIMIT = 256;
	std::string lname;
	char fname[LIMIT];
public:
	Person() { lname = ""; fname[0] = '\0'; }
	Person(const std::string & ln, const char * fn = "HejTy");

	void Show() const;
	void FormalShow() const;
};