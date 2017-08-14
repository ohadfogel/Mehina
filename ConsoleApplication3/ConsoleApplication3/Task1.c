#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
	char c;
	double ps, pr, pd, l, t;
	ps = 7.9;
	pr = 5.8;
	pd = 5.7;
	printf(" for 98 press: s \n for 95 press: r\n for soler press: d\n for exit press: x \n: ");
	scanf("%c", &c);
	if (c == 'x'||c=='X')
	{
		printf("good bye have a great day :)\n");
	}
	else
	{
		printf("liter: ");
		scanf("%lf", &l);
		if (c == 's' || c == 'S')
		{
			t = ps * l;
		}
		else if (c == 'r' || c == 'R')
		{
			t = pr * l;
		}
		else if (c == 'd' || c == 'D')
		{
			t = pd * l;
		}
		printf("the price is: %.3lf\n", t);
		if(t>200) 
		{
			printf("you won a newspaper \n");

		 }
	}
}
	