#include <stdio.h>
int main()
{
    int i = 1, n;

    printf("Enter Value = ");
    scanf("%d", &n);
    do
    {
        printf("%d ", i);
        i += 2;
    } while (i <= n);
}