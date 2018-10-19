#include <stdio.h>
#include <stdlib.h>

long int factorial(int p);

int main(void)
{
	int m, n;
	long int ans, a, b, c;
	printf("求排列組合C(m,n)\n");
	printf("m=");
	scanf_s("%d", &m);
	printf("n=");
	scanf_s("%d", &n);

	a = factorial(m);
	b = factorial(n);
	c = factorial(m - n);

	ans = a / (b*c);
	printf("C(%d,%d)=%d\n", m, n, ans);
	system("pause");
	return 0;
}

long int factorial(int p)
{
	long int result;
	if (p > 1)
	{
		long int result = p * factorial(p - 1);
		return result;
	}
	return 1;
}