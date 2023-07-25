#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {

	int N;
	int cnt = 1;

	scanf("%d", &N);

	stack <int> s;
	vector <char> ans;

	for (int i = 0; i < N; i++)
	{
		int x;
		 
		scanf("%d", &x);

		while (cnt <= x)
		{
			s.push(cnt);
			cnt += 1;
			ans.push_back('+');
		}

		if (s.top() == x)
		{
			s.pop();
			ans.push_back('-');
		}

		else
		{
			printf("NO");
			return 0;
		}
	}

	for (int i = 0; i < ans.size(); i++)
		printf("%c\n", ans[i]);

	return 0;
}