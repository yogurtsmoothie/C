#include <stdio.h>

int main()
{
	int a, b, c, d;
	int result;

	printf("ù ��° ����� ���� �Է��ϼ��� ==>");
	scanf_s("%d", &a);
	printf("�� ��° ����� ���� �Է��ϼ��� ==>");
	scanf_s("%d", &b);
	printf("�� ��° ����� ���� �Է��ϼ��� ==>");
	scanf_s("%d", &c);
	printf("�� ��° ����� ���� �Է��ϼ��� ==>");
	scanf_s("%d", &d);

	result = a + b + c + d;

	printf("%d + %d + %d + %d = %d \n", a, b, c, d, result);
}