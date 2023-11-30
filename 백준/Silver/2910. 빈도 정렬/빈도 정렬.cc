#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

map<int, int> order;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second) return order[a.first] < order[b.first];
	return a.second > b.second;
}

int main()
{
	map<int, int> m;
	int n, c;
	cin >> n >> c;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		m[x]++;
		if (order[x] == 0) order[x] = i + 1;
	}
	vector<pair<int, int>> v(m.begin(), m.end());
	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i].second; j++)
		{
			cout << v[i].first << " ";
		}
	}

}
