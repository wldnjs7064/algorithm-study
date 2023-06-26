#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, a, b;
	int result1 = 100;
	int result2 = 100;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		if (a > b)
			result1 -= a;
		else if (a < b)
			result2 -= b;
	}
	cout << result2<<"\n";
	cout << result1;
}