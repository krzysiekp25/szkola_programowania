#include <iostream>
#include <cctype>

void duze_litery(std::string & obiekt);

int main()
{
    using namespace std;
    string napis;
    cout << "Podaj lancuch (q, aby skonczyc): ";
    while(getline(cin,napis))
    {
        if(napis.size()==1)
            if(napis[0]=='q')
                {
                    cout << "Koniec!";
                    break;
                }
        duze_litery(napis);
        cout << napis << endl;
        cout << "Nastepny lancuch (q, aby skonczyc): ";
    }
    return 0;
}
void duze_litery(std::string & obiekt)
{
    int wielkosc = obiekt.size();
    for(int i=0;i<wielkosc;i++)
        obiekt[i] = toupper(obiekt[i]);
}

