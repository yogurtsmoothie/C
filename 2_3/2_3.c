#include <stdio.h>

int main()
{
	int a, b;
	int result;

	printf("ù��° ����� ���� �Է��ϼ��� ==>");
	scanf_s("%d", &a);

	printf("�ι�° ����� ���� �Է��ϼ��� ==>");
	scanf_s("%d", &b);

	result = a + b;
	printf(" %d + %d = %d \n", a, b, result);

	result = a - b;
	printf(" %d - %d = %d \n", a, b, result);

	result = a * b;
	printf(" %d * %d = %d \n", a, b, result);

	result = a / b;
	printf(" %d / %d = %d \n", a, b, result);
}