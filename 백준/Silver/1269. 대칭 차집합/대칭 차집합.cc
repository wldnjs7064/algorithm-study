#include <iostream>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	map<int, bool> map;

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n+m; i++) {
		int x;
		cin >> x;
		if (map[x] == true) map.erase(x);
		else
			map[x] = true;
	}
	cout << map.size();
}