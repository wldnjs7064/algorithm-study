#include <iostream>
#include <queue>
using namespace std;

int f, s, g, u, d;
int visited[1000001];
int bfs(int a)
{
	queue<pair<int, int>> q;
	q.push(make_pair(a, 0));

	while (!q.empty())
	{
		int x = q.front().first;
		int cnt = q.front().second;
		q.pop();
		if (x == g)
			return cnt;
		int up = x + u;
		int down = x - d;

		if (up <= f && !visited[up])
		{
			visited[up] = true;
			q.push(make_pair(up, cnt + 1));
		}
		if (down >= 1 && !visited[down])
		{
			visited[down] = true;
			q.push(make_pair(down, cnt + 1));
		}
	}
	return -1;
}
int main()
{
	cin >> f >> s >> g >> u >> d;
	visited[s] = true;
	int result = bfs(s);
	if (result == -1)
		cout << "use the stairs";
	else
		cout << result;
}