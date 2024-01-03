#include <iostream>
#include <queue>
using namespace std;

int a[110][110];
int visited[110][110];
int n, m;
int dy[] = { -1, 0, 1, 0 };
int dx[] = { 0, 1, 0, -1 };

int bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	visited[y][x] = 1;

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || ny < 0 || nx >= m || ny >= n || a[ny][nx] == 0) continue;
			if (visited[ny][nx]) continue;

			visited[ny][nx] = visited[y][x] + 1;
			q.push(make_pair(nx, ny));
		}
	}

	return visited[n - 1][m - 1];
}

int main() {
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			scanf("%1d", &a[i][j]);
	}

	cout << bfs(0, 0);

	return 0;
}
