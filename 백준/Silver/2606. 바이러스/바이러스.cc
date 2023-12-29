#include <iostream>
#include <vector>
using namespace std;

int n, m, cnt = 0;
bool visited[101];
vector<int> adj[101];

void dfs(int x)
{
	visited[x] = true;
	for (int i = 0; i < adj[x].size(); i++)
	{
		int y = adj[x][i];
		if (!visited[y])
		{
			dfs(y);
			cnt++;
		}
	}
}
int main()
{
	cin >> n;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	dfs(1);
	cout << cnt << "\n";
}