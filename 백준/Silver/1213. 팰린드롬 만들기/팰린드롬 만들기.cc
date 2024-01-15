#include <iostream>
#include <string>
using namespace std;

int cnt[26];
char mid;
int main()
{
	string s, ret;
	int flag = 0;
	cin >> s;
	for (char a : s) cnt[a]++;
	for (int i = 'Z'; i >= 'A'; i--)
	{
		if (cnt[i] % 2 == 1)
		{
			mid = char(i);
			flag++;
			cnt[i]--;
		}
		if (flag == 2) break;
		for (int j = 0; j < cnt[i]; j += 2)
		{
			ret = char(i) + ret;
			ret += char(i);
		}
	}
	if (mid) 
		ret.insert(ret.begin() + ret.size() / 2, mid);
	if (flag == 2) cout << "I'm Sorry Hansoo";
	else
		cout << ret;
}