#include <iostream>
using namespace std;

int d[81];
int main()
{
	int n;
	cin >> n;
	d[0] = 1;
	d[1] = 1;
	for (int i = 2; i <= 81; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
	}
	long long ans;
	ans = d[n-1] * 2 + d[n] * 2;
	cout << ans;
}