#define CRT_SECURE_NO_WARNING
#include <stdio.h>
int mispar_less_digit(int num,int dig)
{
	int sifra, result=0, counter=1;
	
	for (int i = 0; i <6; i++)
	{
		sifra = num % 10;
		num = num / 10;						//num/=10;
		if (sifra != dig)
		{
			result = result + sifra * counter;	//result+=sifra*counter;
			counter = counter * 10;				//counter*=10;
		}
		if (num == 0)
		{
			break;
		}
	}
	return(result);
}
void main()
{
	int num, dig, result;
	for (int i = 0;i <30;i++)
	{
		printf("please enter a number:\n");
		scanf("%d", &num);
		printf("please enter a digit:\n");
		scanf("%d", &dig);
		if (num <= 999999)
		{
			result = mispar_less_digit(num, dig);
			printf("the result is:%d\n", result);
		}
		
	}
		

}