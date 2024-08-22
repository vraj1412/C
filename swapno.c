#include<stdio.h>
int main(){
    
    int a,b;
    int *c ,*d;

    printf("Enter value of A = ");
    scanf("%d",&a);
    printf("Enter Value of b = ");
    scanf("%d",&b);

    c = &a;
    d = &b;
    
    *c = *c + *d;
    *d = *c - *d;
    *c = *c - *d;
    
     printf("Befor Swipe A = %d\n",*c);
     printf("Befor Swipe b = %d",*d);

    return 0;
}