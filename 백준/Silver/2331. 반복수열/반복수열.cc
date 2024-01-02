#include <iostream>
#include <cmath>
#include <deque>
#include <algorithm>
using namespace std;

int next(int d, int p)
{
	int total = 0;
	while (d > 0)
	{
		total += pow((d % 10), p);
		d /= 10;
	}
	return total;
}
int main()
{
	int a, p,res;
	cin >> a >> p;
	deque<int> dq;
	deque<int>::iterator it;
	dq.push_back(a);

	while (1)
	{
		a = next(a, p);
		it = find(dq.begin(), dq.end(), a);
		if (it != dq.end())
		{
			res = it - dq.begin();
			break;
		}
		dq.push_back(a);
	}
	cout << res;
}