#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int a[50][50];
int visited[50][50];
int dy[] = {0,-1,-1,-1,0,1,1,1};
int dx[] = {1,1,0,-1,-1,-1,0,1};
int w, h;

void bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push({ x, y });
	visited[y][x] = 1;
	while (!q.empty()) {
		int y = q.front().second;
		int x = q.front().first;
		q.pop();

		for (int i = 0; i < 8; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= h || nx >= w ) continue;
			if (a[ny][nx] && !visited[ny][nx])
			{
				visited[ny][nx] = 1;
				q.push({ nx, ny });
			}
		}
	}
}

int main() {
	while (1) {
		memset(a, 0, sizeof(a));
		memset(visited, 0, sizeof(visited));
		cin >> w >> h;
		if (w == 0 && h == 0)
			break;
		for (int i = 0; i < h; i++) { 
			for (int j = 0; j < w; j++) {
				cin >> a[i][j];
			}
		}
		int ret = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (a[i][j] && !visited[i][j]) {
					bfs(j, i);
					ret++;
				}
			}
		}
		cout << ret << "\n";
	}

	return 0;
}
