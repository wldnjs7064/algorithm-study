#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	int cnt = 0;
	cin >> str;
	stack<char> s;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '(')
		{
			s.push('(');
		}
		else
		{
			if (s.empty())
			{
				cnt++;
			}
			else
				s.pop();
		}
	}
	cout << cnt+s.size();
}