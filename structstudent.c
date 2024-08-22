#include <stdio.h>
#include <string.h>
struct Student
{
    int rn;
    char n[50];
    int marks[3];
    int sum, per;
};
int main()
{
    struct Student s1[3];

    for (int i = 1; i <= 3; i++)
    {
        s1[i].sum = 0;

        printf("Enter Student Name=");
        scanf("%s", &s1[i].n);
        printf("Enter the Roll no = ");
        scanf("%d", &s1[i].rn);

        for (int j = 0; j < 3; j++)
        {
            printf("Enter %d Sub Marks = ", j );
            scanf("%d", &s1[i].marks[j]);
             
        }
        for (int j = 0; j < 3; j++)
        {
            s1[i].sum += s1[i].marks[j];
        }
        printf("Sum of marks = %d \n", s1[i].sum);
        s1[i].per = (s1[i].sum ) / 3;
        printf("Per = %d \n", s1[i].per);
    }

    return 0;
}