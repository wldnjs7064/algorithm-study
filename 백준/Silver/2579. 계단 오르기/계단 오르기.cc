#include <iostream>
#include <algorithm>
using namespace std;

int step[301];
int d[301];
int main()
{
	int n;
	cin >> n;
	for (int i = 1;i <=n; i++)
	{
		cin >> step[i];
	}
	d[1] = step[1];
	d[2] = step[2] + step[1];
	d[3] = step[3] + max(step[1], step[2]);
	
	for (int i = 4; i <= 300; i++)
	{
		d[i] = step[i] + max(step[i - 1] + d[i - 3], d[i - 2]);
	}
	cout << d[n];
}