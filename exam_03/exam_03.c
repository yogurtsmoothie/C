#include <stdio.h>

int main()
{
	int a, b;
	int result;
	char k;

	printf("ù��° ����� �� ==> ");
	scanf_s("%d", &a);
	printf("+ - * / % ==> ");
	scanf_s(" %c", &k);
	printf("�ι�° ����� �� ==> ");
	scanf_s("%d", &b);

	if (k == '+') {
		result = a + b;
		printf(" %d + %d = %d \n", a, b, result);
	}

	if (k == '-') {
		result = a - b;
		printf(" %d - %d = %d \n", a, b, result);
	}

	if (k == '*') {
		result = a * b;
		printf(" %d * %d = %d \n", a, b, result);
	}

	if (k == '/') {
		if (b != 0) {
			result = a / b;
			printf(" %d / %d = %d \n", a, b, result);
		} else
			printf(" 0���� ������ �ȵ˴ϴ�. \n");
	}

	if (k == '%') {
		if (b != 0) {
			result = a % b;
			printf(" %d %% %d = %d \n", a, b, result);
		} else
			printf(" 0���� ������ ������ ���� �ȵ˴ϴ�. \n");
	}
}