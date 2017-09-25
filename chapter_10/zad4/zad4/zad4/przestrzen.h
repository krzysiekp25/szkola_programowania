#pragma once
namespace SALES
{
	const int QUARTERS = 4;
	class Sale
	{
	private:
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	public:
		Sale(const double ar[], int n);
		Sale();
		void showSales() const;
	};
}