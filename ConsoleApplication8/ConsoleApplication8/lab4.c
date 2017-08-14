#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
	int mors;
	printf("please enter a number:\n ");
		scanf("%d",& mors);
		switch (mors)
		{
		case 0:printf("-----=%d\n", mors);
			break;
		case 1: printf(".----=%d\n", mors);
			break;
		case 2: printf("..---=%d\n", mors);
			break;
		case 3: printf("...--=%d\n", mors);
			break;
		case 4: printf("....-=%d\n", mors);
			break;
		case 5: printf(".....=%d\n", mors);
			break;
		case 6: printf("-....=%d\n", mors);
			break;
		case 7: printf("--...=%d\n", mors);
			break;
		case 8: printf("---..=%d\n", mors);
			break;
		case 9: printf("----.=%d\n", mors);
			break;
		}
}
