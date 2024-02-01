#include <iostream>
using namespace std;

int a[5][5];
int ans[26];
bool check()
{
	int cnt = 0;
	//가로, 세로 빙고 체크
	for (int i = 0; i < 5; i++)
	{
		int row = 0, col = 0;
		for (int j = 0; j < 5; j++)
		{
			row += a[i][j];
			col += a[j][i];
		}
		if (row == 0) cnt++;
		if (col == 0) cnt++;
	}
	//대각선 빙고 체크
	int d1 = 0, d2 = 0;
	for (int i = 0; i < 5; i++)
	{
		d1 += a[i][i];
		d2 += a[i][4 - i];
	}
	if (d1 == 0) cnt++;
	if (d2 == 0) cnt++;
	
	return (cnt >= 3);
}
int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			cin >> a[i][j];
	}
	for (int i = 0; i < 25; i++)
	{
		cin >> ans[i];
		for (int k = 0; k < 5; k++)
		{
			for (int l = 0; l < 5; l++)
			{
				if (a[k][l] == ans[i])
				{
					a[k][l] = 0;
					break;
				}
			}
		}
		if (check())
		{
			cout << i+1 << "\n";
			break;
		}
	}
}