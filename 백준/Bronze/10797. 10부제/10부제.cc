#include <iostream>
using namespace std;
int main()
{
	int n,m;
	int count = 0;
	cin >> n;
	for (int i = 0; i < 5; i++)
	{
		cin >> m;
		if (m == n)
			count++;
	}
	cout << count;
}