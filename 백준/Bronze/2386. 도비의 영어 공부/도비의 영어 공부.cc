#include <iostream>
#include <string>
using namespace std;

int main()
{
	char ch;
	string s;
	while (true)
	{
		cin >> ch;
		getline(cin, s);
		if (ch == '#')
			break;
		int cnt = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (ch == s[i] || ch == tolower(s[i]))
				cnt++;
		}
		cout << ch << " " << cnt << "\n";
		
	}
}