#include <iostream>
using namespace std;

int main()
{
	int k, n, m;
	int result = 0;
	cin >> k >> n >> m;
	result = k * n - m;
	if (result > 0)
		cout << result;
	else
		cout << "0";
}