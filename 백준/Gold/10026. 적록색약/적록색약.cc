#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int n;
char arr[101][101];
int visited[101][101];

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

void bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push({ x,y });
	visited[y][x] = 1;

	while (q.size()) {
		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || ny < 0 || ny >= n || nx >= n) {
				continue;
			}
			if (visited[ny][nx] == 0) {
				if (arr[ny][nx] == arr[y][x]) {
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
	
	//입력받기
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	int normal = 0;
	int result = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i][j] == 0) {
				bfs(j, i);
				normal++;
			}
		}
	}

	memset(visited, 0, sizeof(visited));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 'G') {
				arr[i][j] = 'R';
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i][j] == 0) {
				bfs(j, i);
				result++;
			}
		}
	}
	

	cout << normal << " " << result;
}