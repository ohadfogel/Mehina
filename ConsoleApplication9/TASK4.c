#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
	int num1, num2, meot1, meot2, asarot1, asarot2, ahadot1, ahadot2 ,f1=0,f2=0;
	printf("please enter 2 numbers with 3 digits:\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	if ((num1 < 99 || num1>999) || (num2 < 99 || num2>999))
	{
		printf("your number is not with 3 digits\n");
	}
	else
	{
		meot1 = num1 / 100;
		meot2 = num2 / 100;
		asarot1 = num1 % 100 / 10;
		asarot2 = num2 % 100 / 10;
		ahadot1 = num1 % 10;
		ahadot2 = num2 % 10;
		
		if (meot1 == 5)
		{
			f1++;
		}
		if (asarot1 == 5)
		{
			f1++;
		}
		if (ahadot1 == 5)
		{
			f1++;
		}

		if (meot2 == 5)
		{
			f2++;
		}
		if (asarot2 == 5)
		{
			f2++;
		}
		if (ahadot2 == 5)
		{
			f2++;
		}

		if (f1 == f2)
		{
			if (f1 == 0)
			{
				printf("the number 5 not found\n");
			}
			else
			{
				printf("even\n");
			}
		}
		else
		{
			if (f1 > f2)
			{
				printf("number 1 wins\n");
			}
			else
			{
				printf("number 2 wins\n");
			}
		}
	}
}