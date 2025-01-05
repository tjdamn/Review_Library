#include<stdio.h>
int lcm();
int gcd();
void main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("最大公约数为%d\n", gcd(a, b));
	printf("最大公倍数为%d\n", lcm(a, b));
}
//公约数
int gcd(int a, int b)
{
	if (a % b == 0)
		return b;
	else
	{
		int t = a;
		a = b;
		b = t % b;
		gcd(a, b);
	}
}
//公倍数
int lcm(int a, int b)
{
	int t;
	t = (a * b) / gcd(a, b);
	return t;
}