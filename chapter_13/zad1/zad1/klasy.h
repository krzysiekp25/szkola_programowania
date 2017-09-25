#pragma once

class Cd
{
private:
	char performers[50];
	char label[20];
	int selections;
	double playtime;
public:
	Cd(char * s1, char * s2, int n, double x);
	//Cd(const Cd & d);
	Cd();
	virtual ~Cd();
	void virtual Report() const;
	//Cd & operator=(const Cd & d);
};

class Classic : public Cd
{
private:
	char mainperform[60];
public:
	Classic(char * mp, char * s1, char * s2, int n, double x);
	//Classic(char * mp, const Cd & d);
	Classic();
	~Classic();
	void Report() const;
	//Classic & operator=(const Classic & d);
};