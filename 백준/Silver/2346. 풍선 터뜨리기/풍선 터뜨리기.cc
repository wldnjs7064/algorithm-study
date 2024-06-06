#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
	deque<pair<int, int>> dq;
	vector<int> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		dq.push_back({ x, i + 1 });
	}

	while (!dq.empty()) {
		int steps = dq.front().first;
		cout << dq.front().second << " ";
		dq.pop_front();

		if (!dq.empty()) {
			if (steps > 0) {
				for (int i = 0; i < steps - 1; i++) {
					dq.push_back(dq.front());
					dq.pop_front();
				}
			}
			else {
				for (int i = 0; i < -steps; i++) {
					dq.push_front(dq.back());
					dq.pop_back();
				}
			}
		}
	}
	return 0;
}
