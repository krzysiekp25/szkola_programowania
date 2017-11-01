#include <set>
#include <string>
#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<string> bolekFriends;
	vector<string> lolekFriends;
	string temp;
	ifstream bolekf("bolek.dat", ios_base::in);
	ifstream lolekf("lolek.dat", ios_base::in);
	ofstream friendList("bolilol.dat", ios_base::out);

	if (!bolekf.is_open())
	{
		cout << "Blad otwarcia pliku 1.\n";
		system("pause");
		return 0;
	}
	if (!lolekf.is_open())
	{
		cout << "Blad otwarcia pliku 2.\n";
		system("pause");
		return 0;
	}
	if (!friendList.is_open())
	{
		cout << "Blad otwarcia pliku 3.\n";
		system("pause");
		return 0;
	}

	while (getline(bolekf, temp))
	{
		bolekFriends.push_back(temp);
	}

	while (getline(lolekf, temp))
	{
		lolekFriends.push_back(temp);
	}
	sort(bolekFriends.begin(), bolekFriends.end());//merge need sorted sequence
	sort(lolekFriends.begin(), lolekFriends.end());
	vector<string> mergedFriends(lolekFriends.size() + bolekFriends.size());//vector for merged sets of data
	merge(bolekFriends.begin(), bolekFriends.end(), lolekFriends.begin(), lolekFriends.end(), mergedFriends.begin());//merging

	set<string> mergedSetFriends;//unique merged data
								 //we can use unique() for mergedFriends
	for (int i = 0; i < mergedFriends.size(); i++)
	{
		mergedSetFriends.insert(mergedFriends[i]);
	}
	copy(mergedSetFriends.begin(), mergedSetFriends.end(), ostream_iterator<string, char>(friendList, "\n"));
	cout << "Done!" << endl;

	system("pause");
	return 0;
}