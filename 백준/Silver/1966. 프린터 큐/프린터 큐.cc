#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		int n, m;
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			q.push({ i,a });
			pq.push(a);
		}
		int cnt = 0;
		while (!q.empty()) {
			int index = q.front().first;
			int value = q.front().second;
			q.pop();
			if (value == pq.top()) {
				pq.pop();
				cnt++;
				if (index == m)
				{
					cout << cnt << "\n";
					break;
				}
			}
			else {
				q.push({ index,value });
			}
		}

	}
}