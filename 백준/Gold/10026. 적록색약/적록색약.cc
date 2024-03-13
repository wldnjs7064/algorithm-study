#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int n, x, y;
char arr[101][101];
int visited[101][101];

int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };

void bfs(int x, int y)
{
	visited[y][x] = 1;
	char num = arr[y][x];
	queue<pair<int, int>> q;
	q.push({ x,y });
	while (q.size())
	{
		int y = q.front().second;
		int x = q.front().first;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
			if (visited[ny][nx] == 0)
			{
				if (num == arr[ny][nx])
				{
					visited[ny][nx] = 1;
					q.push({ nx,ny });
				}
			}
		}
	}
}

void bfs2(int x, int y)
{
	visited[y][x] = 1;
	char num = arr[y][x];
	queue<pair<int, int>> q;
	q.push({ x,y });
	while (q.size())
	{
		int y = q.front().second;
		int x = q.front().first;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
			if (visited[ny][nx] == 0)
			{
				if (num == 'G' || num == 'R')
				{
					if (arr[ny][nx] == 'G' || arr[ny][nx] == 'R')
					{
						visited[ny][nx] = 1;
						q.push({ nx,ny });
					}
				}
				else if (num == arr[ny][nx])
				{
					visited[ny][nx] = 1;
					q.push({ nx,ny });
				}
			}
		}
	}
}

int main()
{
	cin >> n;

	memset(arr, 0, sizeof(arr));
	memset(visited, 0, sizeof(visited));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	}

	int ret = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visited[i][j])
			{
				bfs(j, i);
				ret++;
			}
		}
	}
	memset(visited, 0, sizeof(visited));
	int greencnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visited[i][j])
			{
				bfs2(j, i);
				greencnt++;
			}
		}
	}
	cout << ret << " " << greencnt;
}