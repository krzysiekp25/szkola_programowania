#include <iostream>

void strcount(const std::string & str);

int main()
{
    using namespace std;
    string input;

    cout << "Wprowadz wiersz:\n";
    getline(cin, input);
    while(cin)
    {
        strcount(input);
        cout << "Wprowadz nastepny wiersz (pusty wiersz konczy):\n";
        getline(cin, input);
        if(input == "") break;
    }
    cout << "Koniec\n";
    return 0;
}

void strcount(const std::string & str)
{
    using namespace std;
    static int total = 0;

    cout << "\"" << str << "\" zawiera ";
    total=+str.size();
    cout << str.size() << " znakow\n";
    cout << "Lacznie " << total << " znakow\n";

}
