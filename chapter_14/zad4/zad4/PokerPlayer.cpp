#include <ctime>
#include <cstdlib>
#include <iostream>
#include "PokerPlayer.h"

float PokerPlayer::Draw()
{
	srand(time(NULL));
	float pom = ((rand() % 51) +1);
	return pom;
}

void PokerPlayer::Show()
{
	Person::Show();
}
