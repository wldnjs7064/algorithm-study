#include <iostream>
using namespace std;

int main()
{
	int t, c, v;
	int mine, dad;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> c >> v;
		mine = c / v;
		dad = c % v;
		cout << "You get " << mine << " piece(s) and your dad gets "
			<< dad << " piece(s). \n";
	}
}
