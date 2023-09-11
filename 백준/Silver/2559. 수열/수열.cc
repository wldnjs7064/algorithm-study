#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, k, sum = 0, max;
	cin >> n >> k;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	for (int i = 0; i < k; i++)
	{
		sum += v[i];
	}
	max = sum;
	for (int i = k; i < n; i++)
	{
		sum = sum + v[i] - v[i - k];
		if (sum > max) max = sum;
	}
	cout << max;
}