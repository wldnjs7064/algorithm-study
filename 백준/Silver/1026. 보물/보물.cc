#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, ax, bx, result = 0;
	cin >> n;
	vector<int> a;
	vector<int> b;
	for (int i = 0; i < n; i++)
	{
		cin >> ax;
		a.push_back(ax);
	}
	for (int i = 0; i < n; i++)
	{
		cin >> bx;
		b.push_back(bx);
	}
	sort(a.begin(), a.end());
	sort(b.rbegin(), b.rend());

	for (int i = 0; i < n; i++)
	{
		result += a[i] * b[i];
	}
	cout << result;
}