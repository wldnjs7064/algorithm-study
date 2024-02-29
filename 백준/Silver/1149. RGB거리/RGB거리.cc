#include <iostream>
#include <algorithm>
using namespace std;

int d[1001][3];
int main()
{
	int a[3];
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[0] >> a[1] >> a[2];
		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + a[0];
		d[i][1] = min(d[i - 1][0], d[i - 1][2]) + a[1];
		d[i][2] = min(d[i - 1][0], d[i - 1][1]) + a[2];
	}
	cout << min(d[n][0], min(d[n][1], d[n][2]));
}