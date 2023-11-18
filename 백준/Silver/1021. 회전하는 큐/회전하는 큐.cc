#include <iostream>
#include <deque>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m, cnt = 0;
	cin >> n >> m;
	deque<int> d;
	for (int i = 1; i <= n; i++)
	{
		d.push_back(i);
	}
	while (m--)
	{
		int num, index;
		cin >> num;
		for (int i = 0; i < d.size(); i++)
		{
			if (d[i] == num)
			{
				index = i;
				break;
			}
		}
		if (index < d.size() - index)
		{
			while (1)
			{
				if (d.front() == num)
				{
					d.pop_front();
					break;
				}
				cnt++;
				d.push_back(d.front());
				d.pop_front();
			}
		}
		else
		{
			while (1)
			{
				if (d.front() == num)
				{
					d.pop_front();
					break;
				}
				cnt++;
				d.push_front(d.back());
				d.pop_back();
			}
		}
		
	}
	cout << cnt;
}