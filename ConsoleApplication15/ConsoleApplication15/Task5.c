#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
	int row, column, n,i = 1;
	printf("please enter a number: ");
	scanf("%d", &n) ;
	for (row = 0;row < n;row++)
	{
		for (column = 0;column<=row;column++)
		{
			printf("%d ", i);
			i++;
			if (i > 10)
			{
				i = 1;
			}
		}
		printf("\n");
	}
	printf("\n");
	i = 1;
	for (row =0;row <n ;row++)
	{
		for (column=0;column < (n-row);column++)
		{
			printf("%d ", i);
			i++;
			if(i>10)
			{
				i=1;
			}
		}
		printf("\n");
	}
}