#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int m, n;
	vector<int> v;
	cin >> m >> n;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	int left = 1;
	int right = *max_element(v.begin(), v.end());
	while (left <= right)
	{
		int mid = (right + left) / 2;
		int cnt = 0;
		for (int i = 0; i < n; i++)
			cnt += (v[i] / mid);
		if (cnt < m)
			right = mid - 1;
		else
		{
			ans = mid;
			left = mid + 1;
		}
	}
	cout << ans << "\n";
}