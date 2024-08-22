#include <stdio.h>
int main()
{
    int i = 0, sum = 0;

    while (i <= 10)
    {
        printf("%d \n", i);
        i += 2;

        sum += i;
    }
    printf("sum = %d", sum);

    return 0;
}