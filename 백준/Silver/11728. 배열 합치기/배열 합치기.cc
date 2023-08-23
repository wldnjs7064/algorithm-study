#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v1.push_back(x);
	}
	for (int i = 0; i < m; i++)
	{
		int y;
		cin >> y;
		v2.push_back(y);
	}
	vector<int>::iterator it = v1.end();
	v1.insert(it, v2.begin(), v2.end());
	sort(v1.begin(), v1.end());
	for (const auto& j : v1) cout << j << " ";
}