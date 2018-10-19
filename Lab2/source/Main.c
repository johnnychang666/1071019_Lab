#include <stdio.h>
#include <stdlib.h>

long int factorial(int p);

int main(void)
{
	int m, n;
	long int ans, a, b, c;
	printf("�D�ƦC�զXC(m,n)\n");
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
	int a;
	long int result = 1;
	for (a = 1; a <= p; a++)
	{
		result = result * a;
	}
	return result;
}