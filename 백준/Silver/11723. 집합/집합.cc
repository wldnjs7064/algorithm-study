#include <iostream>
using namespace std;

int arr[21];
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string str;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		if (str == "add")
		{
			int x;
			cin >> x;
			if (arr[x] == 0)
				arr[x] = 1;
		}
		else if (str == "check")
		{
			int x;
			cin >> x;
			if (arr[x] == 0)
				cout << "0\n";
			else
				cout << "1\n";
		}
		else if (str == "remove")
		{
			int x;
			cin >> x;
			if (arr[x] == 1)
				arr[x] = 0;
		}
		else if (str == "toggle")
		{
			int x;
			cin >> x;
			if (arr[x] == 1)
				arr[x] = 0;
			else
				arr[x] = 1;
		}
		else if (str == "empty")
		{
			for (int j = 0; j < 20; j++)
				arr[j] = 0;
		}
		else if (str == "all")
		{
			for (int j = 1; j <= 20; j++)
				arr[j] = 1;
		}
	}

}