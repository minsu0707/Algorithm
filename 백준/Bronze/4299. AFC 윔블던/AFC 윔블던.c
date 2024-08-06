#include <stdio.h>

int main()
{
	int a, b, A, B;

	scanf("%d %d", &a, &b);

	A = a + b;
	B = a - b;
	if (A < 0 || B < 0)
	{
		printf("-1");
	}
	else
	{
		if (A % 2 == 0 && B % 2 == 0)
		{
			printf("%d %d", A / 2, B / 2);
		}
		else
		{
			printf("-1");
		}
	}
	
	
	return 0;
}