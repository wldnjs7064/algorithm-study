#include <iostream>
using namespace std;

int main()
{
	int x;
	int sum=0,cnt = 0;
	int min = 100;
	for (int i = 0; i < 7; i++)
	{
		cin >> x;

		if (x % 2 == 1)
		{
			sum += x;
			cnt++;
			
			if (x < min)
				min = x;
		}
	}
	if (cnt == 0)
		cout << "-1" << "\n";
	else 
		cout << sum << "\n" << min;
}