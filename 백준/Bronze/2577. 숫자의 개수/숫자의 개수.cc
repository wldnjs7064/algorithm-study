#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int length = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	int multi = a * b * c;
	int arr[10] = { 0 };
	while (multi)
	{
		arr[multi % 10] += 1;
		multi /= 10;
	}
	for (int i = 0; i < 10; i++)
		cout << arr[i] << "\n";
}