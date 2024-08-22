#include<stdio.h>
int amt,rate,qty,dis,bamt,gst,nbill;
void ar(){
	printf("Enter Qty = ");
	scanf("%d",&qty);
	printf("Enter Rate = ");
	scanf("%d",&rate);
} 
void count(){
    ar();
	amt = qty * rate;
	dis = amt * 0.10;
	bamt = amt - dis;
	gst = bamt * 0.18;
	nbill = bamt + gst;
	
}
void print(){
	count();
	
	printf("rate \t qty \t amt \t dis \t bill \t gst \t netbill \n");
	printf("%d \t %d \t %d \t %d \t %d \t %d \t %d ",rate,qty,amt,dis,bamt,gst,nbill);
}

int main(){
	
	print();
	
}