#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	map<string,string,greater<string>> person;
	for (int i = 0; i < n; i++)
	{
		string name, state;
		cin >> name >> state;
		if (state == "enter")
			person.insert(make_pair(name, state));
		else
			person.erase(name);
	}
	for (auto it : person)
		cout << it.first << "\n";
}