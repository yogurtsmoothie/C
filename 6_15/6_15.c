﻿#include <stdio.h>

int main()
{
	int i, k;

	for (i = 1; i <= 9; i++)
	{
		for (k = 2; k <= 9; k++)
		{
			printf("%2dX%2d=%2d", k, i, k*i);
		}
		printf("\n");
	}
}