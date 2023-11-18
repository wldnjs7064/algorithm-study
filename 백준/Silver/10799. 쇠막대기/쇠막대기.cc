#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	string str;
	int res = 0;
	cin >> str;
	stack<char> st;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(')
			st.push('(');
		else
		{
			if (str[i - 1] == '(')
			{
				st.pop();
				res += st.size();
			}
			else
			{
				st.pop();
				res++;
			}
		}
	}
	cout << res;
}