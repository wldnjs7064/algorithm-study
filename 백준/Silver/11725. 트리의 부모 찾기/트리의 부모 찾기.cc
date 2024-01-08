#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> vec[100001];
int visited[100001];
int ret[100001];
void dfs(int a)
{
	visited[a] = 1;
	for (int i = 0; i < vec[a].size(); i++)
	{
		if (visited[vec[a][i]] == 0)
		{
			ret[vec[a][i]] = a;
			dfs(vec[a][i]);
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int u, v;
		cin >> u >> v;
		vec[u].push_back(v);
		vec[v].push_back(u);
	}
	dfs(1);
	for (int i = 2; i <= n; i++)
		cout << ret[i] << "\n";
}