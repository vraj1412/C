#include <stdio.h>
int main()
{
	int n, c = 1;

	printf("Enter Values = ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{

		printf("%d \n", c * i);
		c += c;
	}

	return 0;
}