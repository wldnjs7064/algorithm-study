#include <iostream>
using namespace std;

int n, m;
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
	for (int i = k; i <= n; i++)
	{
		if (!visited[i])
		{
			arr[cnt] = i;
			visited[i] = 1;
			func(i + 1,cnt+1);
			visited[i] = 0;
		}
	}
}
int main()
{
	cin >> n >> m;
	func(1, 0);
}