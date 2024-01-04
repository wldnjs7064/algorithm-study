#include <iostream>
#include <queue>
using namespace std;

int m, n, h, day = 0;
int tom[100][100][100];
int visited[100][100][100];
queue<pair<pair<int, int>, int>> q;
int dz[] = { 0,0,0 ,0,-1,1 };
int dx[] = { 0,0 ,1,-1,0,0 };
int dy[] = { -1,1,0,0,0,0 };

void bfs()
{
	while (!q.empty())
	{
		pair<pair<int, int>, int> x = q.front();
		q.pop();
		for (int i = 0; i < 6; i++)
		{
			int nz = x.first.first + dz[i];
			int ny = x.second + dy[i];
			int nx = x.first.second + dx[i];
			if (nx < 0 || ny < 0 || nz < 0 || nx >= n || ny >= m || nz >= h || visited[nz][nx][ny] >= 0) continue;
			visited[nz][nx][ny] = visited[x.first.first][x.first.second][x.second] + 1;
			q.push(make_pair(make_pair(nz, nx), ny));
		}
	}
}

int main()
{
	cin >> m >> n >> h;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				cin >> tom[i][j][k];
				if (tom[i][j][k] == 1)
					q.push(make_pair(make_pair(i, j), k));
				if (tom[i][j][k] == 0)
					visited[i][j][k] = -1;
			}
		}
	}
	bfs();
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				if (visited[i][j][k] == -1)
				{
					cout << -1;
					return 0;
				}
				day = max(day, visited[i][j][k]);
			}
		}
	}
	cout << day;
}
