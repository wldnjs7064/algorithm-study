#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 1000000;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<long long> d(MAX + 1, 1);
	for (int i = 2; i <= MAX; i++)
	{
		for (int j = 1; i * j <= MAX; j++)
		{
			d[i * j] += i;
		}
	}
	vector<long long> s(MAX + 1);
	for (int i = 1; i <=MAX; i++)
	{
		s[i] = s[i - 1] + d[i];
	}

	int n;
	cin >> n;
	while(n--)
	{
		int x;
		cin >> x;
		cout << s[x] << "\n";
	}
	
}