#include <iostream>
using namespace std;

int arr[1001];
int main()
{
	int a, b;
	cin >> a >> b;
	int num = 1;
	int sum = 0;
	for (int i = 1; i <= 1000; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			arr[num] = i;
			if (num > 1000)
				break;
			num++;
		}
	}
	for (int i = a; i <= b; i++)
		sum += arr[i];
	cout << sum;
}