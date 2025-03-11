#include <stdio.h>
#include <stdlib.h>

void sort(int* pArr, int len)
{
	int i, j;
	int temp;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len - 1; j++)
		{
			if (pArr[j] > pArr[j + 1])
			{
				temp = pArr[j];
				pArr[j] = pArr[j + 1];
				pArr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int len;
	int* pArr;
	int i;
	printf("Enter the length of the array: ");
	scanf_s("%d", &len);
	pArr = (int*)malloc(sizeof(4*len));
	for (i = 0; i < len; i++)
	{
		printf("Enter the element %d: ", i + 1);
		scanf_s("%d", &pArr[i]);
	}
	sort(pArr, len);
	for (i = 0; i < len; i++)
	{
		printf("%d ", pArr[i]);
	}
	free(pArr);
	return 0;
}