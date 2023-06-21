#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, k, x, cnt = 0;
	vector<int> v;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		v.push_back(x);
	}
	sort(v.rbegin(), v.rend());
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] <= k)
		{
			cnt += k / v[i];
			k %= v[i];
		}
	}
	cout << cnt;
}