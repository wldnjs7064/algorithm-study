#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int a,x;
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		cin >> x;
		a = x % 42;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	cout << v.size();

}