#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<int> va;
	vector<int> vb;
	for (int test = 0; test < n; test++)
	{
		int a, b;
		cin >> a >> b;
		va.clear();
		vb.clear();
		for (int i = 0; i < a; i++)
		{
			int x;
			cin >> x;
			va.push_back(x);
		}
		for (int i = 0; i < b; i++)
		{
			int y;
			cin >> y;
			vb.push_back(y);
		}
		sort(va.begin(), va.end());
		sort(vb.begin(), vb.end());
		int cnt = 0;
		if (va.size() > vb.size())
		{
			for (int i = 0; i < va.size(); i++)
			{
				for (int j = 0; j < vb.size(); j++)
				{
					if (va[i] > vb[j])
						cnt++;
					else break;
				}
			}
		}
		else
		{
			for (int i = 0; i < vb.size(); i++)
			{
				for (int j = 0; j < va.size(); j++)
				{
					if (va[j] > vb[i])
						cnt++;
				}
			}
		}
		cout << cnt << "\n";
	}
}