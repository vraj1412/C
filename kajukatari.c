#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 5; k >= i; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 4; i >= 1; i--)
    {
        for (int k = 5; k >= i; k--)
        {
            printf(" ");
        }

        for (int j = i; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}