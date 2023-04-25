#include <iostream>
using namespace std;
unsigned long long factorial(int a)
{
	if (a <= 1)
		return 1;
	return a * factorial(a - 1);
}

int main()
{
	int a;
	cin >> a;
	unsigned long long result = 0;
	result = factorial(a);
	cout << result;
}