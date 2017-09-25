#include <iostream>

long long silnia(int x);

int main()
{
    using namespace std;
    cout << "Podaj ile silnia policzyc: ";
    int s;
    while(cin>>s)
    {
        cout << s << "! wynosi: " << silnia(s);
        cout << "\nPodaj kolejna liczbe lub q aby zakonczyc: ";
    }
    cout << "Koniec\n";
    return 0;
}

long long silnia(int x)
{
    if(x>0)
        return x*silnia(x-1);
    return 1;
}

