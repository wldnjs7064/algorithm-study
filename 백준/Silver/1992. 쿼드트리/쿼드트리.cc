#include <iostream>
using namespace std;

int n;
int a[65][65];
int visited[65][65];
void dfs(int x, int y, int size)
{
	if (size == 1)
	{
		cout << a[x][y];
		return;
	}
	bool onlyZero = true , onlyOne = true;
	
	for (int i = x; i < x + size; i++)
	{
		for (int j = y; j < y + size; j++)
		{
			if (a[i][j] == 0) onlyOne = false;
			if (a[i][j] == 1) onlyZero = false;
		}
	}
	if (onlyZero == true)
	{
		cout << 0;
		return;
	}
	if (onlyOne == true)
	{
		cout << 1;
		return;
	}
	cout << "(";
	dfs(x, y, size / 2);
	dfs(x, y + size / 2, size / 2);
	dfs(x + size / 2, y, size / 2);
	dfs(x + size / 2, y + size / 2, size / 2);
	cout << ")";
}
int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			scanf("%1d", &a[i][j]);
	}
	dfs(0, 0, n);
}