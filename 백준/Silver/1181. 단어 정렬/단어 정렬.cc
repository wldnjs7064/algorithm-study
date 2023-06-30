#include <iostream>
#include <algorithm>
using namespace std;
string arr[20000];
int compare(string a, string b)
{
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n, compare);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == arr[i - 1])
			continue;
		cout << arr[i] << "\n";
	}
}