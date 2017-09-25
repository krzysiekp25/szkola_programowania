#include <iostream>
#include <new>
#include <cstring>

struct chaff
{
    char dross[20];
    int slag;
};

chaff buffer[2];

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    chaff *str1;
    str1 = new (buffer) chaff[2];
    for(int i=0;i<2;i++)
    {
        char tekst[20];
        cout << "Podaj nazwe " << i+1 << " struktury: ";
        cin.getline(tekst,20);
        strcpy(str1[i].dross,tekst);
        cout << "Podaj liczbe " << i+1 << " struktury: ";
        cin >> str1[i].slag;
        cin.get();
    }

    for(int i=0;i<2;i++)
    {
        cout << "nazwa " << i+1 << " struktury: ";
        cout << str1[i].dross;
        cout << "\nliczba " << i+1 << " struktury: ";
        cout << str1[i].slag;
        cout << endl;
    }
    //Tutaj jeszcze dymamiczne stworzenie bufora a nastepnie za pomoca miejscowego new doczepieie sie do niego, ale to w sumie to samo i mi sie nie chce
    return 0;
}
