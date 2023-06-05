#include <iostream>
using namespace std;
int main()
{
	int n, m;
	int count = 0, count_1 = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		if (m == 0)
			count++;
		if (m == 1)
			count_1++;
	}
	if (count < count_1)
		cout << "Junhee is cute!";
	else
		cout << "Junhee is not cute!";
}