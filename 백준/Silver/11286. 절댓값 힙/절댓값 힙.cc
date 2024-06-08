#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

struct cmp {
	bool operator() (int n1, int n2) {
		if (abs(n1) > abs(n2))
			return true;
		else if (abs(n1) == abs(n2)) {
			if (n1 > n2) return true;
			else return false;
		}
		else return false;
	}
};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	priority_queue<int,vector<int>,cmp> pq;
	while (n--) {
		int x;
		cin >> x;
		if (x == 0) {
			if (pq.empty()) {
				//cout << "정답:";
				cout << 0 << "\n";
			}
			else {
				//cout << "정답:";
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else {
			pq.push(x);
		}
	}
}