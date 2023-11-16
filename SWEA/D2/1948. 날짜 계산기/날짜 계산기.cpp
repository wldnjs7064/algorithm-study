#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int a[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	for (int test_case = 0; test_case < t; test_case++)
	{
		int m1, m2, d1, d2;
		cin >> m1 >> d1 >> m2 >> d2;
		int result = 0;
		for (int i = m1; i <= m2; i++)
		{
			if (i == m2)
			{
				result += d2 - d1 + 1;
				continue;
			}
			result += a[i];
		}
		cout << "#" << test_case+1 << " " << result << "\n";
	}
}