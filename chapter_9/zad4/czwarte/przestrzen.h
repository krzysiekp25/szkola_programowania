namespace SALES
{
    const int QUARTERS = 4;
    struct Sale
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    void setSales(Sale & s, const double ar[], int n);

    void setSales(Sale & s);

    void showSales(const Sale & s);
}
