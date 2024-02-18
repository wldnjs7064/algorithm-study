#include <iostream>
#include <vector>
using namespace std;

int d[10001];

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> v(n); 

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	d[0] = 1; 
	for (int i = 0; i < n; i++)
	{
		for (int j = v[i]; j <= k; j++)
		{
			d[j] += d[j - v[i]];
		}
	}
	cout << d[k]; 
}
