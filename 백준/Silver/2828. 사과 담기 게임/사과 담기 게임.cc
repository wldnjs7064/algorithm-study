#include <iostream>
using namespace std;

int main()
{
	int n, m, j;
	cin >> n >> m;
	cin >> j;
	int l = 1, r = m, cnt = 0;
	while (j--)
	{
		int k;
		cin >> k;
		bool flag = true;
		while (flag)
		{
			if (l <= k && r >= k)
				flag = false;
			else if (l > k)
			{
				l--;
				r--;
				cnt++;
			}
			else
			{
				l++;
				r++;
				cnt++;
			}
		}
	}
	cout << cnt;
}