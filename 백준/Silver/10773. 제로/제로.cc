#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie();
	int n;
	cin >> n;
	stack<int> st;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x != 0)
			st.push(x);
		else
			st.pop();
	}
	int sum = 0;
	while (!st.empty())
	{
		sum += st.top();
		st.pop();
	}
	cout << sum;
}