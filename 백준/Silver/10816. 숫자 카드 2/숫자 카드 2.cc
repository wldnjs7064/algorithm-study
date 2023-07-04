#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	vector<int> v;
	vector<int> v2;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int y;
		cin >> y;
		auto l = lower_bound(v.begin(), v.end(), y);
		auto r = upper_bound(v.begin(), v.end(), y);
		cout << r - l << ' ';
	}
	
}