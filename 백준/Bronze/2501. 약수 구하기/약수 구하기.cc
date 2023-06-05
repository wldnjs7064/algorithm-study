#include <iostream>
using namespace std;

int main()
{
	int n, k;
	int count=0,j=0;
	int a[10000];
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
			a[j] = i;
			j++;
		}
	}
	if (count >= k)
		cout << a[k-1];
	else
		cout << 0;
}