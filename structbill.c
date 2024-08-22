#include<stdio.h>
struct Bill{
    int amt,qty,rate,gst,dis,bamt,nbill;
};

int main(){
    struct Bill b[3];
    for(int i = 0;i < 3;i++){
        printf("\n");
        printf("Enter Qty = ");
        scanf("%d",&b[i].qty);
        printf("Enter Rate = ");
        scanf("%d",&b[i].rate);
    
       
            b[i].amt = b[i].qty * b[i].rate;
            b[i].dis = b[i].amt * 0.10;
            b[i].bamt = b[i].amt - b[i].dis;
            b[i].gst = b[i].bamt * 0.18;
            b[i].nbill = b[i].bamt + b[i].gst;
        
        printf(" qty \t rate \t amt \t dis \t bamt \t gst \t nbill \n");
        printf("%d \t %d \t %d \t %d \t %d \t %d \t %d \t ",b[i].qty,b[i].rate,b[i].amt,b[i].dis,b[i].bamt,b[i].gst,b[i].nbill); 
    }
}