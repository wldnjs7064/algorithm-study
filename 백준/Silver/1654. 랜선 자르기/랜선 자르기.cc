#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int k, n;
	vector<long long> v;
	cin >> k >> n;
	int ans = 0;
	for (int i = 0; i < k; i++)
	{
		long long x;
		cin >> x;
		v.push_back(x);
	}
	long long left = 1;
	long long right = *max_element(v.begin(), v.end());
	long long min = *min_element(v.begin(), v.end());
	while (left <= right)
	{
		long long mid = (right + left) / 2;
		int cnt = 0;
		for (int i = 0; i < k; i++)
			cnt += (v[i] / mid);
		if (cnt < n)
			right = mid - 1;
		else
		{
			ans = mid;
			left = mid + 1;
		}
	}
	cout << ans << "\n";
}