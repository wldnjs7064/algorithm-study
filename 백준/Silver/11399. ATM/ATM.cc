#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n, a[1000], sum = 0, result = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		result += sum;
	}
	cout << result;
}