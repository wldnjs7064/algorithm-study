#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
		sum += v[i];
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < 8; i++)
	{
		for (int j = 1; j < 9; j++)
		{
			if (sum - v[i] - v[j] == 100)
			{
				for (int z = 0; z < 9; z++)
				{
					if (z != i && z != j)
						cout << v[z] << "\n";
				}
				return 0;
			}
		}
	}
	

}