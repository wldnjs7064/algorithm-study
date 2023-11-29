#include <iostream>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, greater<int>> q;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x!=0)
			q.push(x);
		if (x == 0)
		{
			if (q.empty())
				cout << "0\n";
			else
			{
				cout << q.top() << "\n";
				q.pop();
			}
		}
	}
}