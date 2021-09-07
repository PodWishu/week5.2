#include <stdio.h>

int evennum(int a, int b, int c, int d)
{
	int even = 0;
	if (a % 2 == 0)
	{
		even = even + 1;
	}
	if (b % 2 == 0)
	{
		even = even + 1;
	}
	if (c % 2 == 0)
	{
		even = even + 1;
	}
	if (d % 2 == 0)
	{
		even = even + 1;
	}
	return even;
}

int main()
{
	int a, b, c, d;

	printf("num[1] = ");
	scanf_s("%d", &a);
	printf("num[2] = ");
	scanf_s("%d", &b);
	printf("num[3] = ");
	scanf_s("%d", &c);
	printf("num[4] = ");
	scanf_s("%d", &d);

	printf("number of even numbers = %d", evennum(a, b, c, d));
	return 0;
}