	#include <stdio.h>
	#define _CRT_SECURE_NO_WARNINGS

	void main()
	{    
		int input,input2;
		long long t, l;
		
		
		
		printf("Please enter a number upto 9 digits\n: ");
		scanf("%d", &input);
		if (input >1000000000 || input < -1000000000)
		{
			printf("The number you enter is more then 9 digits ..please try again :)\n");
		}
		else
		{
			printf("to check if the number you choose is double or odd please press: 1 \n");
			printf("to calculet the number of you digit please press: : 2 \n");
			printf("to check if the number is negativ please press: 3 \n");
			printf("to squre the number press: 4 \n");
			printf("for exit press: 5 \n");
			scanf("%d", &input2);
			if (input2 == 1)
			{	
				if (input % 2 == 0)
				{
					printf("the number you choose is double \n");
				}
				else
				{
					printf("the number you choose is odd \n");
				}
			}
			else if (input2 == 2)
			{
				if (input < 10 && input > -10)
				{
					printf("1 number\n");
				}
				else if (input<100 && input>-100)
				{
					printf("2 numbers\n");
				}
				else if (input<1000 && input>-1000)
				{
					printf("3 numbers\n");
				}
				else if (input<10000 && input>-10000)
				{
					printf("4 numbers\n");
				}
				else if (input<100000 && input>-100000)
				{
					printf("5 numbers\n");
				}
				else if (input <1000000 && input>-1000000)
				{
					printf("6 numbers\n");
				}
				else if (input <10000000 && input>-10000000)
				{
					printf("7 numbers\n");
				}
				else if (input <100000000 && input>-100000000)
				{
					printf("8 numbers\n");
				}
				else if (input <1000000000 && input>-1000000000)
				{
					printf("9 numbers\n");
				}
			}
			else if (input2 == 3)
			{
				if (input > 0)
				{
					printf(" the number you choose is positive\n");
				}
				else if (input < 0)
				{
					printf("the number you choose is negative\n");
				}
				else
				{
					printf("the number you choose is neutral\n");
				}


			}
			else if (input2 == 4)
			{    
				l = input;
				t = l*l;
				
				printf("the squre of your number is: %lld\n",t);
			}	
		}
	}
