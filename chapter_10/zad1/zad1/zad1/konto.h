#pragma once

class Konto 
{
private:
	std::string nazwisko;
	int numer_rachunku;
	double saldo;
public:
	Konto(std::string s = "brak danych", int r = 000000000, double sld = 0.0);
	~Konto();
	void show();
	void deposit(double depo);
	double withdraw(double with);
};