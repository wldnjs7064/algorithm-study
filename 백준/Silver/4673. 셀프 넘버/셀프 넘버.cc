#include <iostream>
using namespace std;

int a[10001];
int d(int number)
{
	int sum = number;
	while (number)
	{
		sum += number % 10;
		number /= 10;
	}
	return sum;
}
int main()
{
	for (int i = 1; i <= 10000; i++)
	{
		int ret = d(i);
		if (ret<=10000) a[ret] = 1;
		if (!a[i]) cout << i << "\n";
	}
}