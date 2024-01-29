#include <iostream>
using namespace std;

int a[100001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		a[i] += a[i - 1];
	}
	while (m--)
	{
		int i, j;
		cin >> i >> j;
		cout << a[j] - a[i - 1] << "\n";
	}
}