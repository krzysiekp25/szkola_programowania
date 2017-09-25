#include <iostream>

int main()
{
    using namespace std;

    float Dafne[100];
    float Cleo[100];
    Dafne[0] = 100;
    Cleo[0] = 100;

    int i;
    i=1;
    do{
        Dafne[i] = Dafne[i-1] + Dafne[0] * 0.1;
        Cleo[i] = Cleo[i-1] + Cleo[i-1] * 0.05;
        i++;
    }while(Cleo[i-1] <= Dafne[i-1]);

    i=0;
    do
    {
        cout << "Rok " << i+1 << endl;
        cout << "Dafne: " << Dafne[i] << endl
        << "Cleo: " << Cleo[i] << endl << endl;
        i++;
    }while(Cleo[i] <= Dafne[i]);

    cout << "\nKoniec! Udalo sie po " << i+1 << " latach!\n\n\n";
    cout << "Dafne: " << Dafne[i] << endl
    << "Cleo: " << Cleo[i] << endl << endl;
    cin.get();

    return 0;
}
