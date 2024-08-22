#include <stdio.h>
int main()
{
    int i = 1, j = 1, n;
    printf("Enter num - ");
    scanf("%d", &n);
     while (i <= 10)
    {

        printf("%d X %d = %d \n", n, i, i * n);

        i++;
    }

    return 0;
}