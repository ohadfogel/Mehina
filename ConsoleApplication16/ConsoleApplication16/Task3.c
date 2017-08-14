#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
	int num1,sum1=1,sum2;
	printf("please enter a number: ");
	scanf("%d",& num1);
	for (int i = 2;i < num1;i++)
	{
		if (num1%i == 0)
		{
			sum1 += i;
		}
	}
	if (sum1 == num1)
	{
		printf("the number is perfect\n");
	}
	else
	{
		printf("the number is not perfect\n");
	}

}