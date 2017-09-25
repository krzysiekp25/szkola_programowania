#include <iostream>

const int Pory_roku = 4;
const char pory[4][7] = {"Wiosna", "Lato", "Jesien", "Zima"};

struct tablica_wydatkow
{
    double wydatki[Pory_roku];
};

void wypelnij(tablica_wydatkow * tablica);
void poka(const tablica_wydatkow tablica);

int main()
{
    tablica_wydatkow wydatki;
    wypelnij(&wydatki);
    poka(wydatki);
    return 0;
}

void wypelnij(tablica_wydatkow * tablica)
{
    using namespace std;
    for(int i=0;i<Pory_roku;i++)
    {
        cout << "Podaj wydatki za okres " << pory[i] << ": ";
        cin >> tablica->wydatki[i];
    }
}

void poka(tablica_wydatkow tablica)
{
    using namespace std;
    double razem = 0.0;
    cout << "\nWYDATKI\n";
    for(int i=0;i<Pory_roku;i++)
    {
        cout << pory[i] << ": " << tablica.wydatki[i] << " zl" << endl;
        razem+=tablica.wydatki[i];
    }
    cout << "Laczne wydatki roczne: " << razem << " zl" << endl;
}
