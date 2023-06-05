#include <iostream>
using namespace std;
int main()
{
	int n, x, y;
	int count_A = 0;
	int count_1 = 0;
	int count_2 = 0;
	int count_3 = 0;
	int count_4 = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		if (x > 0 && y > 0)
			count_1++;
		else if (x > 0 && y < 0)
			count_4++;
		else if (x < 0 && y>0)
			count_2++;
		else if (x < 0 && y < 0)
			count_3++;
		else if (x == 0 || y == 0)
			count_A++;
	}
	cout << "Q1: " << count_1<<"\n";
	cout << "Q2: " << count_2<<"\n";
	cout << "Q3: " << count_3<<"\n";
	cout << "Q4: " << count_4<<"\n";
	cout << "AXIS: " << count_A;
}