#include <stdio.h>
int main()
{
	long double a;
	long double b;

	scanf("%Lf %Lf", &a, &b);

	printf("%.13Lf", a / b);

}