#include <iostream>
using namespace std;

int d[2001][2001];
int a[2001];
int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n, m, s, e;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		d[i][i] = 1;
		if (a[i - 1] == a[i])
			d[i - 1][i] = 1;
	}

	for (int i = 2; i <= n - 1; i++)
	{
		for (int j = 1; i + j <= n; j++)
		{
			if (a[j] == a[i + j] && d[j + 1][i + j - 1] == 1)
				d[j][i + j] = 1;
		}
	}
	cin >> m;
	
	for (int i = 0; i < m; i++)
	{
		cin >> s >> e;
		cout << d[s][e] << "\n";
	}
}