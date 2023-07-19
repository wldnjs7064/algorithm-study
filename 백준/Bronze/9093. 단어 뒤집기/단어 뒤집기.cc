#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	string str;
	for (int i = 0; i < t; i++)
	{
		getline(cin, str);
		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] == ' ')
			{
				for (int k = j - 1; str[k] != ' ' && k >= 0; k--)
					cout << str[k];
				cout << " ";
			}
		}

			for (int j = str.size() - 1; str[j] != ' ' && j >= 0; j--)
				cout << str[j];
			cout << "\n";
	}

}