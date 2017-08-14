#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
	int mis1, mis2, sifra, result, counter;
	printf("please enter a number with 5 digits: ");
	scanf("%d", &mis1);
	printf("please enter a number with 1 digits: ");
	scanf("%d", &mis2);
	while (!((mis1 == 0) && (mis2 == 0)))
	{
		result = 0; counter = 1;
		for (int i = 0; i < 5; i++)
		{
			sifra = mis1 % 10;
			mis1 = mis1 / 10;						//mis1/=10;
			if (sifra != mis2)
			{
				result = result + sifra * counter;	//result+=sifra*counter;
				counter = counter * 10;				//counter*=10;
			}
		}
		printf("%d\n", result);
		printf("please enter a number with 5 digits: ");
		scanf("%d", &mis1);
		printf("please enter a number with 1 digits: ");
		scanf("%d", &mis2);
	}
}