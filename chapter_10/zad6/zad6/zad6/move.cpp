#include <iostream>
#include "move.h"

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	using std::cout;
	using std::endl;
	cout << "Wartosc x: " << x << endl;
	cout << "Wartosc y: " << y << endl;
}

Move Move::add(const Move & m) const
{
	Move nowy(this->x + m.x, this->y + m.y);
	return nowy;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
