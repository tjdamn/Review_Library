//ð�������㷨

#include<stdio.h>
int main()
{
	int i, j, t;
	int a[10] = { 1,2,3,42,2,1,3,4,65,3 };
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	printf("���飨������\n");
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	double sum = 0;
	for (i = 0; i < 10; i++)
		sum = sum+a[i];
	printf("ƽ����Ϊ%.2lf \n", sum/10);
	printf("���ֵΪ%d\n",a[9]);
	printf("��СֵΪ%d\n",a[0]);
	return 0;
}

