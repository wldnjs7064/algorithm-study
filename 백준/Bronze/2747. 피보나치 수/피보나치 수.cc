#include <iostream>
using namespace std;

int fibo(int n)
{
	int before = 0, cur = 1, i, temp;
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else {
		for (i = 1; i < n; i++)
		{
			temp = cur;
			cur = before + cur;
			before = temp;
		}
		return cur;
	}
}

int main()
{
	int n;
	cin >> n;
	cout<<fibo(n);
}