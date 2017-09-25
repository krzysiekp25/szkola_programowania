#include <array>
#include <iostream>

int main()
{
    using namespace std;
    array<long double, 100> factorials;
    factorials[1] = factorials[0] = (long double) 1;
    for (int i = 2; i<=100; i++)
        factorials[i] = i* factorials[i-1];
    for (int i = 0; i <= 100; i++)
        cout << i << "! = " << factorials[i] << endl;

    cin.get();

    return 0;
}
