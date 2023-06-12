#include <iostream>
using namespace std;

int main()
{
	int n,a[100],score=0,bonus=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == 1)
		{
			score++;
			if (a[i - 1] == 1)
			{
				bonus++;
				score += bonus;
			}
			else bonus = 0;
		}
	}
	cout << score;
}
