#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int a[26];
int main()
{
	vector<string> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		a[str[0] - 'a']++;
	}
	bool selected = false;
	for (int i = 0; i < 26; i++)
	{
		if (a[i] >= 5)
		{
			cout << char('a' + i);
			selected = true;
		}
	}
	if (!selected)
		cout << "PREDAJA";
	return 0;
}