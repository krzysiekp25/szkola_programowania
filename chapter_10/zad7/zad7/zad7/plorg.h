#pragma once
class Plorg
{
private:
	char imie[19];
	int sytosc;
public:
	Plorg(char *im = "Plorga", int s = 50);
	void syty(int s);
	void show();
};