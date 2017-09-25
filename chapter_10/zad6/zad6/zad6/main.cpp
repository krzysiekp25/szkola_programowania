#include <iostream>
#include "move.h"

int main()
{
	using std::cin;
	Move jeden(1, 1);
	Move dwa(2, 2);
	Move trzy;
	jeden.showmove();
	dwa.showmove();
	trzy.showmove();
	trzy = jeden.add(dwa);
	trzy.showmove();
	trzy.reset();
	trzy.showmove();
	cin.get();
	return 0;
}