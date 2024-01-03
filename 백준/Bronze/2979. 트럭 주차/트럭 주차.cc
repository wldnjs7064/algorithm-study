#include <iostream>
using namespace std;

int arr[101];
int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	for (int i = 0; i < 3; i++)
	{
		int s, e;
		cin >> s >> e;
		for (int j = s; j < e; j++) arr[j]++;
	}
	int sum = 0;
	for (int i = 0; i < 100; i++)
	{
		if (arr[i] == 1) sum += a;
		else if (arr[i] == 2) sum += b * 2;
		else if (arr[i] == 3) sum += c * 3;
	}
	cout << sum;
}