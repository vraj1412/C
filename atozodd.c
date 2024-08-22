#include <stdio.h>
int main()
{
    char ch;

    for (int ch = 'A'; ch <= 'Z'; ch++)
    {
        if (ch % 2 != 0)
        {
            printf("%c \n", ch);
        }
    }
}