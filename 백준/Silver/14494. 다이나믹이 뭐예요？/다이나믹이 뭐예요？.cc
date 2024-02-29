#include <iostream>
using namespace std;

long long d[1001][1001];
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= 1000; i++) {
		d[i][1] = 1;
		d[1][i] = 1;
	}

	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; j <= m; j++)
			d[i][j] = (d[i - 1][j - 1] + d[i - 1][j] + d[i][j - 1]) % 1000000007;
	}
	cout << d[n][m];
}