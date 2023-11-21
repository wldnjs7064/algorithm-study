#include <iostream>
#include <string>
using namespace std;

int a[26];
int main()
{
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'a'&&str[i] <= 'z')
			str[i] = str[i] - 32;
		a[str[i]-'A']++;
	}
	int max = 0, res, cnt = 0;
	for (int i = 0; i < 26; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			res = i;
			cnt = 1;
		}
		else if (max == a[i])
			cnt++;
	}
	if (cnt > 1)
		cout << '?';
	else
		cout << char('A'+res);
	
}