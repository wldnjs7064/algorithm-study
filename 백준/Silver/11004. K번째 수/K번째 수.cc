#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, k,x;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> v;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	cout << v[k-1];
}