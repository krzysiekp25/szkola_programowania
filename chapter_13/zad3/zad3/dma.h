#pragma once
#include <iostream>

class DMA
{
private:
	char * label;
	int rating;
public:
	DMA(const char * l = "brak", int r = 0);
	DMA(const DMA & rs);
	virtual ~DMA();
	DMA & operator=(const DMA & rs);
	virtual void View();
	friend std::ostream & operator<<(std::ostream & os, const DMA & rs);
};

class baseDMA : public DMA
{
public:
	baseDMA(const char * l = "brak", int r = 0);
	baseDMA(const DMA & rs);
	void View();
	friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};

class lacksDMA : public DMA
{
private:
	enum { COL_LEN = 40 };
	char color[COL_LEN];
public:
	lacksDMA(const char * c = "brak", const char * l = "brak", int r = 0);
	lacksDMA(const char * c, const DMA & rs);
	void View();
	friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
};

class hasDMA : public DMA
{
private:
	char * style;
public:
	hasDMA(const char * s = "brak", const char * l = "brak", int r = 0);
	hasDMA(const char * s, const DMA & rs);
	hasDMA(const hasDMA & hs);
	~hasDMA();
	hasDMA & operator=(const hasDMA & rs);
	void View();
	friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
};
