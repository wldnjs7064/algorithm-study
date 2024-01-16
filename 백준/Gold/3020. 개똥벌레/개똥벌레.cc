#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, h;
vector<int> down;
vector<int> up;
int Min = 500000;
int main()
{
	cin >> n >> h;
	vector<int> ans(h, 0);
	int cnt=0;
	for (int i = 0; i < n/2; i++)
	{
		int a, b;
		cin >> a >> b;
		down.push_back(a);
		up.push_back(b);
	}
	sort(down.begin(), down.end());
	sort(up.begin(), up.end());
	for (int i = 1; i <= h; i++)
	{
		int suk = lower_bound(down.begin(), down.end(), i) - down.begin();
		int jong = lower_bound(up.begin(), up.end(), h - i + 1) - up.begin();

		int cur = n - (suk + jong);

		if (cur < Min)
		{
			cnt = 1;
			Min = cur;
		}
		else if (cur == Min) cnt++;
	}
	cout << Min << " " << cnt;

}