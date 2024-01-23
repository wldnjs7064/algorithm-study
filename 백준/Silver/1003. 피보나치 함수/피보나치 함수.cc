#include <iostream>
using namespace std;

int d[40];

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		if (n == 1)
			cout << "0 1" << "\n";
		else if (n == 0)
			cout << "1 0" << "\n";
		else
		{
			d[0] = 0;
			d[1] = 1;
			for (int i = 2; i <= n; i++)
				d[i] = d[i - 1] + d[i - 2];
			cout << d[n - 1] << " " << d[n] << "\n";
		}
		
	}
}