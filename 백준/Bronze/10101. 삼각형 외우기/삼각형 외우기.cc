#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b + c == 180)
	{
		if (a == b && b == c && c == a)
			cout << "Equilateral";
		if (a != b && b != c && c != a)
			cout << "Scalene";
		if (a == b && b != c || a == c && b != a || b == c && c != a)
			cout << "Isosceles";
	}
	else
		cout << "Error";
}