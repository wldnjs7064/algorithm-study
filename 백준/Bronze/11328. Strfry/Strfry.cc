#include <iostream>
using namespace std;

int arr1[26], arr2[26];

int main()
{
	int n;
	string s1, s2;
	cin >> n;
	bool T;
	while (n--)
	{
		for (int i = 0; i < 26; i++)
		{
			arr1[i] = 0;
			arr2[i] = 0;
		}
		cin >> s1 >> s2;
		T = true;
		for (int i = 0; i < s1.length(); i++)
			arr1[s1[i] - 'a']++;
		for (int i = 0; i < s2.length(); i++)
			arr2[s2[i] - 'a']++;
		for (int i = 0; i < 26; i++)
		{
			if (arr1[i] != arr2[i])
			{
				T = false;
				break;
			}
		}
		if (T)
			cout << "Possible\n";
		else
			cout << "Impossible\n";
	}
}