#include <stdio.h>

int main()
{
	int i, k;

	for (i = 2; i <= 9; i++)
	{
		for (k = 1; k <= 9; k++)
		{
			printf("중첩 for문입니다. (i값: %d, k값: %d)\n", i, k);
		}
	}
}