#include <stdio.h>

int main()
{
	int a, b, c;
	int result;

	printf("ù��° ����� ���� �Է��ϼ��� ==>");
	scanf_s("%d", &a);

	printf("�ι�° ����� ���� �Է��ϼ��� ==>");
	scanf_s("%d", &b);

	printf("����° ����� ���� �Է��ϼ��� ==>");
	scanf_s("%d", &c);

	result = a + b + c;
	printf(" %d + %d + %d = %d \n", a, b, c, result);

	result = a * b * c;
	printf(" %d * %d * %d = %d \n", a, b, c, result);
}