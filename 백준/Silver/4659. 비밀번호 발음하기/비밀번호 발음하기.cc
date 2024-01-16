#include <iostream>
#include <string>
using namespace std;

bool one(string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			return true;
	}
	return false;
}
bool two(string str)
{
	int ja = 0;
	int mo = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
			if (ja != 0)
				ja = 0;
			mo++;
		}
		else
		{
			if (mo != 0)
				mo = 0;
			ja++;
		}

		if (mo >= 3 || ja >= 3) return false;
	}
	return true;
}
bool three(string str)
{
	for (int i = 1; i <= str.length(); i++)
	{
		if (str[i] == str[i - 1])
		{
			if (str[i] == 'e' || str[i] == 'o')
				continue;
			else
				return false;
		}
	}
	return true;
}
int main()
{
	string str;
	while (1)
	{
		if (str == "end") break;
		cin >> str;
		if (str != "end")
		{
			if (one(str) && two(str) && three(str))
				cout << "<" << str << ">" << " is acceptable." << "\n";
			else
				cout << "<" << str << ">" << " is not acceptable." << "\n";
		}
	}
}