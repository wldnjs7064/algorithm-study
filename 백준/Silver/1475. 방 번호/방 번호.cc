#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[10];
int main()
{
	int n,num;
	cin >> n;
	if (n == 0)
		cout << 1;
	else
	{
		vector<int> arr(10, 0);
		while (n)
		{
			num = n % 10;
			n = n / 10;
			arr[num]++;
		}
		arr[6] = (arr[6] + arr[9] + 1) / 2;
		arr[9] = arr[6];
		cout << *max_element(arr.begin(), arr.end());
	}

}