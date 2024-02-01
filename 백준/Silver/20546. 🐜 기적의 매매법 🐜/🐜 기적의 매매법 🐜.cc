#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int m;
	cin >> m;
	vector<int> v;
	for (int i = 0; i < 14; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	int jun = 0, sung = 0;
	int junM = m;
	int sungM = m;

	int up = 0, down = 0;
	for (int i = 0; i < 14; i++)
	{
		// 준현
		if (v[i] <= junM)
		{
			jun += junM / v[i];
			junM %= v[i];
		}
		// 성민
		if (i > 0)
		{
			if (v[i - 1] < v[i])
			{
				up++;
				down = 0;
			}
			else if (v[i - 1] > v[i])
			{
				up = 0;
				down++;
			}
			else if (v[i - 1] == v[i])
			{
				up = 0;
				down = 0;
			}
			if (up >= 3)
			{
				sungM += v[i] * sung; //매도
				sung = 0;
			}
			else if (down >= 3)
			{
				if (v[i] <= sungM)
				{
					sung += sungM / v[i]; //매수
					sungM %= v[i];
				}
			}
		}
	}

	int junA = junM + jun * v[13];
	int sunA = sungM + sung * v[13];
	//cout << junA << " " << sunA;

	if (junA > sunA)
		cout << "BNP";
	else if (junA == sunA)
		cout << "SAMESAME";
	else
		cout << "TIMING";
}
