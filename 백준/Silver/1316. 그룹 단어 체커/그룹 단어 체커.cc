#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t, cnt = 0;
	string str;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> str;
		bool a[26] = { false, };
		a[(int)(str[0] - 'a')] = true;

		for (int i = 1; i < str.size(); i++)
		{
			if (str[i] == str[i - 1])
				continue;
			else if (str[i] != str[i - 1] && a[(int)(str[i] - 'a')] == true)
			{
				cnt++;
				break;
			}
			else
				a[(int)(str[i] - 'a')] = true;
		}
	}
	cout << t-cnt;
}