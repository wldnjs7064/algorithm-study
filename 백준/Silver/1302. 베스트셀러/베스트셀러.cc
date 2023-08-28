#include <iostream>
#include <map>
using namespace std;

int main()
{
	string str, res;
	map<string, int> book;
	int n, max = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		book[str]++;
	}
	for (auto a : book)
	{
		if (a.second > max)
		{
			max = a.second;
			res = a.first;
		}
	}
	cout << res;
}