#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 2; j <= i; j++)
			cout << " ";
		for (int k = n; k >= i; k--)
			cout << "*";
		cout << "\n";
	}
}