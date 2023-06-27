#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,x;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
}