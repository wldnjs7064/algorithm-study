#include <iostream>
using namespace std;

long long int d[100000];
int main()
{
	int n;
	cin >> n;
	d[0] = 0;
	d[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
	}
	cout << d[n];
}