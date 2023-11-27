#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	int m;
	cin >> m;
	
	sort(v.begin(), v.end());
	int start = 0;
	int result;
	int end = v[n - 1];
	while (start <= end)
	{
		int sum = 0;
		int mid = (start + end) / 2;
		for (int i = 0; i < n; i++)
			sum += min(v[i], mid);
		if (m >= sum)
		{
			result = mid;
			start = mid + 1;
		}
		else
			end = mid - 1;
	}
	cout << result;
}