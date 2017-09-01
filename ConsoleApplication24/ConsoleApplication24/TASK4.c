#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printSandwatch(int num);//ahraza
void main()
{
	int num;
	printf("please enter a number of lines: \n");
	scanf("%d",&num);								//reciving number of lines
	printSandwatch(num);
	printf("%d", num);

}
void printSandwatch(int num)										//the function
{
	for (int line = 0;line < num;line++)    //loop of line
	{
		for (int spaces = 0;spaces < line;spaces++)			//loop of spaces
		{
			printf(" ");
		}
		for (int dollars = 0;dollars < 2 * num - 1 - 2 * line;dollars++)//loop of print a $
		{
			printf("$");
		}
		printf("\n");				// line down between every line
	}
	for (int line = num - 1;line >= 0;line--) //The opposite triangle
	{
		for (int spaces = 0;spaces < line;spaces++)
		{
			printf(" ");
		}
		for (int dollars = 0;dollars < 2 * num - 1 - 2 * line;dollars++)
		{
			printf("$");
		}
		printf("\n");
	}
}