#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, x;
	cin >> n;
	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		v.push_back(x);
	}
	sort(v.rbegin(), v.rend());
	for (int i = 0; i < n; i++)
		v[i] = v[i] * (i + 1);
	int max = *max_element(v.begin(), v.end());
	cout << max;
	
}