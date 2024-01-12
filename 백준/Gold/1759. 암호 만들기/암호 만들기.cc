#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int l, c;
vector<string> v;
vector<string> ans;

void func(int k,int cnt)
{
	if (cnt == l)
	{
		int mo = 0, ja = 0;
		for (int i = 0; i < ans.size(); i++)
		{
			if (ans[i] == "a" || ans[i] == "e" || ans[i] == "i" || ans[i] == "o" || ans[i] == "u")
				mo++;
			else
				ja++;
		}
		if (mo >= 1 && ja >= 2)
		{
			for (int i=0;i<ans.size();i++)
				cout << ans[i];
			cout << "\n";
		}
		return;
	}
	for (int i = k; i < c; i++)
	{
		ans.push_back(v[i]);
		func(i + 1, cnt + 1);
		ans.pop_back();
	}
}
int main()
{
	cin >> l >> c;
	for (int i = 0; i < c; i++)
	{
		string c;
		cin >> c;
		v.push_back(c);
	}
	sort(v.begin(), v.end());
	func(0,0);
}