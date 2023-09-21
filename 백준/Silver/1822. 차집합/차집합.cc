#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a, b, cnt = 0;
	cin >> a >> b;
	vector<int> v1(a);
	vector<int> v2(b);
	vector<int> res;

	for (int i = 0; i < a; i++)
	{
		int x;
		cin >> x;
		v1.push_back(x);
	}
	for (int i = 0; i < b; i++)
	{
		int y;
		cin >> y;
		v2.push_back(y);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	for (int i = 0; i < v1.size(); i++)
	{
		int left = 0, right = v2.size() - 1;
		bool isIn = false;
		while (left <= right)
		{
			int mid = (left + right) / 2;
			if (v2[mid] == v1[i])
			{
				isIn = true;
				break;
			}
			if (v1[i] < v2[mid])
				right = mid - 1;
			else
				left = mid + 1;
		}
		if (!isIn) res.push_back(v1[i]);
	}
	cout << res.size() << "\n";
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << " ";
}