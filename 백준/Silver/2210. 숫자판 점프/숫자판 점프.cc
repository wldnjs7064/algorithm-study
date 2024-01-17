#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[5][5];
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };
vector<int> v;
void dfs(int y, int x,int cnt,int num)
{
	if (cnt == 6)
	{
		v.push_back(num);
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= 5 || nx >= 5) continue;
		dfs(ny, nx, cnt + 1, num * 10 + a[ny][nx]);
	}
}
int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> a[i][j];
		}
	}

	int cnt = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			dfs(i, j, 1, a[i][j]);
		}
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	cout << v.size();
}