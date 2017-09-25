#include "przestrzen.h"

int main()
{
    using namespace SALES;
    Sale str1;
    Sale str2;
    setSales(str1);
    showSales(str1);
    double tablica[4] =
    {
        9, 23, 5, 4
    };
    setSales(str2,tablica,4);
    showSales(str2);
    return 0;
}
