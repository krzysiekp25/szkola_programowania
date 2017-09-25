#pragma once
#include "Person.h"

class PokerPlayer : virtual public Person
{
public:
	PokerPlayer() : Person() {}
	PokerPlayer(string im, string naz) : Person(im, naz) {}
	float Draw();
	virtual void Show();
};