#include <iostream>
using namespace std;

int main()
{
	int n,cnt=0;
	cin >> n;
	int money = 1000 - n;
	int coin_types[6] = { 500,100,50,10,5,1 };
	for (int i = 0; i < 6; i++)
	{
		cnt += money/coin_types[i];
		money %= coin_types[i];
	}
	cout << cnt;
}