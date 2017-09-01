#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum_digits(int mispar, int num)
{
	int sifra, sum=0;
	for (int i = 0;i < num;i++)
	{
		sifra = mispar % 10;
		mispar = mispar / 10;
		//printf("%d\n", sifra);
		sum += sifra;
	}
	return sum;
}

void main()
{
	int mispar, num,sum=0;
	do
	{
		printf("please enter a number:\n");
		scanf("%d", &mispar);
		printf("please enter a number smaller then the first number you choose: ");
		scanf("%d", &num);
		sum_digits(mispar, num);
		printf("the number is %d\nthe number of digit to sum is: %d\nthe resalut is:%d\n", mispar, num, sum_digits(mispar, num));


	} while (mispar != -1 && num != -1);
	
}


