#include <iostream>
#include "przestrzen.h"

using namespace SALES;
void SALES::setSales(Sale & s, const double ar[], int n)
{
    s.average=0;
    s.max = ar[0];
    s.min = ar[0];
    for(int i=0;i<n;i++)
    {
        s.sales[i] = ar[i];
        s.average+=ar[i];
        if(s.max<s.sales[i])
            s.max = s.sales[i];
        if(s.min > s.sales[i])
            s.min = s.sales[i];
    }
    s.average/=n;
}

void SALES::setSales(Sale & s)
{
    using std::cout;
    using std::cin;
    cout << "Podawaj kolejne elementy po spacji w ilosci 4:\n";
    for(int i=0;i<4;i++)
    {
        cin >> s.sales[i];
    }
    s.average=s.sales[0];
    s.max = s.sales[0];
    s.min = s.sales[0];
    for(int i=1;i<4;i++)
    {
        s.average+=s.sales[i];
        if(s.max<s.sales[i])
            s.max = s.sales[i];
        if(s.min > s.sales[i])
            s.min = s.sales[i];
    }
    s.average/=4;
}

void SALES::showSales(const Sale & s)
{
    using std::cout;
    cout << "Srednia: " << s.average << "\n";
    cout << "Min: " << s.min << "\n";
    cout << "Max: " << s.max << "\n";
}

