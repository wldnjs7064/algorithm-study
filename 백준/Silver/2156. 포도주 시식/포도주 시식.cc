#include <iostream>
#include <algorithm>
using namespace std;

int d[10001];
int a[10001];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	d[1] = a[1];
	d[2] = a[1] + a[2];
	d[3] = max(d[2], max(d[1] + a[3], a[2] + a[3]));
	for (int i = 4; i <= n; i++)
	{
		d[i] = max(d[i - 1], max(d[i - 2] + a[i], d[i - 3] + a[i - 1] + a[i]));
	}
	cout << d[n];

}