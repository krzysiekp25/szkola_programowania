#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char znak;
    cin.get(znak);
    string zdanie;
    while(znak!='@')
    {
        if(!isdigit(znak))
        {
            if(znak>='a'&&znak<='z')
                toupper(znak);
            else if(znak>='A'&&znak<='Z')
                tolower(znak);
            zdanie+=znak;
        }
        cin.get(znak);
    }
    cout << zdanie;
    return 0;
}
