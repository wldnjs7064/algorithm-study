#include <iostream>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s[s.length() - 1] % 2 == 0)
			cout << "even" << "\n";
		else
			cout << "odd" << "\n";
	}

}