#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		vector<string> v;
		int h, w, n;
		cin >> h >> w >> n;
		for (int i = 1; i <= h; i++)
		{
			v.push_back(to_string(i) + "01");
		}
		for (int i = 2; i <= w; i++)
		{
			for (int j = 1; j <= h; j++)
			{
				v.push_back(to_string(j) + (i < 10 ? "0" : "") + to_string(i)); // 수정된 부분
			}
		}
		cout << v[n-1] << "\n";
	}
}