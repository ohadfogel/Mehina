#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592654

void main()
{
	int input, sl1, sl2, sl3;
	float cir, area,hight,r;
	printf("To calculate the area and circumference of a triangle press: 1\n");
	printf("To calculate the area and circumference of a rectangle press: 2\n");
	printf("To calculate the area and circumference of a squere press: 3\n");
	printf("To calculate the area and circumference of a circle press: 4\n");
	scanf("%d", &input);
	if (input == 1)
	{
		printf("Please enter the base of triangle:\n");
		scanf("%d", &sl1);
		printf("Please enter 2 sides of triangle (first second):\n");
		scanf("%d %d", &sl2, &sl3);
		printf("Please enter the hight of triangle:\n");
		scanf("%f", &hight);
		cir = sl1 + sl2 + sl3;
		area = (sl1*hight) / 2;
		printf("The circumference is: %.1f\n ", cir);
		printf("The area is: %.1f\n", area);
	}
	else if (input == 2)
	{
		printf("Please enter the base of rectangle:\n");
		scanf("%d", &sl1);
		printf("Please enter the hight of rectangle:\n");
		scanf("%f", &hight);
		cir = (sl1 * 2) + (hight * 2);
		area = sl1 * hight;
		printf("The circumference is: %.1f\n", cir);
		printf("The area is: %.1f\n", area);
	}
	else if (input == 3)
	{
		printf("Please enter the base of squre:\n");
		scanf("%f", &hight);
		cir = hight * 4;
		area = hight * hight;
		printf("The circumference is: %.1f\n", cir);
		printf("The area is: %.1f\n", area);
	}
	else if (input == 4)
	{
		printf("Please enter the radios of the circle:\n");
		scanf("%f", &r);
		cir = (PI * 2) * r;
		area = PI * (r * r);
		printf("The circumference is: %.3f\n", cir);
		printf("The area is: %.3f\n", area);
	}
	else
		printf("The number you chose is incorrect please follow the orders :)\n");
}