#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
	int n = 20, num, min, max;
	float sum = 0;
	for (int i = 0;i < n;i++)
	{
		printf("please enter a number: ");
		scanf("%d", &num);
		for (int j = 24;j <= num;j++)
		{
			if (j % 12 == 0) // number that divides by 12 divides by 2,3 and 4
			{
				printf("%d ",j);
			}
		}
		printf("\n");
		if (i == 0) // if we are in the first number
		{
			min = num;
			max = num;
		}
		else
		{
			if (num < min)
			{
				min = num;
			}
			if (num > max)
			{
				max = num;
			}
		}
		sum += num;
	}
	printf("Min = %d\n", min);
	printf("Max = %d\n", max);
	printf("Avarage = %f\n", sum/n);
}