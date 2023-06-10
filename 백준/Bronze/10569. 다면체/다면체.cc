#include <iostream>
using namespace std;


int main()
{
	int t, v, e, meon;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> v >> e;
		meon = 2 + e - v;
		cout << meon << "\n";
	}
}
