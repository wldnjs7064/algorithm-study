#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<string> v;
	while (n--) {
		string str;
		cin >> str;
		v.push_back(str);
	}
	sort(v.begin(), v.end());
	int cnt = 0;
	while (m--) {
		string input;
		cin >> input;
		if (binary_search(v.begin(), v.end(), input))
			cnt++;
	}
	cout << cnt;
}