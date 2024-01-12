#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> v;
int arr[10];
void func(int k)
{
	if (k == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}
	int tmp = 0;
	for (int i = 0; i < n; i++)
	{
		if (tmp != v[i])
		{
			arr[k] = v[i];
			tmp = v[i];
			
			func(k + 1);
			
		}
	}
}
int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	func(0);
}