
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int i=1, j, k=1, space=0, row=0;

	for (i = 1;i <= row;i++)
	{
		for (k = space;k >= 1;k--)
		{
			printf(" ");

		}
		for (j = 1;j <= i;j++)
		{
			printf("*");
			printf("\n");
			space--;
		}
	}
	

}