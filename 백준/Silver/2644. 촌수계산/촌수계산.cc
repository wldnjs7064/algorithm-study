#include <iostream>
#include <queue>
using namespace std;

int n, a, b, m;
int arr[101][101];
int visited[101];
void bfs(int num)
{
	queue<int> q;
	q.push(num);

	while (!q.empty())
	{
		num = q.front();
		q.pop();
		for (int i = 1; i <= n; i++)
		{
			if (arr[num][i] != 0 && !visited[i])
			{
				q.push(i);
				visited[i] = visited[num] + 1;
			}
		}
	}
}
int main()
{
	cin >> n;
	cin >> a >> b;
	cin >> m;
	for (int i = 1; i <= m; i++)
	{
		int x, y;
		cin >> x >> y;
		arr[y][x] = 1;
		arr[x][y] = 1;
	}
	bfs(a);
	if (visited[b] == 0)
		cout << -1;
	else
		cout << visited[b];
}