#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, x;
	long long tip = 0;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		v.push_back(x);
	}
	sort(v.rbegin(), v.rend());

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] - i > 0)
			tip += v[i] - i;
	}
	cout << tip;
}