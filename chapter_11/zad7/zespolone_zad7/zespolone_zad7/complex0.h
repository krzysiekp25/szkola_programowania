#pragma once

class Complex0
{
private:
	double x;
	double y;
public:
	Complex0(double i, double j);
	Complex0();
	Complex0 operator+(const Complex0 & cp) const;
	Complex0 operator-(const Complex0 & cp) const;
	Complex0 operator*(const Complex0 & cp)const;
	Complex0 operator*(const double & n) const;
	Complex0 operator~() const;
	friend std::istream & operator >> (std::istream & is, Complex0 & n1);
	friend std::ostream & operator << (std::ostream & os, const Complex0 & n1);
	friend Complex0 operator*(const double & n, const Complex0 & cp) { return cp*n; };
};