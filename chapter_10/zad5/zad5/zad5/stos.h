#pragma once
struct customer
{
	char fullname[35];
	double payment;
};

class Stack
{
private:
	enum { MAX = 4};
	customer items[MAX];
	int top;
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const customer & item);
	bool pop(customer & item);
};