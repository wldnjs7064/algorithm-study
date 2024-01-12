#include <iostream>
#include <string>
#include <map>
using namespace std;

string pokemon[1000000];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	map<string, int> mp;
	for (int i = 1; i <= n; i++)
	{
		cin >> pokemon[i];
		mp.insert(make_pair(pokemon[i], i));
	}
	for (int i = 0; i < m; i++)
	{
		string pro;
		cin >> pro;
		if (pro[0] >= '0'&&pro[0] <= '9')
		{
			int num = stoi(pro);
			cout << pokemon[num] << "\n";
		}
		else
		{
			auto it = mp.find(pro);
			cout << it->second << "\n";
		}
	}
	return 0;
}