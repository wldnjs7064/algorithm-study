#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main()
{
	int n, m;
	vector<int> v;
	set<int> s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		s.insert(x);
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int y;
		cin >> y;
		v.push_back(y);
	}
	for (int i = 0; i < m; i++)
	{
		if (s.find(v[i]) != s.end())
			cout << "1" << "\n";
		else
			cout << "0" << "\n";
	}
}