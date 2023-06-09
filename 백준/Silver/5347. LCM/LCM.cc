#include <iostream>
using namespace std;

long long int gcd(long long int a, long long int b)
{
	long long int n;
	while (b != 0)
	{
		n = a % b;
		a = b;
		b = n;
	}
	return a;
}

long long int lcm(long long int a, long long int b)
{
	return (a * b / gcd(a, b));
}

int main()
{
	int t;
	long long int a, b;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		cout << lcm(a, b) << "\n";
	}
}