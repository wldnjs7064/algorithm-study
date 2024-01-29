#include <iostream>
using namespace std;

int d[31][31];
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < 31; i++)
	{
		d[i][i] = 1;
		d[i][0] = 1;
		for (int j = 1; j <= i; j++)
			d[i][j] = d[i - 1][j - 1] + d[i - 1][j];
	}
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		cout << d[m][n] << "\n";
	}
}