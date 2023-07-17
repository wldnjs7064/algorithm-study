#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	queue<int> q;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		if (str == "push")
		{
			int x;
			cin >> x;
			q.push(x);
		}
		else if (str == "pop")
		{
			if (q.size() == 0)
				cout << "-1" << "\n";
			else
			{
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (str == "size")
			cout << q.size() << "\n";
		else if (str == "empty")
		{
			if (q.size() == 0)
				cout << "1" << "\n";
			else
				cout << "0" << "\n";
		}
		else if (str == "front")
		{
			if (q.size() == 0)
				cout << "-1" << "\n";
			else
				cout << q.front() << "\n";
		}
		else if (str == "back")
		{
			if (q.size() == 0)
				cout << "-1" << "\n";
			else
				cout << q.back() << "\n";
		}

	}
}