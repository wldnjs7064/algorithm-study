#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<double> real;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		real.push_back(x);
	}
	double m = *max_element(real.begin(), real.end());
	for (auto &i:real)
	{
		i = i / m * 100;
	}
	cout << accumulate(real.begin(),real.end(),0.0) / real.size();
}