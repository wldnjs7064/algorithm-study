#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long long num = 0;
	for (int i = 1; i <= n; i++)
	{
		num += i * (n / i);
	}
	cout << num;
	
}