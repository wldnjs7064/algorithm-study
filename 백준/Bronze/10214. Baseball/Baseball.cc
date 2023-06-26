#include <iostream>
using namespace std;

int main()
{
	int t,y,k;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int sum1 = 0;
		int sum2 = 0;
		for (int j = 0; j < 9; j++)
		{
			cin >> y >> k;
			sum1 += y;
			sum2 += k;
		}
		if (sum1 > sum2)
			cout << "Yonsei" << "\n";
		else if (sum1 < sum2)
			cout << "Korea" << "\n";
		else
			cout << "Draw" << "\n";
	}
	return 0;
}