#pragma once

class Cd
{
private:
	char *performers;
	char *label;
	int selections;
	double playtime;
public:
	Cd(char * s1, char * s2, int n, double x);
	Cd(const Cd & d);
	Cd();
	virtual ~Cd();
	void virtual Report() const;
	Cd & operator=(const Cd & d);
};

class Classic : public Cd
{
private:
	char *mainperform;
public:
	Classic(char * mp, char * s1, char * s2, int n, double x);
	Classic(char * mp, const Cd & d);
	Classic(const Classic & d);
	Classic();
	~Classic();
	void Report() const;
	Classic & operator=(const Classic & d);
};