#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int p, m, g, s;
vector<int> a;
int Max = -2147483646;
int Min = 2147483647;
void func(int p, int m, int g, int s, int ret, int cnt)
{
	if (p < 0 || m < 0 || g < 0 || s < 0) return;
	if (cnt == a.size())
	{
		Max = max(ret, Max);
		Min = min(ret, Min);
		return;
	}
	func(p-1, m, g, s, ret + a[cnt], cnt + 1);
	func(p, m-1, g, s, ret - a[cnt], cnt + 1);
	func(p, m, g-1, s, ret * a[cnt], cnt + 1);
	func(p, m, g, s-1, ret / a[cnt], cnt + 1);
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		a.push_back(x);
	}
	cin >> p >> m >> g >> s;
	func(p, m, g, s, a[0], 1);
	cout << Max << "\n" << Min << "\n";
}