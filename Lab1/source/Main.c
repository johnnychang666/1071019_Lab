#include <stdio.h>
#include <stdlib.h>
int odd(int U);
int even(int U);
int totalsum(int U);

int main(void)
{
	int n, Sum;
	char a;
	printf("1+2+...+n=?Please enter n=");
	scanf_s("%d", &n);
	getchar();
	printf("請問要做奇數和(O),偶數和(E),還是整數和(I)?請選擇");
	scanf_s("%c", &a);

	switch (a)
	{
	case 'O':
		Sum = odd(n);
		break;

	case 'E':
		Sum = even(n);
		break;
	case 'I':
		Sum = totalsum(n);
		break;
	default:
		printf("elect error.");
		return -1;
	}
	printf("Total=%d\n", Sum);

	system("pause");
	return 0;
}

int odd(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
	{
		if (i % 2 == 1) total = total + i;
	}
	return total;
}


int even(int U)
{
	int i, total = 0;
	for (i = 1; i <= U; i++)
	{
		if (i % 2 == 0) total = total + i;
	}
	return total;
}

int totalsum(int U)
{
	return odd(U) + even(U);
}