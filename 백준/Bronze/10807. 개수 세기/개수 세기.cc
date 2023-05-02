#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> vec(n);
	for (int i = 0; i < n; i++)
		cin >> vec[i];
	int v;
	int cnt = 0;
	cin >> v;
	for (int i = 0; i < vec.size(); i++)
	{
		if (v == vec[i])
			cnt++;
	}
	cout << cnt;

}