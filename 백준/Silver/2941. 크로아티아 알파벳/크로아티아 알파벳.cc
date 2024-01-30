#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'c'&&s[i + 1] == '=')
		{
			cnt++;
			i++;
			continue;
		}
		else if (s[i] == 'c'&&s[i + 1] == '-')
		{
			cnt++;
			i++;
			continue;
		}
		else if (s[i] == 'd'&&s[i + 1] == 'z'&&s[i + 2] == '=')
		{
			cnt++;
			i = i + 2;
			continue;
		}
		else if (s[i] == 'd'&&s[i + 1] == '-')
		{
			cnt++;
			i++;
			continue;
		}
		else if (s[i] == 'l'&&s[i + 1] == 'j')
		{
			cnt++;
			i++;
			continue;
		}
		else if (s[i] == 'n'&&s[i + 1] == 'j')
		{
			cnt++;
			i++;
			continue;
		}
		else if (s[i] == 's'&&s[i + 1] == '=')
		{
			cnt++;
			i++;
			continue;
		}
		else if (s[i] == 'z'&&s[i + 1] == '=')
		{
			cnt++;
			i++;
			continue;
		}
		else
			cnt++;
	}
	cout << cnt;
}