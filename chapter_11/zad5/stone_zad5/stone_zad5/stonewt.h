#pragma once
// stonewt.h -- definition for the Stonewt class
class Stonewt
{
public:
	enum Mode { KAMIENIE, FUNTY_INT, FUNTY_DOUBLE};
private:
	enum { Lbs_per_stn = 14 }; // pounds per stone
	int stone; // whole stones
	double pds_left; // fractional pounds
	double pounds; // entire weight in pounds
	Mode mode;
public:
	Stonewt(double lbs, Mode mode = KAMIENIE); // constructor for double pounds
	Stonewt(int stn, double lbs, Mode mode = KAMIENIE); // constructor for stone, lbs
	Stonewt(); // default constructor
	~Stonewt();
	void stone_mode();
	void pound_int_mode();
	void pound_double_mode();
	Stonewt operator+(Stonewt & wt) const;
	Stonewt operator-(Stonewt & wt) const;
	Stonewt operator*(double & n) const;
	friend std::ostream & operator<<(std::ostream & os, Stonewt & n1);
	friend Stonewt operator*(double & n, Stonewt & wt) { return wt*n; };
};