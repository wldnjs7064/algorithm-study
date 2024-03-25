#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n, m, k;
int visited[101][101];
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };
queue<pair<int, int>> q;

int bfs(int y,int x) {
	int cnt = 1;
	visited[y][x] = 1;
	q.push({ y,x });
	while (!q.empty())
	{
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= m || nx >= n) continue;
			if (!visited[ny][nx])
			{
				cnt++;
				visited[ny][nx] = 1;
				q.push({ ny,nx });
			}
		}
	}
	return cnt;
}
int main()
{
	cin >> m >> n >> k;
	for (int i = 0; i < k; i++)
	{
		int sx, sy, ex, ey;
		cin >> sx >> sy >> ex >> ey;
		for (int j = sy; j < ey; j++)
		{
			for (int o = sx; o < ex; o++)
			{
				visited[j][o] = 1;
			}
		}
	}
	vector<int> ans;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visited[i][j])
			{
				ans.push_back(bfs(i, j));
			}
		}
	}
	sort(ans.begin(), ans.end());
	cout << ans.size() << "\n";
	for (int i=0;i<ans.size();i++)
		cout << ans[i] << " ";
}
