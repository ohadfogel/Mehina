#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
	int num1=0, sum1;
	for (num1= 0; num1 <= 10000; num1++)
	{
		sum1 = 0;
		for (int i =1;i < num1;i++)
		{
			if (num1%i == 0)
			{
				sum1 += i;
			}
		}
		if (sum1 == num1)
		{
			printf("%d\n",num1);
		}
	}
}