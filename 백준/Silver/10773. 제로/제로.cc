#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> st;
	int n,num, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num == 0)
			st.pop();
		else
			st.push(num);
	}
	for (int i = 0; !st.empty(); i++)
	{
		sum += st.top();
		st.pop();
	}
	cout << sum;
	return 0;
}