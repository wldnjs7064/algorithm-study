#include <iostream>
#include <algorithm>
using namespace std;

int d[1001][3];
int a[1001][3];
int main()
{
	int n;
	cin >> n;
	int ans = 99999999;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < 3; j++)
			cin >> a[i][j];
	}
	d[1][0] = a[1][0];
	d[1][1] = d[1][2] = 99999999;
	for (int i = 2; i <= n; i++)
	{
		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + a[i][0];
		d[i][1] = min(d[i - 1][2], d[i - 1][0]) + a[i][1];
		d[i][2] = min(d[i - 1][1], d[i - 1][0]) + a[i][2];
	}
	ans = min(ans, min(d[n][1], d[n][2]));
	d[1][1] = a[1][1];
	d[1][0] = d[1][2] = 99999999;
	for (int i = 2;i <= n; i++)
	{
		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + a[i][0];
		d[i][1] = min(d[i - 1][2], d[i - 1][0]) + a[i][1];
		d[i][2] = min(d[i - 1][1], d[i - 1][0]) + a[i][2];
	}
	ans = min(ans, min(d[n][0], d[n][2]));
	d[1][2] = a[1][2];
	d[1][1] = d[1][0] = 99999999;
	for (int i = 2; i <= n; i++)
	{
		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + a[i][0];
		d[i][1] = min(d[i - 1][2], d[i - 1][0]) + a[i][1];
		d[i][2] = min(d[i - 1][1], d[i - 1][0]) + a[i][2];
	}
	ans = min(ans, min(d[n][1], d[n][0]));

	cout << ans;
}