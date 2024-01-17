#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string ret;
vector<string> v;
void go()
{
	while (1)
	{
		if (ret.size() && ret.front() == '0') ret.erase(ret.begin());
		else break;
	}
	if (ret.size() == 0) ret = "0";
	v.push_back(ret);
	ret = "";
}
bool cmp(string a, string b)
{
	if (a.size() == b.size()) return a < b;
	return a.size() < b.size();
}
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		string str;
		cin >> str;
		for (int i = 0; i < str.length(); i++)
		{
			if (isdigit(str[i])) ret += str[i];
			else if (ret.size()) go();
		}
		if (ret.size()) go();
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";
}