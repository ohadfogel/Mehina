
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int greater(int mis1, int mis2)
{
	if (mis1 > mis2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int sumdig(int number)
{
	int sum = 0;
	while (number)
	{
		sum += number % 10;
		number /= 10;
		}
	return sum;
}
	void main()
	{
		int mis1, mis2;
		printf("please enter a number:\n");
		scanf("%d", &mis1);
		printf("please enter a number:\n");
		scanf("%d", &mis2);
	
		if (greater(mis1,mis2) == 1)
		{
			printf("the first number sum is:%d\n", sumdig(mis1));

		}
		else
			printf("i will not print you anything\n", mis2);

}