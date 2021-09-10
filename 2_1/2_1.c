#include <stdio.h>

int main()
{
	int a, b;
	int result;

	a = 1234;
	b = 456;

	result = a + b;
	printf(" %d + %d = %d \n", a, b, result);

	result = a - b;
	printf(" %d - %d = %d \n", a, b, result);

	result = a * b;
	printf(" %d * %d = %d \n", a, b, result);

	result = a / b;
	printf(" %d / %d = %d \n", a, b, result);
}