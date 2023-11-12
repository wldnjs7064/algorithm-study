#include <iostream>
using namespace std;

int a[101];
int main()
{
	int n;
	cin >> n;
	int max = 0,res;
	for (int i = 1; i <= n; i++)
	{
		cin >> i;
		for (int j = 0; j <= 100; j++)
		{
			a[j] = 0;
		}
		for (int j = 0; j < 1000; j++)
		{
			int score;
			cin >> score;
			a[score]++;
		}
		for (int j = 0; j < 100; j++)
		{
			if (a[max] <= a[j])
				max = j;
		}
		cout << "#" << i << " " << max << "\n";

	}
}