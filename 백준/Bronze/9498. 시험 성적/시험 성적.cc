#include <iostream>

int main()
{
	int  grade;
	std::cin >> grade;
	if (grade >= 90 && grade < 101)
		std::cout << 'A';
	else if (grade >= 80 && grade < 90)
		std::cout << 'B';
	else if (grade >= 70 && grade < 80)
		std::cout << 'C';
	else if (grade >= 60 && grade < 70)
		std::cout << 'D';
	else
		std::cout << 'F';
}