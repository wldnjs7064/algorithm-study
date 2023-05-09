#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n;
	while (1)
	{
		int sum = 0;
		getline(cin, n);
		for (int i = 0; i < n.length(); i++)
		{
			if (n[i] == '1')
				sum += 2;
			else if (n[i] == '0')
				sum += 4;
			else
				sum += 3;
			sum++;
		}
		if (n=="0")
			break;
		cout << sum+1 << '\n';
	}
}