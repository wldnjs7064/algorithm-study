#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int arr[1000];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		int cnt = 1;
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == 'O')
			{
				sum += cnt;
				cnt++;
			}
			else
				cnt = 1;
		}
		cout << sum << "\n";
	}
}