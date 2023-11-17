#include <iostream>
#include <list>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m;
	cin >> m;
	while (m--)
	{
		list<char> L;
		list<char>::iterator iter = L.begin();
		string s;
		cin >> s;
		for (auto c : s)
		{
			if (c == '-')
			{
				if (iter != L.begin())
					iter = L.erase(--iter);
			}
			else if (c == '<')
			{
				if (iter != L.begin())
					iter--;
			}
			else if (c == '>')
			{
				if (iter != L.end())
					iter++;
			}
			else
				L.insert(iter, c);
		}
		for (auto c : L) cout << c;
		cout << "\n";
	}
}