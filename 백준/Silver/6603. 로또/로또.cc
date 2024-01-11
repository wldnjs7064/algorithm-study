#include <iostream>
#include <vector>
using namespace std;

int k;
void dfs(vector<int>& numbers, vector<int>& combi, int index, int k)
{
	if (combi.size() == 6)
	{
		for (int i = 0; i < 6; i++)
		{
			if (i > 0) cout << " ";
			cout << combi[i];
		}
		cout << "\n";
		return;
	}
	for (int i = index; i < k; i++)
	{
		combi.push_back(numbers[i]);
		dfs(numbers, combi, i + 1, k);
		combi.pop_back();
	}
}

int main()
{
	while (1)
	{
		cin >> k;
		if (k == 0) break;
		vector<int> v(k);
		for (int i = 0; i < k; i++)
			cin >> v[i];
		vector<int> combi;
		dfs(v, combi, 0, k);
		cout << "\n";
	}

	return 0;
}
