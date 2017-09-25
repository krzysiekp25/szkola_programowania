#include <iostream>
#include <string>
using namespace std;

const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * st);
void display3(const student pa[], int n);

int main()
{
    cout << "Podaj wielkosc grupy: ";
    int class_size;
    cin >> class_size;
    while(cin.get()!='\n')
        continue;
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for(int i=0;i<entered;i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "\nGotowe\n";
    return 0;
}

int getinfo(student pa[], int n)
{
    int i=0;
    while(i<n)
    {
        cout << "Student nr " << i+1 << endl;
        cout << "Imie i nazwisko: ";
        cin.getline(pa[i].fullname, SLEN);
        cout << "Hobby: ";
        cin.getline(pa[i].hobby, SLEN);
        cout << "Poziom programowania: ";
        cin>>pa[i].ooplevel;
        if(!cin)
        {
            cin.clear();
            while(cin.get()!='\n')
                continue;
            break;
        }
        while(cin.get()!='\n')
            continue;
        i++;
    }
    return i;
}

void display1(student st)
{
    cout << "\nImie i nazwisko: " << st.fullname << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "Poziom: " << st.ooplevel << endl;
}

void display2(const student *st)
{
    cout << "\nImie i nazwisko: " << st->fullname << endl;
    cout << "Hobby: " << st->hobby << endl;
    cout << "Poziom: " << st->ooplevel << endl;
}

void display3(const student pa[], int n)
{

    for(int i=0;i<n;i++)
    {
        cout << "\nImie i nazwisko: " << pa[i].fullname << endl;
        cout << "Hobby: " << pa[i].hobby << endl;
        cout << "Poziom: " << pa[i].ooplevel << endl;
    }
}
