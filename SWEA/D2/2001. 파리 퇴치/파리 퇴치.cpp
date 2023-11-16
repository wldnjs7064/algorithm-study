#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int a[15][15];
	for (int test_case = 0; test_case < t; test_case++)
	{
		int n, m, ans = 0;
		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				cin >> a[i][j];

		}
		for (int si = 0; si < n-m+1; si++)
		{
			for (int sj = 0; sj < n - m + 1; sj++)
			{
				int sum = 0;
				for (int i = si; i < si + m; i++)
				{
					for (int j = sj; j < sj + m; j++)
						sum += a[i][j];
				}
				if (ans < sum)
					ans = sum;
			}
		}
		cout << "#" << test_case + 1 <<" "<< ans << "\n";
	}
}