#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	int n, m;
	map<string, string> map;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string cite;
		string pwd;
		cin >> cite >> pwd;
		map.insert({ cite,pwd });
	}
	for (int i = 0; i < m; i++)
	{
		string find;
		cin >> find;
		
		auto it = map.find(find);
		if (it != map.end())
			cout << it->second << "\n";
	}
}