#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void p(const char* str, int n);
void main()
{
	printf("Choose a number: ");
	int num;
	scanf("%d", &num);
	p("the number is", num);//printf("the number is: %d\n", num);
	p("alafim",num/1000);//printf("alafim: %d\n",num/1000);
	p("mehot", num % 1000 / 100);//printf("mehot: %d\n",num%1000/100);
	p("asarot", num % 100 / 10);//printf("asarot: %d\n",num%100/10);
	p("ahadot", num % 10);//printf("ahadot: %d\n", num % 10);
	p("aaa", 'o');
}

void p(const char* str, int n)
{
	printf("%s\t%d\n", str, n);
}

