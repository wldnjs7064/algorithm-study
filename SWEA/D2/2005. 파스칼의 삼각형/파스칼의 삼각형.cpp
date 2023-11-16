#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int a[10][10];
	a[0][0] = 1;
	for (int j = 0; j < 10; j++)
	{
		for (int k = 0; k <= j; k++)
		{
			if (k == 0 || k == j) a[j][k] = 1;
			else
				a[j][k] = a[j - 1][k - 1] + a[j - 1][k];
		}
	}
	
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		cout << "#" << i+1 << "\n";
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k <= j; k++)
				cout << a[j][k] << " ";
			cout << "\n";
		}
	}
}