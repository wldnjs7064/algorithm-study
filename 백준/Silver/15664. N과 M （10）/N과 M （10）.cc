#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> v;
int arr[10];
bool visited[10];
void func(int k,int cnt)
{
	if (cnt == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}
	int tmp = -1;
	for (int i = k; i < n; i++)
	{
		if (!visited[i] && tmp != v[i])
		{
			arr[cnt] = v[i];
			tmp = v[i];
			visited[i] = 1;
			func(i+1,cnt+1);
			visited[i] = 0;
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
	func(0, 0);
}