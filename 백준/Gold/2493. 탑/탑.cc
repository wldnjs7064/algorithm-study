#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
	int n,x;
	stack<pair<int,int>> s;
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		if (s.empty())
		{
			s.push({ i,x });
			cout << "0 ";
		}
		else
		{
			while (!s.empty())
			{
				if (s.top().second > x)
				{
					cout << s.top().first << " ";
					break;
				}
				else
					s.pop();
			}
		}
		if (s.empty()) cout << "0 ";
		s.push({ i,x });
	
	}
	
}