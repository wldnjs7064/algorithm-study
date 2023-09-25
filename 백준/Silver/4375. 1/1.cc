#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int num = 0;
		for (int i = 0; i < n; i++)
		{
			num = num * 10 + 1;
			num %= n;
			if (num == 0)
			{
				cout << i+1 << "\n";
				break;
			}
		}
	}
}