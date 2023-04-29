#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int x;
	for (int i = 0; i < 9; i++)
	{
		cin >> x;
		v.push_back(x);
	}
	
	int max = *max_element(v.begin(), v.end());
	cout << max << "\n";

	int max_index = max_element(v.begin(), v.end()) - v.begin()+1;
	cout << max_index;
}