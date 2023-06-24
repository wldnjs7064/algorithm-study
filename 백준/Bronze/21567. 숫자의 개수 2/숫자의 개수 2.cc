#include <iostream>
using namespace std;

int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	long long result = a * b * c;
	int cnt[10] = { 0 };

	while (result != 0)
	{
		int n = result % 10;
		cnt[n]++;
		result = result / 10;
	}
	for (int i = 0; i < 10; i++)
		cout << cnt[i]<< "\n";
}