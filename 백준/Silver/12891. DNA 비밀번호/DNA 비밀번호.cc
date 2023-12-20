#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n, s;
	cin >> n >> s;
	string str;
	cin >> str;
	int a, c, g, t;
	cin >> a >> c >> g >> t;
	int ans = 0;
	int aa = 0, cc = 0, gg = 0, tt = 0;
	for (int i = 0; i < s; i++)
	{
		if (str[i] == 'A')
			aa++;
		else if (str[i] == 'C')
			cc++;
		else if (str[i] == 'G')
			gg++;
		else
			tt++;
	}
	if (a <= aa && c <= cc && g <= gg && t <= tt)
		ans++;
	for (int i = s; i < n; i++)
	{
		if (str[i] == 'A')
			aa++;
		else if (str[i] == 'C')
			cc++;
		else if (str[i] == 'G')
			gg++;
		else if (str[i]=='T')
			tt++;
		if (str[i-s] == 'A')
			aa--;
		else if (str[i-s] == 'C')
			cc--;
		else if (str[i-s] == 'G')
			gg--;
		else
			tt--;
		if (a <= aa && c <= cc && g <= gg && t <= tt)
			ans++;
	}
	cout << ans;
}
