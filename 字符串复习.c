#include<stdio.h>
void main()
{
	char str[1000];
	int space = 0;
	int ch = 0;
	fgets(str, sizeof(str), stdin);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			ch++;
		else if (str[i] == ' ')
			space++;
	}
	printf("空格数为%d\n字母数为%d\n", space, ch);
}