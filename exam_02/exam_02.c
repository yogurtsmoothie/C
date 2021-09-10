#include <stdio.h>

int main()
{
	int a, b;
	int result;
	int k;

	printf("Ã¹¹øÂ° °è»êÇÒ °ªÀ» ÀÔ·ÂÇÏ¼¼¿ä==>");
	scanf_s("%d", &a);
	printf("<1>µ¡¼À <2>»¬¼À <3>°ö¼À <4>³ª´°¼À ==>");
	scanf_s("%d", &k);
	printf("µÎ¹øÂ° °è»êÇÒ °ªÀ» ÀÔ·ÂÇÏ¼¼¿ä==>");
	scanf_s("%d", &b);

	if (k == 1) {
		result = a + b;
		printf("%d + %d = %d \n", a, b, result);
	}

	if (k == 2) {
		result = a - b;
		printf("%d - %d = %d \n", a, b, result);
	}

	if (k == 3) {
		result = a * b;
		printf("%d * %d = %d \n", a, b, result);
	}

	if (k == 4) {
		result = a / b;
		printf("%d / %d = %d \n", a, b, result);
	}
}