#include <iostream>
using namespace std;

int a[101];
int main()
{
	int num;
	int max = 0;
	int n;
	cin >> n;
	for (int j = 1; j <= n; j++)
	{
		cin >> j;
		for (int i = 0; i <= 100; i++)
		{
			a[i] = 0;
		}
		for (int i = 0; i < 1000; i++)
		{
			cin >> num;
			a[num]++;
		}
		int answer = 0;
		for (int i = 0; i <= 100; i++)
		{
			if (a[i] >= a[answer])
			{
				answer = i;
			}
		}
		cout << "#" << j << " " << answer << "\n";
	}
}