#include <iostream>
using namespace std;
int main()
{
	int n, m, max = -1000000, min = 1000000;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		if (m > max)
			max = m;
		if (m < min)
			min = m;
	}
	cout << min <<" "<< max;
}