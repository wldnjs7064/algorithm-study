#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<int> v;
	vector<int> v2;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x); //원본
		v2.push_back(x); //정렬
	}
	sort(v2.begin(), v2.end());
	v2.erase(unique(v2.begin(), v2.end()), v2.end());

	for (int i = 0; i < n; i++)
	{
		cout << lower_bound(v2.begin(), v2.end(), v[i]) - v2.begin() << " ";
	}
	
}