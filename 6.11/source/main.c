#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
	int i, j,k;
	int a[SIZE] = { 6,5,7,8,10,12,68,72,79,89 };
	puts("origin number");
	for (i = 0; i < 10; ++i)
	{
		printf("%3d", a[i]);
	}
	if ((a[0] < a[1]) && (a[1] < a[2]) && (a[2] < a[3]) && (a[3] < a[4]) && (a[4] < a[5]) && (a[5] < a[6]) && (a[6] < a[7]) && (a[7] < a[8]) && (a[8] < a[9]))
	{
		puts("\n final data ");
		for (i = 0; i < SIZE; ++i)
		{
			printf("%3d", a[i]);
		}
	}
	else
	{
		for (unsigned int pass = 0; pass < 9; ++pass)
		{
			if ((a[0] < a[1]) && (a[1] < a[2]) && (a[2] < a[3]) && (a[3] < a[4]) && (a[4] < a[5]) && (a[5] < a[6]) && (a[6] < a[7]) && (a[7] < a[8]) && (a[8] < a[9]))
			{
				puts("\n final data ");
				for (i = 0; i < SIZE; ++i)
				{
					printf("%3d", a[i]);
				}
				return 0;
			}
			else
			{
				for (i = 0; i < 9 - pass; i++)
				{
					if (a[i] > a[i + 1])
					{
						int hold = a[i];
						a[i] = a[i + 1];
						a[i + 1] = hold;
					}
				}
			}
		}
		puts("\n final data ");
		for (i = 0; i < SIZE; ++i)
		{
			printf("%3d", a[i]);
		}
	}
	return 0;
}