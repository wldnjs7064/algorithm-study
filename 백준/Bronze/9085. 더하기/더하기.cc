#include <iostream>
using namespace std;

int main()
{
	int t,a,b;
	int sum = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a;
		for (int j = 0; j < a; j++)
		{
			cin >> b;
			sum += b;
		}
		cout << sum << "\n";
		sum = 0;
	}
}