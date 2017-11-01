#include <set>
#include <string>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	set<string> bolekFriends;
	set<string> lolekFriends;
	string temp;
	cout << "Wprowadz przyjaciol Bolka: (q konczy qprowadzanie):\n";
	while (cin >> temp)
	{
		if (temp == "q")
			break;
		bolekFriends.insert(temp);
	}
	copy(bolekFriends.begin(), bolekFriends.end(), ostream_iterator<string, char>(cout, " "));
	cout << endl;
	cout << "Wprowadz przyjaciol Lolka: (q konczy qprowadzanie):\n";
	while (cin >> temp)
	{
		if (temp == "q")
			break;
		lolekFriends.insert(temp);
	}
	copy(lolekFriends.begin(), lolekFriends.end(), ostream_iterator<string, char>(cout, " "));
	cout << endl;
	
	vector<string> mergedFriends(lolekFriends.size()+bolekFriends.size());//vector for merged sets of data
	merge(bolekFriends.begin(), bolekFriends.end(), lolekFriends.begin(), lolekFriends.end(), mergedFriends.begin());//merging

	set<string> mergedSetFriends;//unique merged data
	//we can use unique() for mergedFriends
	for (int i = 0; i < mergedFriends.size(); i++)
	{
		mergedSetFriends.insert(mergedFriends[i]);
	}
	copy(mergedSetFriends.begin(), mergedSetFriends.end(), ostream_iterator<string, char>(cout, " "));
	cout << endl;

	system("pause");
	return 0;
}