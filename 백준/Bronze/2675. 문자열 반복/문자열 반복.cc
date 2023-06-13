#include <iostream>
using namespace std;
int main()
{
	int t,a;
	string s;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a;
		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			for (int k = 0; k < a; k++)
			{
				cout << s[j];
			}
		}
		cout << "\n";
	}
}