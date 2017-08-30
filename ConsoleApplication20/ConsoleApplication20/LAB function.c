
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
int m_to_cm(int,int);
int m_to_sec(int, int);

void main()
{
	int num,sum;
	printf("enter your choice 1 for M to C 2 for Min to Sec \n");
	scanf("%d", &num);
	switch (num)
	{
	case 1:m_to_cm(num,sum);
		break;
	case 2: m_to_sec(num,sum);
		break;
	case 0:break;
	default:
		printf("worng choice\n");
		break;
	}


}
int m_to_cm(int num, int sum)
{
	int  m, cm;
	for (int i = 1; i <= num; i++)
	{

		printf("%d", i * 100);
		sum += i * 100;
		return sum;
	}
}

int m_to_sec(int num, int sum)
	{
		
		for(int i = 1;i <= num;i++)
		{
			printf("%d", i * 60);
			sum += i * 60;
			return sum;

		}
	}

