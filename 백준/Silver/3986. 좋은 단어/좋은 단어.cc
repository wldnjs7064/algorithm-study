#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int cnt = 0;
	while (n--) {
		string str;
		cin >> str;
		stack<char> st;
		for (int i = 0; i < str.length(); i++) {
			if (st.empty()) {
				st.push(str[i]);
			}
			else {
				if (str[i] == st.top()) {
					st.pop();
				}
				else st.push(str[i]);
			}
			
		}
		if (st.size() == 0)cnt++;
	}
	cout << cnt;
}