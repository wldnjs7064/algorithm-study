#include <iostream>
#include <algorithm>
using namespace std;

int a[100000];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, answer = 2000000000;
	cin >> n;
	int left = 0, right = n - 1;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	while (left < right)
	{
		int sum = a[left] + a[right];
		if (abs(sum) < abs(answer))
			answer = sum;
		
		if (sum < 0)
			left++;
		else
			right--;
		
	}
	cout << answer << "\n";
}