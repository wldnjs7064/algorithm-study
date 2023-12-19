#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, s;
	cin >> n >> s;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int ans = n + 1; // 초기값을 최대로 설정

	int left = 0, right = 0;
	int total = v[0]; // left~right까지 합 저장

	while (left < n && right < n) {
		if (total >= s) {
			ans = min(ans, (right - left + 1));
			total -= v[left];
			left++;
		}
		else {
			right++;
			if (right < n) {
				total += v[right];
			}
		}
	}

	if (ans == n + 1) {
		ans = 0;
	}

	cout << ans << "\n";

	return 0;
}
