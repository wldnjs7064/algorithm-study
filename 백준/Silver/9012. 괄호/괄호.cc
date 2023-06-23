#include <iostream>
using namespace std;

int main()
{
	int t;
	string a;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int cnt = 0;
		cin >> a;
		for (int j = 0; j<a.length(); j++)
		{
			if (a[j] == '(') cnt++;
			else if (a[j] == ')') cnt--;
			if (cnt < 0) break;
		}
		if (cnt == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	
}