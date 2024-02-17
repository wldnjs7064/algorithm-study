#include <iostream>
#include <algorithm>
using namespace std;

int t[16];
int p[16];
int d[16];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t[i];
		cin >> p[i];
	}
	for (int i = 0; i <= n; i++)
	{
		int next = t[i] + i;
		if (next <= n)
		{
			d[next] = max(d[next], p[i] + d[i]);
		}
		d[i + 1] = max(d[i + 1], d[i]);
	}
	
	cout << d[n];
}