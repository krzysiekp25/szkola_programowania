#pragma once

#include <string>

class Worker
{
private:
	std::string fullname;
	long id;
protected:
	virtual void Data() const;
	virtual void Get();
public:
	Worker() : fullname("brak"), id(0L) {}
	Worker(const std::string & s, long n)
		: fullname(s), id(n) {}
	virtual ~Worker();
	virtual void Set();
	virtual void Show() const;
};