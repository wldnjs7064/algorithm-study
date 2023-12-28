#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int a[500][500];
bool visited[500][500];
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };
int ans = 1; //그림 넓이
vector<int> v;
void go(int y, int x)
{
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
		if (visited[ny][nx] == 0 && a[ny][nx] == 1)
		{
			visited[ny][nx] = true;
			ans++;
			go(ny, nx);
		}
		
	}
}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 1 && visited[i][j] == 0) {
				go(i, j);
				v.push_back(ans);
				cnt++;
				ans = 1;
			}
		}
	}
	sort(v.begin(), v.end());
	cout << cnt << "\n";
	if (cnt == 0)
		cout << 0 << "\n";
	else
		cout << v.back() << "\n";
}
