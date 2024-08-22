#include <stdio.h>
int main()
{

    int n, i = 1, n1, a, sum;

    printf("Enter How Many time you want to calculate sum = ");
    scanf("%d", &a);

    printf("Enter First Number - \n ");
    scanf("%d", &n);
    printf("Enter Second Number -\n");
    scanf("%d", &n1);

    char s[3];

    printf("Enter Sign - ");
    scanf("%s", &s[0]);

    switch (s[0])
    {

    case '+':
        sum = n + n1;
        printf("%d + %d = %d \n", n, n1, sum);
        break;

    case '-':
        sum = n - n1;
        printf("%d - %d = %d \n", n, n1, sum);
        break;

    case '*':
        sum = n * n1;
        printf("%d * %d = %d \n", n, n1, sum);
        break;

    case '/':
        sum = n / n1;
        printf("%d / %d = %d \n", n, n1, sum);
        break;

    default:
        printf("Enter Valid Sign..");
        break;
    }

    int n2;

    while (i <= a)
    {
        i++;
        printf("Enter New Number = ");
        scanf("%d", &n2);
        printf("Enter Sign - ");
        scanf("%s", &s[0]);

        switch (s[0])
        {

        case '+':

            printf("%d + %d ", sum, n2);
            printf("= %d \n", sum += n2);
            break;

        case '-':

           printf("%d + %d ", sum, n2);
            printf("= %d \n", sum -= n2);
            break;

        case '*':

            printf("%d + %d ", sum, n2);
            printf("= %d \n", sum *= n2);
            break;

        case '/':

           printf("%d + %d ", sum, n2);
            printf("= %d \n", sum /= n2);
            break;

        default:
            printf("Enter Valid Sign..");
            break;
        }
    }

    return 0;
}