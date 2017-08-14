#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
	int num;

	printf("Please enter a number with 5 digits without the number 0 \n: ");
	scanf("%d", &num);
	if (num <= 9999 || num > 99999)
	{
		printf("The number you enter is illegal please try again :)\n");
	}
	else if (num % 10 == 0 || num / 100 % 10 == 0 || num / 1000 % 10 == 0 || num % 100 / 10 == 0)
	{
		printf("the number you choose include 0\n");
	}
	else if (num / 10000 == num % 10 && num % 100 / 10 == num % 10000 / 1000)
	{
		printf("the number you choose is polindrom :)\n");
	}
	else
		printf("the number you choose its not polindrom :(\n");
}