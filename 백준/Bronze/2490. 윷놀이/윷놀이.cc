#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	for (int i = 0; i < 3; i++)
	{
		int a, b, c, d;
		int sum = 0;
		cin >> a >> b >> c >> d;
		sum = a + b + c + d;
		if (sum == 0)
			cout << "D" << "\n";
		else if (sum == 1)
			cout << "C" << "\n";
		else if (sum == 2)
			cout << "B" << "\n";
		else if (sum == 3)
			cout << "A" << "\n";
		else
			cout << "E" << "\n";
	}
}