#define CRT_SECURE_NO_WARNING
#include <stdio.h>
void main()
{
	int num,sum,sum2;
	printf("please enter a number: ");
	scanf("%d",& num);
	while (num>0)
	{
		sum=num % 10 / 10;
		sum2 = num + num;
	}

	printf("is"  "%d\n", sum2);




}