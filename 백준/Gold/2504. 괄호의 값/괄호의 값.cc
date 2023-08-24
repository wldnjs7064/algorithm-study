#include <iostream>
#include <stack>
using namespace std;

int main()
{
	string str;
	cin >> str;
	stack<char> s;
	int temp = 1, answer = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(')
		{
			temp *= 2;
			s.push('(');
		}
		else if (str[i] == '[')
		{
			temp *= 3;
			s.push('[');
		}
		else if (str[i] == ')')
		{
			if (s.empty() || s.top() != '(')
			{
				answer = 0;
				break;
			}
			else if (str[i - 1] == '(')
			{
				answer += temp;
				temp = temp / 2;
				s.pop();
			}
			else
			{
				temp = temp / 2;
				s.pop();
			}
		}
		else if (str[i] == ']')
		{
			if (s.empty() || s.top() != '[')
			{
				answer = 0;
				break;
			}
			else if (str[i - 1] == '[')
			{
				answer += temp;
				temp = temp / 3;
				s.pop();
			}
			else
			{
				temp = temp / 3;
				s.pop();
			}
		}
	}
	if (!s.empty()) answer = 0;
	cout << answer;
}