#include <iostream>
#include <cstring>
using namespace std;

int t, m, n, k, x, y, nx, ny;
int a[50][50];
bool visited[50][50];
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };
void dfs(int y, int x)
{
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++)
	{
		ny = y + dy[i];
		nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
		if (a[ny][nx] == 1 && !visited[ny][nx])
		{
			dfs(ny, nx);
		}
	}
}
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> t;
	for (int test = 0; test < t; test++)
	{
		int ret = 0; //지렁이 개수
		cin >> m >> n >> k;

		//초기화 부분
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
				if (a[i][j] == 1 && !visited[i][j])
				{
					dfs(i, j);
					ret++;
				}
			}
		}
		cout << ret << "\n";
	}
}