#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m;
int graph[1001][1001];
int visited[1001][1001]; // 거리를 저장하며 동시에 방문 여부도 확인
int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0, 1, -1 };

void bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push({ x, y });
	visited[x][y] = 0; // 시작 지점의 거리는 0

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
				if (graph[nx][ny] == 1 && visited[nx][ny] == -1) {
					visited[nx][ny] = visited[x][y] + 1;
					q.push({ nx, ny });
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	int x, y; // 목표지점의 좌표
	// 초기화 및 입력
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> graph[i][j];
			visited[i][j] = -1; // 초기 방문 배열을 -1로 설정
			if (graph[i][j] == 2) {
				x = i;
				y = j;
			}
		}
	}

	bfs(x, y); // 목표지점에서 BFS 시작

	// 결과 출력
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (graph[i][j] == 0) {
				cout << 0 << " "; // 갈 수 없는 땅
			}
			else {
				cout << visited[i][j] << " "; // 갈 수 있는 땅의 최소 거리 or -1
			}
		}
		cout << "\n";
	}

	return 0;
}
