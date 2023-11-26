#include <iostream>
using namespace std;

int main()
{
	int si, bun;
	cin >> si >> bun;

	if (bun >= 45)
	{
		bun -= 45;
	}
	else
	{
		bun = 45 - bun;
		bun = 60 - bun;
		if (si == 0)
			si = 23;
		else
			si--;
	}
	cout << si << " " << bun;

}