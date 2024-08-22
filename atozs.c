#include <stdio.h>
int main()
{
    char ch = 'a';

    do
    {
        printf("%c \t", ch);
        ch++;

    } while (ch < 'z');

    return 0;
}