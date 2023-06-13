#include <iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int j = s.length() - 1;
	int count = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == s[j--])
			count++;
	}
	if (count == s.length())
		cout << 1;
	else
		cout << 0;
}