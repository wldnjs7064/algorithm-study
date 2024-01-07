#include <iostream>
#include <vector>
using namespace std;

int t, n;
vector<int> v[1001];
int visited[1001];
void dfs(int a)
{
	visited[a] = 1;
	for (int i = 0; i < v[a].size(); i++)
	{
		if (visited[v[a][i]] == 0)
			dfs(v[a][i]);
	}
}
int main()
{
	cin >> t;
	for (int test = 0; test < t; test++)
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			visited[i] = 0;
			v[i].clear();
			int x;
			cin >> x;
			v[i].push_back(x);
		}
		int cnt = 0;
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

}