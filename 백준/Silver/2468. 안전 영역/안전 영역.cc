#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int n, ret = 0;
int a[104][104];
bool visited[104][104];
int dy[] = { -1, 0, 1, 0 };
int dx[] = { 0, 1, 0, -1 };

void dfs(int y, int x, int d)
{
	visited[y][x] = true;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 && ny >= n && nx < 0 && nx >= n) continue;
		if (!visited[ny][nx] && a[ny][nx] > d)
		{
			dfs(ny, nx, d);
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}

	for (int d = 0; d <= 100; d++)
	{
		int cnt = 0;
		memset(visited, false, sizeof(visited));
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (!visited[i][j] && a[i][j] > d)
				{
					dfs(i, j, d);
					cnt++;
				}
			}
		}
		ret = max(ret, cnt);
	}
	cout << ret << "\n";
	return 0;
}
