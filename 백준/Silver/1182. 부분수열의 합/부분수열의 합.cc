#include <iostream>
using namespace std;

int n, s;
int a[30];
int cnt = 0;
void func(int cur, int total)
{
	if (cur == n)
	{
		if (total == s) cnt++;
		return;
	}
	func(cur + 1, total);
	func(cur + 1, total + a[cur]);
}
int main()
{
	cin >> n >> s;
	for (int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	func(0, 0);
	if (s == 0) cnt--;
	cout << cnt;
}