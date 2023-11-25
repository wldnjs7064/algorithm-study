#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int cnt=0;
	for (int i = 666;; i++)
	{
		int tmp = i;
		while (tmp >= 666)
		{
			if (tmp % 1000 == 666)
			{
				cnt++;
				break;
			}
			tmp /= 10;
		}
		if (n == cnt)
		{
			cout << i;
			break;
		}
	}
}