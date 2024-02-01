#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		vector<int> v;
		int n, m;
		cin >> n >> m;
		priority_queue<int> pq;
		queue<pair<int, int>> q;
		for (int i = 0; i < n; i++)
		{
			int imp;
			cin >> imp;
			q.push({ i,imp });
			pq.push(imp);
		}
		int cnt = 0;
		while (!q.empty())
		{
			int idx = q.front().first;
			int value = q.front().second;
			q.pop();

			if (pq.top() == value)
			{
				pq.pop();
				cnt++;
				if (m == idx)
				{
					cout << cnt << "\n";
					break;
				}
			}
			else
				q.push({ idx,value });
		}
	}
}