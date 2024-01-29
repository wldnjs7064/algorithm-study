#include <iostream>
using namespace std;

long long int d[101];
int main()
{
	int t;
	cin >> t;
	d[0] = 1;
	d[1] = 1;
	d[2] = 1;
	d[3] = 2;
	d[4] = 2;
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 5; i <= 99; i++)
		{
			d[i] = d[i - 1] + d[i - 5];
		}
		cout << d[n-1] << "\n";
	}
}