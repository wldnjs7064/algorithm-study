#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<string, string> a, pair<string, string> b)
{
	if (a.first == b.first)
		return a.second > b.second;
	else
		return a.first < b.first;
}
int main()
{
	int n;
	cin >> n;
	vector<pair<string,string>> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end(),compare);
	for (int i = 0; i < n; i++)
		cout << v[i].first <<" "<< v[i].second<<"\n";
}