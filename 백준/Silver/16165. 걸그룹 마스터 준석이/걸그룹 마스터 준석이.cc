#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	map<string, vector<string>> map;
	for (int i = 0; i < n; i++)
	{
		string team;
		cin >> team;
		int num;
		cin >> num;
		vector<string> names;
		string name;
		for (int j = 0; j < num; j++)
		{
			cin >> name;
			names.push_back(name);
		}
		map[team] = names;
	}
	for (int i = 0; i < m; i++)
	{
		string member;
		int state;
		cin >> member >> state;
		if (state == 1)
		{
			for (auto &it : map)
			{
				if (find(it.second.begin(), it.second.end(), member) != it.second.end())
				{
					cout << it.first << "\n";
					break;
				}
			}
		}
		else
		{
			sort(map[member].begin(), map[member].end());
			for (auto &name : map[member])
			{
				cout << name << "\n";
			}
		}
	}
}