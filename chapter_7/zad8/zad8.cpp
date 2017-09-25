#include <iostream>
#include <string>
const int Pory_roku = 4;
const char pory[4][7] = {"Wiosna", "Lato", "Jesien", "Zima"};

void wypelnij(double tab[]);
void poka(const double tab[]);

int main()
{
    double wydatki[Pory_roku];
    wypelnij(wydatki);
    poka(wydatki);
    return 0;
}

void wypelnij(double tab[])
{
    using namespace std;
    for(int i=0;i<Pory_roku;i++)
    {
        cout << "Podaj wydatki za okres " << pory[i] << ": ";
        cin >> tab[i];
    }
}

void poka(const double tab[])
{
    using namespace std;
    double razem = 0.0;
    cout << "\nWYDATKI\n";
    for(int i=0;i<Pory_roku;i++)
    {
        cout << pory[i] << ": " << tab[i] << " zl" << endl;
        razem+=tab[i];
    }
    cout << "Laczne wydatki roczne: " << razem << " zl" << endl;
}
