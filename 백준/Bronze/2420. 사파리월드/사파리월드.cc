#include <iostream>

int main()
{
	long long a, b;
	std::cin >> a >> b;
	if (a < b)
		std::cout << -(a - b);
	else
		std::cout << (a - b);
	return 0;
}