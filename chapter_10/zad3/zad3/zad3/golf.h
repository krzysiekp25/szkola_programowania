#pragma once
const int Len = 40;
class Golf
{
private:
	char fullname[Len];
	int handcap;
public:
	Golf(const char * name, int hc);
	Golf();
	void handicap(int hc);
	void show();

};