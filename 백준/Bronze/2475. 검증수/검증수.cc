#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e;
	int total;
	cin >> a >> b >> c >> d >> e;

	total = a * a + b * b + c * c + d * d + e * e;
	cout << total % 10;
}