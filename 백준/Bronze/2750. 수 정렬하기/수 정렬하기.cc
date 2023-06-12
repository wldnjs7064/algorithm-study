#include <iostream>
using namespace std;

int main()
{
	int n,a[1000];
	int temp;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = n; i > 1; i--)
	{
		for (int j = 0; j<i-1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << "\n";
}
