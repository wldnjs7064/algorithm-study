#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int cnt = -1;
	map<string, int> m;
	while (1) {
		string str;
		getline(cin, str);
		cnt++;
		if (str == "") break;
		if (m.find(str) != m.end()) {
			m[str]++;
		}
		else {
			m[str] = 1;
		}
	}
	for (const auto &iter : m) {
		cout << fixed;
		double d = (double)iter.second / cnt * 100;
		cout.precision(4);
		cout << iter.first << " " << d << "\n";
		//cout << "횟수: ";
		//cout << iter.first << iter.second << "\n";
	}
	//cout << cnt;
}