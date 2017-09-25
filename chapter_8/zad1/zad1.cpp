#include <iostream>

void wypisz(const char* lancuch);
void wypisz(const char* lancuch, int liczba);
int ile;

int main()
{
    char napis[50];
    std::cin >> napis;
    for(int i=0;i<5;i++)
    {
        wypisz(napis);
        ile++;
    }
    std::cout << std::endl;
    wypisz(napis, 1);
}

void wypisz(const char* lancuch)
{
    std::cout << lancuch << std::endl;
}

void wypisz(const char* lancuch, int liczba)
{
    while(ile--!=0&&liczba!=0)
    std::cout << lancuch << std::endl;
}
