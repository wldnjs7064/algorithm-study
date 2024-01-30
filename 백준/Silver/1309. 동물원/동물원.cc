#include <iostream>
using namespace std;

int d[1000001];
int main()
{
	int n;
	cin >> n;
	d[1] = 3;
	d[2] = 7;
	for (int i = 3; i <= n; i++)
	{
		d[i] = (2 * d[i - 1] + d[i - 2]) % 9901;
	}
	cout << d[n];
}