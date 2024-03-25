#include <iostream>
#include <queue>
using namespace std;

int m, n;
int arr[1001][1001];
int visited[1001][1001];

int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };
queue<pair<int, int>> q;
void bfs()
{
	while (!q.empty())
	{
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || ny < 0 || ny >= n || nx >= m||arr[ny][nx]!=0||arr[ny][nx]==-1) continue;
			arr[ny][nx] = arr[y][x] + 1;
			q.push({ ny,nx });
		}

	}
}
int main()
{
	cin >> m >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 1)
			{
				q.push({ i,j });
			}
			
		}
	}
	bfs();
	int day = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j]==0)
			{
				cout << -1;
				return 0;
			}
			if (day < arr[i][j])
				day = arr[i][j];
		}
	}
	cout << day-1;
}