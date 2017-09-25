#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    cout << "Napisz zdanie, podanie litery 'q' i enter konczy wczytywanie: \n\n";
    char znak;
    cin.get(znak);
    bool wyraz=0;
    int samogloska=0;
    int spolgloska=0;
    int inne=0;
    while(znak!='q')
    {
        if(wyraz==0&&!isalpha(znak))
        {
            wyraz=1;
            inne++;
        }
        else if(wyraz==0&&(znak=='a'||znak=='e'||znak=='i'||znak=='o'||znak=='u'||znak=='y'||znak=='A'||znak=='E'||znak=='I'||znak=='O'||znak=='U'||znak=='Y'))
        {
            wyraz=1;
            samogloska++;
        }
        else if(wyraz==0)
        {
            wyraz=1;
            spolgloska++;
        }
        cin.get(znak);
        if(isspace(znak))
        {
            wyraz=0;
            cin.get(znak);
        }
    }
    cout << "\nLiczba spolglosek na poczatku wyrazow: " << spolgloska << endl;
    cout << "Liczba samoglosek na poczatku wyrazow: " << samogloska << endl;
    cout << "Liczba innych znakow na poczatku wyrazow: " << inne << endl;
    return 0;
}
