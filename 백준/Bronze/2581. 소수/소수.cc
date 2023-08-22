#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int m, n;
	cin >> m;
	cin >> n;
	int cnt = 0;
	int sum = 0, min = -1;
	vector<int> v;
	for (int i = m; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				cnt++;
		}
		if (cnt == 2)
		{
			if (min == -1)
				min = i;
			sum += i;
		}
		cnt = 0;
	}
	if (min == -1)
		cout << -1 << "\n";
	else
		cout << sum << "\n" << min << "\n";
}