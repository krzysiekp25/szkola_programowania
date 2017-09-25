#include <iostream>
#include "BadDude.h"

int main()
{
	BadDude kolo("Brzydki", "Pan", 10);
	PokerPlayer pokerzysta("Poker", "Face");
	Gunslinger strzelec("Lucky", "Luck", 100);
	Person czlowiek("Jan", "Kowalski");
	using std::cout;
	//cout << "Pzedstawiam pana: \n";
	//kolo.Show();
	Person * osoby[4];
	osoby[0] = &czlowiek;
	osoby[1] = &pokerzysta;
	osoby[2] = &strzelec;
	osoby[3] = &kolo;

	for (int i = 0; i < 4; i++)
	{
		osoby[i]->Show();
	}
	system("pause");
	return 0;
}