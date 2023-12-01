#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
	int n,res=0;
	stack<int> s;
	int x, y;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		
		while (!s.empty() && s.top() > y)
		{
			if (s.top() != y)
				res++;
			s.pop();
		}
		if (!s.empty() && y == s.top()) continue;
		s.push(y);
	}
	while (!s.empty())
	{
		if (s.top() != 0)
			res++;
		s.pop();
	}
	cout << res << "\n";
}
