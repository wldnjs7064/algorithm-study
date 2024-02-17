#include <iostream>
#include <queue>
using namespace std;

char a[250][250];
bool visited[250][250];
int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };
int r, c, sheep = 0, wolf = 0, ts = 0, tw = 0;
void bfs(int x, int y)
{
	int sheep = 0, wolf = 0;
	queue<pair<int, int>> q;
	q.push({ x,y });
	visited[x][y] = true;
	
	while (!q.empty())
	{
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		if (a[y][x] == 'o') sheep++;
		if (a[y][x] == 'v') wolf++;

		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= r || nx >= c || a[ny][nx] == '#' || visited[ny][nx]) continue;
			q.push({ ny,nx });
			visited[ny][nx] = true;

		}
	}
	if (sheep > wolf) ts += sheep;
	else tw += wolf;
}
int main()
{
	
	cin >> r >> c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cin >> a[i][j];
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (visited[i][j] == false && a[i][j]!='#')
				bfs(i, j);
		}
	}
	cout << ts << " " << tw << "\n";
	
}