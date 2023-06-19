#include <iostream>
#include <list>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int m;
	cin >> m;
	list<char> L;
	for (auto c : s) L.push_back(c);
	auto cursor = L.end();
	while (m--)
	{
		char op;
		cin >> op;

		if (op == 'P')
		{
			char add;
			cin >> add;
			L.insert(cursor, add);
		}
		else if (op == 'L')
		{
			if (cursor != L.begin()) cursor--;
		}
		else if (op == 'D')
		{
			if (cursor != L.end()) cursor++;
		}
		else
		{
			if (cursor != L.begin())
			{
				cursor--;
				cursor = L.erase(cursor);
			}
		}
	}
	for (auto c : L) cout << c;
}