#include <iostream>
using namespace std;

int room(int a, int b)
{
	if (a == 0) return b;
	else if (b == 1) return 1;
	return (room(a - 1, b) + room(a, b - 1));
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int k, n;
		cin >> k >> n;
		cout << room(k, n) << "\n";
	}
}