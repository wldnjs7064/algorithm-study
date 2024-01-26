#include <iostream>
#include <algorithm>
using namespace std;

int a[100001];
int d[100001];
int main()
{
	int n;
	cin >> n;
	for (int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		d[i] = max(a[i], d[i - 1] + a[i]);
	}
	int res = *max_element(d, d + n);
	cout << res;
}