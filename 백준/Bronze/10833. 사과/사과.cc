#include <iostream>
using namespace std;


int main()
{
	int n, a, b,apple=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		apple += b%a;
	}
	cout << apple;
}
