#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a > b)
		swap(a, b);
	if (a != b)
	{
		cout << b - a - 1 << "\n";
		for (int i = a + 1; i < b; i++)
			cout << i << " ";
	}
	else
		cout << 0;
}