#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int n, m, v;
vector<int> a[10001];
bool visited[10001];
vector<int> result_dfs;
vector<int> result_bfs;

void bfs(int t)
{
	queue<int> q;
	q.push(t);
	visited[t] = true;
	while (!q.empty())
	{
		int y = q.front();
		q.pop();
		result_bfs.push_back(y);

		for (int i = 0; i < a[y].size(); i++)
		{
			if (!visited[a[y][i]])
			{
				q.push(a[y][i]);
				visited[a[y][i]] = true;
			}
		}
	}
}

void dfs(int x)
{
	visited[x] = true;
	result_dfs.push_back(x);
;	for (int i = 0; i < a[x].size(); i++)
	{
		if (!visited[a[x][i]])
			dfs(a[x][i]);
	}
}

int main()
{
	cin >> n >> m >> v;
	for (int i = 1; i <= m; i++)
	{
		int x, y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	for (int i = 1; i <= n; i++)
		sort(a[i].begin(), a[i].end());
	dfs(v);
	memset(visited, false, sizeof(visited));
	bfs(v);
	for (int i = 0; i < result_dfs.size(); i++)
		cout << result_dfs[i] << " ";
	cout << "\n";
	for (int i = 0; i < result_bfs.size(); i++)
		cout << result_bfs[i] << " ";
}