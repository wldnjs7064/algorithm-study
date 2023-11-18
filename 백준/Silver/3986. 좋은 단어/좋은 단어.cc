#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		stack<char> st;
		for (int j = 0; j < str.size(); j++)
		{
			if (st.empty())
				st.push(str[j]);
			else {
				if (str[j] != st.top())
					st.push(str[j]);
				else
					st.pop();
			}
		}
		if (st.empty())
			cnt++;
	}
	cout << cnt;
}