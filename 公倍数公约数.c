#include<stdio.h>
int lcm();
int gcd();
void main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("���Լ��Ϊ%d\n", gcd(a, b));
	printf("��󹫱���Ϊ%d\n", lcm(a, b));
}
//��Լ��
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
//������
int lcm(int a, int b)
{
	int t;
	t = (a * b) / gcd(a, b);
	return t;
}