#include<stdio.h>
long long jc();
void main()
{
	int n;
	scanf_s("%d", &n);
	printf("%lld\n", jc(n));
}

long long jc(int n)
{
	if (n == 1 || n == 0)
		return 1;
	else
		return n * jc(n - 1);
}