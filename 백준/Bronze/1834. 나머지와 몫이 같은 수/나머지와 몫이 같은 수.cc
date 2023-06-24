#include <iostream>
using namespace std;

int main()
{
	long long n;
	long long sum = 0;
	cin >> n;
	if (n == 1)
		cout << '0';
	else
	{
		for (long long i = 1; i < n; i++)
		{
			sum += (n+1) * i;
		}
		cout << sum;
	}
}