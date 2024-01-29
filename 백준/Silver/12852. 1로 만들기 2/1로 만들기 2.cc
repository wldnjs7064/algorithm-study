#include <iostream>
#include <algorithm>
using namespace std;

int d[1000001];
int main()
{
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		d[i] = d[i - 1] + 1;
		if (i % 2 == 0)
		{
			d[i] = min(d[i], d[i / 2] + 1);
		}
		if (i % 3 == 0)
		{
			d[i] = min(d[i], d[i / 3] + 1);
		}
	}
	cout << d[n] << "\n";
	while (n != 1)
	{
		cout << n << " ";
		if (d[n - 1] == d[n] - 1)
			n--;
		else if (n % 2 == 0 && d[n / 2] == d[n] - 1)
			n /= 2;
		else if (n % 3 == 0 && d[n / 3] == d[n] - 1)
			n /= 3;
	}
	cout << "1\n";
}