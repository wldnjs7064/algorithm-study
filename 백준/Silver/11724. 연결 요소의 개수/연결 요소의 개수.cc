#include <iostream>
#include <vector>
using namespace std;

int n, m, u, v;
vector<int> vec[1001];
int visited[1001];

void dfs(int a)
{
	visited[a] = 1;
	for (int i = 0; i < vec[a].size(); i++)
	{
		if (visited[vec[a][i]] == 0)
			dfs(vec[a][i]);
	}
}

int main()
{
	cin >> n >> m;
	int cnt = 0;
	for (int i = 0; i < m; i++)
	{
		cin >> u >> v;
		vec[u].push_back(v);
		vec[v].push_back(u);
	}
	for (int i = 1; i <= n; i++)
	{
		if (visited[i] == 0)
		{
			cnt++;
			dfs(i);
		}
	}
	cout << cnt << "\n";
}