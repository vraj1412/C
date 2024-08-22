#include<stdio.h>
int main(){
    for(int i = 0;i <= 10; i++){
        if(i == 9){
            goto next;
        }
        printf("%d \t",i);
    }

    next :
    printf("\n");
    for(int i = 90;i <= 100; i++){
        
        printf("%d \t",i);
    }
}