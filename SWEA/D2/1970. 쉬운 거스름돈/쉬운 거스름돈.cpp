#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int money[] = { 50000,10000,5000,1000,500,100,50,10 };
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		cout << "#" << i + 1 << "\n";
		for (int j = 0; j < 8; j++)
		{
			cout << x / money[j] << " ";
			x %= money[j];
		}
		cout << "\n";
	}
}