#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	int n, m, x;
	cin >> t;
	while(t--)
	{
		set<int> s;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			s.insert(x);
		}
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> x;
			if (s.find(x) != s.end())
				cout << "1" << "\n";
			else
				cout << "0" << "\n";
		}
	}
}