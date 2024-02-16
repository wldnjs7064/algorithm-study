#include <iostream>
using namespace std;

int d[1001][10];
int main()
{
	int n;
	cin >> n;
	//숫자 0일때 1로 초기화
	for (int i=1;i<=n;i++)
		d[i][0] = 1;
	//n==1일때 1로 초기화
	for (int i = 0; i <= 9; i++)
		d[1][i] = 1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			d[i][j] = (d[i][j - 1] + d[i - 1][j]) % 10007;
		}
	}

	int ans = 0;
	for (int i = 0; i <= 9; i++)
		ans = (ans + d[n][i]) % 10007;
	cout << ans;
}