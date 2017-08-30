#define CRT_SECURE_NO_WARNING
#include <stdio.h>
void main()
{
	int sum1=0,sum2=0, sum3=0;
	for (int i = 0; i < 3; i++)
	{
		int num1, meot, asarot, ahadot;
		printf("please enter a number with 3 digits: ");
		scanf("%d", &num1);
		meot = num1 / 100;
		asarot = num1 % 100 / 10;
		ahadot = num1 % 10;
		sum1 = sum1 + meot;
		sum2 = sum2 + asarot;
		sum3 = sum3 + ahadot;
	}

	if (sum1 > sum2&&sum2 > sum3)
	{
		printf("meot:%d\nasarot:%d\nahadot:%d\n", sum1, sum2, sum3);
	}
	else if(sum1>sum2&&sum2<sum3)
	{
		printf("meot:%d\nahadot:%d\nasarot:%d\n", sum1, sum3, sum2);
	}
	else if (sum2>sum3&&sum1<sum3)
	{
		printf("asarot:%d\nahadot:%d\nmeot:%d\n", sum2, sum3, sum1);
	}
	else if (sum2 > sum3&&sum1 > sum3)
	{
		printf("asarot:%d\nmeot:%d\nahadot:%d\n", sum2, sum1, sum3);
	}
	else if (sum3 > sum2&&sum1 > sum2)
	{
		printf("ahadot:%d\nmeot:%d\nasarot:%d\n", sum3, sum1, sum2);
	}
	else 
	{
		printf("ahadot:%d\nasarot:%d\nmeot:%d\n", sum3, sum2, sum1);
	}
	




}
