#include <iostream>
using namespace std;

int main()
{
	int n;
	int a[20];
	int y = 0;
	int m = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		y += ((a[i] / 30) + 1) * 10;
		m += ((a[i] / 60) + 1) * 15;
	}
	if (y < m)
		cout << "Y " << y;
	else if (y > m)
		cout << "M " << m;
	else
		cout << "Y M " << y;
}