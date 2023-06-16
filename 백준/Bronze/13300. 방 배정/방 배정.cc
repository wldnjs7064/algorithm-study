#include <iostream>
using namespace std;

int male[7], female[7];

int main()
{
	int n,k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int s, y;
		cin >> s >> y;
		if (s == 0)
			female[y]++;
		else if (s == 1)
			male[y]++;
	}
	int room = 0;
	for (int i = 1; i <= 6; i++)
	{
		if (male[i] % k == 0) room += male[i] / k;
		else room += male[i] / k + 1;
	}
	for (int i = 1; i <= 6; i++)
	{
		if (female[i] % k == 0) room += female[i] / k;
		else room += female[i] / k + 1;
	}
	cout << room;
}