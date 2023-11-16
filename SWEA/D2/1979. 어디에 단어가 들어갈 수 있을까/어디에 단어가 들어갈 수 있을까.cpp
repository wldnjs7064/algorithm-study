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
		int n, k, cnt = 0, garo = 0, sero = 0;
		cin >> n >> k;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				cin >> a[i][j];
		}
		for (int i = 0; i < n; i++) //가로 찾기
		{
			int garo = 0;
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] == 1)
				{
					garo++;
					if (garo > k)
						garo = 0;
					if (j==n-1&&garo == k)
						cnt++;
				}
				else
				{
					if (garo == k)
						cnt++;
					garo = 0;
				}
			}
		}

		for (int i = 0; i < n; i++) //세로 찾기
		{
			int sero = 0;
			for (int j = 0; j < n; j++)
			{
				if (a[j][i] == 1)
				{
					sero++;
					if (sero > k)
						sero = 0;
					if (j == n - 1 && sero == k)
						cnt++;
				}
				else
				{
					if (sero == k)
						cnt++;
					sero = 0;
				}
			}
		}
		cout << "#" << test_case + 1 << " " << cnt << "\n";
	}
}