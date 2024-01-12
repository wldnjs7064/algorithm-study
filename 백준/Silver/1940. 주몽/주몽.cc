#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m, cnt = 0;
	cin >> n >> m;
	vector<int> v;
	for (int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (v[i] + v[j] == m)
				cnt++;
		}
	}
	cout << cnt;
}