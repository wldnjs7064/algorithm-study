#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int a[25][25];
int visited[25][25];
vector<int> result;
int dy[] = { -1, 0, 1, 0 };
int dx[] = { 0, 1, 0, -1 };
int n;

void bfs(int y, int x) {
	queue<pair<int, int>> q;
	q.push({ x, y });
	visited[y][x] = 1;
	int cnt = 1;

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= n || nx >= n || a[ny][nx] == 0) continue;
			if (visited[ny][nx]) continue;

			visited[ny][nx] = 1;
			q.push({ nx, ny });
			cnt++;
		}
	}

	result.push_back(cnt);
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			scanf("%1d", &a[i][j]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == 1 && !visited[i][j]) {
				bfs(i, j);
			}
		}
	}

	sort(result.begin(), result.end());

	cout << result.size() << "\n";
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << "\n";

	return 0;
}
