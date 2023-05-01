#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a, b, card[21];
	for (int i = 0; i < 21; i++)
		card[i] = i;
	for (int i = 0; i < 10; i++)
	{
		cin >> a >> b;
		reverse(card + a, card + b + 1);
	}
	for (int i = 1; i < 21; i++)
		cout << card[i] << ' ';
}