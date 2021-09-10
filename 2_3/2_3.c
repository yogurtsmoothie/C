#include <stdio.h>

int main()
{
	int a, b, c;
	int result;

	printf("첫번째 계산할 값을 입력하세요 ==>");
	scanf_s("%d", &a);

	printf("두번째 계산할 값을 입력하세요 ==>");
	scanf_s("%d", &b);

	printf("세번째 계산할 값을 입력하세요 ==>");
	scanf_s("%d", &c);

	result = a + b + c;
	printf(" %d + %d + %d = %d \n", a, b, c, result);

	result = a * b * c;
	printf(" %d * %d * %d = %d \n", a, b, c, result);
}