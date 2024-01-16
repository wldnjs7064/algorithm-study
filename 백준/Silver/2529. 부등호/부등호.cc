#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int k;
char operators[10];
bool visited[10];
string Min = "9876543210";
string Max = "0123456789";

bool check(int a, int b, char op)
{
	if (op == '<')
		return a < b;
	else
		return a > b;
}
void dfs_min(int depth, string num)
{
	if (depth == k + 1)
	{
		Min = min(Min, num);
		return;
	}
	for (int i = 0; i <= 9; i++)
	{
		if (!visited[i])
		{
			if (depth == 0 || check(num.back() - '0', i, operators[depth - 1]))
			{
				visited[i] = true;
				dfs_min(depth + 1, num + to_string(i));
				visited[i] = false;
			}
		}
	}
}
void dfs_max(int depth, string num)
{
	if (depth == k + 1)
	{
		Max = max(Max, num);
		return;
	}
	for (int i = 9; i >= 0; i--)
	{
		if (!visited[i])
		{
			if (depth == 0 || check(num.back() - '0', i, operators[depth - 1]))
			{
				visited[i] = true;
				dfs_max(depth + 1, num + to_string(i));
				visited[i] = false;
			}
		}
	}
}
int main()
{
	cin >> k;
	for (int i = 0; i < k; i++)
		cin >> operators[i];
	dfs_min(0, "");
	dfs_max(0, "");
	cout << Max << "\n" << Min << "\n";
}