#include <stdio.h>

int main()
{
	int i, k;

	for (i = 2; i <= 9; i++)
	{
		printf("## 제 %d 단 ## \n", i);
		for (k = 1; k <= 9; k++)
		{
			printf(" %d X %d = %d \n", i, k, i*k);
		}
		printf("\n");
	}
}