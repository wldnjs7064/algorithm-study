#include <iostream>
using namespace std;

long long int d[1000001];
int main()
{
	int n;
	cin >> n;
	if (n < 0)
	{
		if (n % 2 == 0)
			cout << -1 << "\n";
		else
			cout << 1 << "\n";
		n = abs(n);
	}
	else if (n == 0)
		cout << 0 << "\n";
	else
		cout << 1 << "\n";
	d[0] = 0;
	d[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		d[i] = (d[i - 1] + d[i - 2]) % 1000000000;
	}
	cout << d[n];
}