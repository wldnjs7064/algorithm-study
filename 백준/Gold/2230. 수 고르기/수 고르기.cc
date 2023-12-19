#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	int start = 0;
	int end = 0;
	int ans = 2000000000;
	while (start < n && end < n)
	{
		int result = v[end] - v[start];
		if (result < m)
			end++;
		else
		{
			ans = min(ans, result);
			start++;
		}
	}
	cout << ans;
}