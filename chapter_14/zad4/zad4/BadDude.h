#pragma once
#include "PokerPlayer.h"
#include "Gunslinger.h"

class BadDude : public PokerPlayer, public Gunslinger
{
public:
	BadDude() : Person(), PokerPlayer(), Gunslinger() {}
	BadDude(string im, string naz, int sc) : Person(im, naz), PokerPlayer(im, naz), Gunslinger(im, naz, sc) {}
	float Gdraw();
	float Cdraw();
	void Show();
};