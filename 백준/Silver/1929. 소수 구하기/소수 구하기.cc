#include <iostream>
using namespace std;

int main()
{
	int m, n, cnt = 0, flag;
	cin >> m >> n;
	for (int i = m; i <= n; i++)
	{
		flag = 1;
		if (i < 2)
			flag = 0;
		for (int j = 2; j * j <= i; j++) 
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1) cout << i << "\n";
	}
}