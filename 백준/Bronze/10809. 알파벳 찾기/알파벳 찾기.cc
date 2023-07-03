#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	string answer;
	int cnt[26] = { 0, };
	for (char i='a';i<='z';i++)
	{
		cout << (int)s.find(i) << " ";
	}
}