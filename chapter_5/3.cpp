#include <iostream>

int main()
{
    using namespace std;
    cout << "Prosze podac liczbe:" << endl;
    int a = 0, b;
    for (a; b!=0; a=a+b)
    {
        cin >> b;
        cout << a << " + " << b << " = " << a+b << endl;
    }

    cin.get();

    return 0;
}
