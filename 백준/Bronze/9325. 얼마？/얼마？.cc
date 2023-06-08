#include <iostream>
using namespace std;

int main()
{
	int t, s, n, p, q, sum=0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> s;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> q >> p;
			sum += q * p;
		}
		cout << sum+s << "\n";
		sum = 0;
	}
}
