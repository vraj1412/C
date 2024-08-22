#include <stdio.h>
int main()
{
    FILE *p;
    char s[500];

    p = fopen("my.txt", "a");
    gets(s);
    fprintf(p, "%s", s);

    p = fopen("my.txt", "r");
    while (fscanf(p, "%s", s) != EOF)
    {
        printf("%s", s);
    }
    fclose(p);
    return 0;
}