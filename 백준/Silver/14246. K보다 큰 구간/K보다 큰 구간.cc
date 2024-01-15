#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

int n;
ll k, ans = 0;
int main()
{
	cin >> n;
	vector<ll> arr(n + 1);
	vector<ll> arr2(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}
	arr2 = arr;
	sort(arr2.begin(), arr2.end());
	cin >> k;

	for (int i = 1; i <= n; i++)
	{
		ll ret = arr[i] - k;
		ans += lower_bound(arr2.begin(), arr2.end(), ret) - arr2.begin();
	}
	cout << ans << "\n";
}