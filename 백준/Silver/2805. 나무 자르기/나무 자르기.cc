#include <iostream>
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
	int start = 0;
	int end = 1e9;
	int result = 0;
	while (start <= end)
	{
		long long int total = 0;
		int mid = (start + end) / 2;
		for (int i = 0; i < n; i++)
			if (v[i] > mid) total += v[i] - mid;
		if (total < m)
			end = mid - 1;
		else
		{
			result = mid;
			start = mid + 1;
		}
	}
	cout << result << "\n";
}