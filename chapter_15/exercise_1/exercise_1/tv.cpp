#include <iostream>
#include "tv.h"

bool Tv::volup()
{
	if (volume < MaxVal)
	{
		volume++;
		return true;
	}
	else
		return false;
}

bool Tv::voldown()
{
	if (volume > MinVal)
	{
		volume--;
		return true;
	}
	else
		return false;
}

void Tv::chanup()
{
	if (channel < maxchannel)
		channel++;
	else
		channel = 1;
}

void Tv::chandown()
{
	if (channel > 1)
		channel--;
	else
		channel = maxchannel;
}

void Tv::settings() const
{
	using std::cout;
	using std::endl;
	cout << "Telewizor jest " << (state == Off ? "Wylaczony" : "Wlaczony") << endl;
	if (state == On)
	{
		cout << "Glosnosc = " << volume << endl;
		cout << "Program = " << channel << endl;
		cout << "Tryb = "
			<< (mode == Antenna ? "antena" : "kabel") << endl;
		cout << "Wejscie = " << (input == TV ? "TV" : "DVD") << endl;
	}
}

void Tv::remote_mode(Remote & r)
{
	if (ison() == true)
	{
		if (r.remote_mode == Remote::Normal)
			r.remote_mode = Remote::Interactive;
		else
			r.remote_mode = Remote::Normal;
	}
}
