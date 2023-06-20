#include <iostream>
using namespace std;

int main()
{
	int n, m, k, cnt = 0;
	cin >> n >> m >> k;
	int total = n + m - k;
	while (n > 1 && m > 0 && total > 2)
	{
		n -= 2;
		m -= 1;
		total -= 3;
		cnt++;
	}
	cout << cnt;
}