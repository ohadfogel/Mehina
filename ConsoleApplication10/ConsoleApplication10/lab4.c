#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
	int num, mis = 2;
	printf("enter int number:\n");
	scanf("%d",& num);
	while (num%mis != 0)
	{	mis++;
	if (mis == num)
		printf("%d is prime\n", num);
	else
		printf("%d div by %d %d not prime\n", num, mis, num);
	

	}
}