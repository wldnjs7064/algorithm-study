#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		map<string, int> mp;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			string name, sort;
			cin >> name >> sort;
			if (mp.find(sort) == mp.end())
				mp.insert(make_pair(sort, 1));
			else
				mp[sort]++;
		}
		int ans = 1;
		for (auto i : mp)
		{
			ans *= (i.second + 1);
		}
		ans--;
		cout << ans << "\n";
	}
	return 0;
}