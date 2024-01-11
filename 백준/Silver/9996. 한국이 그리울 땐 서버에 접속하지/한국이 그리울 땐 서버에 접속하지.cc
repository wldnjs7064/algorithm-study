#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string star;
	cin >> n;
	cin >> star;

	int pos = star.find('*');
	string first = star.substr(0, pos);
	string last = star.substr(pos + 1, star.length() - first.length());

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		
		if (str.size() >= first.size() + last.size())
		{
			string compfirst = str.substr(0, first.length());
			string complast = str.substr(str.length() - last.length(), str.length());
			if (first == compfirst && last == complast)
				cout << "DA\n";
			else
				cout << "NE\n";
		}
		else
			cout << "NE\n";
	}
}