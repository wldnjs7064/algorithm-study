#include <iostream>
#include <stack>
#include <string>
using namespace std;

double opp(double x, char op, double y) {
	double ans = 0;
	if (op == '/') {
		ans = x / y;
	}
	else if (op == '+') {
		ans = x + y;
	}
	else if (op == '-') {
		ans = x - y;
	}
	else
		ans = x * y;
	return ans;
}

int main() {
	int n;
	double num[26];
	cin >> n;
	string str;
	cin >> str;
	stack<double> s;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	double x, y;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A'&&str[i] <= 'Z') { //피연산자면
			s.push(num[str[i] - 'A']);
		}
		else { //연산자면
			y = s.top();
			s.pop();
			x = s.top();
			s.pop();
			s.push(opp(x, str[i], y));
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << s.top();
}