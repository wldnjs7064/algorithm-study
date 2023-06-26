#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, x;
	cin >> n;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "\n";
	}
}