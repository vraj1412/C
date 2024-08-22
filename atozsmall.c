#include <stdio.h>
int main()
{
    char ch;

    for (int ch = 'A'; ch <= 'Z'; ch += 2)
    {
        printf("%c \n", ch);
    }
}