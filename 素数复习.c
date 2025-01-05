#include<stdio.h>

int isPrime();
void main()
{
	int test_number;
	scanf_s("%d", &test_number);
	if (isPrime(test_number) == 0)
		printf("not prime!\n");
	else
		printf("is prime!\n");
}

int isPrime(int test_number)
{
	if (test_number <= 1)
		return 0;
	for (int i = 2; i < test_number; i++)
	{
		if (test_number % i == 0)
			return 0;
	}
	return 1;
}