#include <iostream>
#include "dma.h"

int main()
{
	baseDMA jeden("labelek1", 123);
	lacksDMA dwa("niebieski", "labelek2", 234);
	hasDMA trzy("Stylek", "labelek3", 345);
	DMA *tablica[3];
	tablica[0] = &jeden;
	tablica[1] = &dwa;
	tablica[2] = &trzy;
	tablica[0]->View();
	tablica[1]->View();
	tablica[2]->View();
	trzy = hasDMA("nowy stylek",dwa);
	dwa = lacksDMA("nowy bronz", jeden);
	jeden = dwa;
	tablica[0]->View();
	tablica[1]->View();
	tablica[2]->View();
	system("pause");
	return 0;
}