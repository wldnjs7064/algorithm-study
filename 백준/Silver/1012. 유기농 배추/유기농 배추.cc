#include <iostream>
#include <cstring>
using namespace std;

int n, m, k, x, y;
int a[50][50];
bool visited[50][50];
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };

void dfs(int y, int x)
{
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || nx < 0 || nx >= m || ny >= n) continue;
		if (!visited[ny][nx] && a[ny][nx] == 1) dfs(ny, nx);
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int ret = 0;
		cin >> m >> n >> k;
		memset(a, 0, sizeof(a));
		memset(visited, 0, sizeof(visited));
		for (int i = 0; i < k; i++)
		{
			cin >> x >> y;
			a[y][x] = 1;
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (!visited[i][j] && a[i][j] == 1)
				{
					dfs(i, j);
					ret++;
				}
			}
		}
		cout << ret << "\n";
	}
}