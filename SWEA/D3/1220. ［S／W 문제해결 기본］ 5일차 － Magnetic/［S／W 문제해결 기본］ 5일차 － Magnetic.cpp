#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[100][100];
int main()
{
	int t;
	t = 10;
	for (int test_case = 1; test_case <= t; test_case++)
	{
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				a[i][j] = 0;
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				cin >> a[i][j];
		}
		
		int answer = 0;
		for (int j = 0; j < n; j++)
		{
			bool flag = false;
			for (int i = 0; i < n; i++)
			{
				if (a[i][j] == 1 && flag == false)
				{
					flag = true;
				}
				if (a[i][j] == 2 && flag == true)
				{
					flag = false;
					answer++;
				}
				
			}
		}
		cout << "#" << test_case << " " << answer << "\n";
	}
}