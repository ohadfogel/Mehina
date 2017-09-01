#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int counter_dig(int sum);
void main()
{
	int num;
	printf("please enter a number:\n");
	scanf("%d", &num);
	if (num > 0)//if number is leagel
	{
		if (counter_dig(num)%2==0)//check if the number of digits even
		{
			printf("even\n");
		}
		else
		{
			printf("odd\n");
		}
	}
	else
	{
		printf("invalidate input\n");
	}
	
}
	
int counter_dig(int num)
{
	int sum = 0;
	while (num > 0)
	{
		sum++;//counter
		num = num / 10;
	}

	//printf("%d\n",sum);
	return sum;
}