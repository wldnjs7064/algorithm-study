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
	int result = 0, cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			result += v[j];

			if (result == m)
			{
				cnt++;
				result == 0;
				break;
			}
		}
		if (result != 0) result = 0;
	}
	cout << cnt;
}
