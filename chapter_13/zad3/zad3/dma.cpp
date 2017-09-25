#include "dma.h"
#include <cstring>

DMA::DMA(const char * l, int r)
{
	label = new char[std::strlen(l) + 1];
	std::strcpy(label, l);
	rating = r;
}

DMA::DMA(const DMA & rs)
{
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
}

DMA::~DMA()
{
	delete[] label;
}

DMA & DMA::operator=(const DMA & rs)
{
	if (this == &rs)
		return *this;
	delete[] label;
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
	return *this;
}

void DMA::View()
{
	std::cout << "Etykietka: " << label << std::endl;
	std::cout << "Klasa: " << rating << std::endl;
}

std::ostream & operator<<(std::ostream & os, const DMA & rs)
{
	os << "Etykietka: " << rs.label << std::endl;
	os << "Klasa: " << rs.rating << std::endl;
	return os;
}

std::ostream & operator<<(std::ostream & os, const baseDMA & rs)
{
	os << (const DMA &)rs;
	return os;
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & rs)
{
	os << (const DMA &)rs;
	os << "Kolor: " << rs.color << std::endl;
	return os;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & rs)
{
	os << (const DMA &)rs;
	os << "Styl: " << rs.style << std::endl;
	return os;
}

baseDMA::baseDMA(const char * l, int r)
	: DMA(l, r)
{
}

baseDMA::baseDMA(const DMA & rs)
	: DMA(rs)
{
}

void baseDMA::View()
{
	DMA::View();
}

lacksDMA::lacksDMA(const char * c, const char * l, int r)
	: DMA(l, r)
{
	std::strncpy(color, c, 39);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const char * c, const DMA & rs)
	: DMA(rs)
{
	std::strncpy(color, c, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
}

void lacksDMA::View()
{
	DMA::View();
	std::cout << "Kolor: " << color << std::endl;
}

hasDMA::hasDMA(const char * s, const char * l, int r)
	: DMA(l, r)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const DMA & rs)
	: DMA(rs)
{
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs)
	: DMA(hs)
{
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
	delete[] style;
}

hasDMA & hasDMA::operator=(const hasDMA & rs)
{
	if (this == &rs)
		return *this;
	DMA::operator=(rs);
	delete[] style;
	style = new char[std::strlen(rs.style) + 1];
	std::strcpy(style, rs.style);
	return *this;
}

void hasDMA::View()
{
	DMA::View();
	std::cout << "Styl: " << style << std::endl;
}
