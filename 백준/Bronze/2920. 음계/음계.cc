#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int x;
	vector<int> v;
	string answer="";
	for (int i = 0; i < 8; i++)
	{
		cin >> x;
		v.push_back(x);
	}
	for (int i = 0; i < v.size()-1; i++)
	{
		if (v[i + 1] == v[i] + 1)
			answer="ascending";
		else if (v[i + 1] == v[i] - 1)
			answer="descending";
		else
		{
			answer = "mixed";
			break;
		}
	}
	cout << answer;
}