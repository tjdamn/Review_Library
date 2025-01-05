#include<stdio.h>
void main()
{
	int year;
	do 
	{
		printf("please enter a year number!\n");
		printf("if you want quit enter 0!\n");
		scanf_s("%d", &year);
		if (year % 100 != 0 && year % 4 == 0)
			printf("this is a formal gap year.\n");
		else if (year % 400 == 0)
			printf("this is a centry gap year.\n");
		else
			printf("this is not a gap year.\n");
	} while (year);
}