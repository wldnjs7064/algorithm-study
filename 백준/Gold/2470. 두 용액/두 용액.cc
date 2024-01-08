#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int L, R;
int main()
{
	int n, sum;
	int max = 2000000001;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	int left = 0, right = n - 1;
	while (left < right)
	{
		sum = v[left] + v[right];
		if (abs(sum) < max)
		{
			max = abs(sum);
			L = v[left];
			R = v[right];
		}
		if (sum > 0)
			right--;
		else
			left++;
	}
	cout << L << " " << R;
}