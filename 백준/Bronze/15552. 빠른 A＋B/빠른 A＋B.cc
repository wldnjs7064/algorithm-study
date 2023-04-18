#include <iostream>
using namespace std;

int main()
{
	//입출력 속도 높이기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,a,b;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a >> b;
		std::cout << (a + b) << "\n";
	}
	return 0;
}