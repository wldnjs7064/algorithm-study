#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	cin >> str;
	string str2 = str;
	reverse(str2.begin(), str2.end());
	if (str == str2)
		cout << 1;
	else
		cout << 0;
	return 0;
}