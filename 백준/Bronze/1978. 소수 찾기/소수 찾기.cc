#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int result = 0, cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int answer;
		cin >> answer;
		for (int div = 1; div <= answer; div++)
		{
			if (answer % div == 0)
				cnt++;
		}
		if (cnt == 2)
			result++;
		cnt = 0;
	}
	cout << result;
}