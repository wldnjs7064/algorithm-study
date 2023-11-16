#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int t;
	cin >> t;
	vector<pair<string, int>> v;
	for (int test_case = 0; test_case < t; test_case++)
	{
		int n;
		cin >> n;
		string str;
		for (int i = 0; i < n; i++)
		{
			int n;
			cin >> str >> n;
			v.push_back(make_pair(str, n));
		}
		cout << "#" << test_case + 1 << "\n";
		int cut = 0;
		for (int i = 0; i < v.size(); i++)
		{
			while (v[i].second != 0)
			{
				cout << v[i].first;
				v[i].second--;
				if (cut++ == 9)
				{
					cout << "\n";
					cut = 0;
				}
			}
		}
		cout << "\n";
	}
}