#include <iostream>
#include "BadDude.h"

using std::cout;

float BadDude::Gdraw()
{
	return Gunslinger::Draw();
}

float BadDude::Cdraw()
{
	return PokerPlayer::Draw();
}

void BadDude::Show()
{
	Gunslinger::Show();
	cout << "Moja karta ma numer: " << Cdraw() << '\n';
}
