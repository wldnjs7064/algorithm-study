#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<string, float> a, pair<string, float> b)
{
	return a.second > b.second;
}

int main()
{
	while (true)
	{
		int n;
		cin >> n;
		if (n == 0)
			break;
		vector<pair<string, float>> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i].first >> v[i].second;
		stable_sort(v.begin(), v.end(), compare);
		for (int i = 0; i < n; i++)
		{
			if (v[i].second==v[0].second)
				cout << v[i].first << " ";
		}
		cout << '\n';
	}
}