#include<stdio.h>
void intrest(){
	int amt , rate , intrest ;
	
	printf("Enter Amount For intrest = ");
	scanf("%d",&amt);
	printf("Enter Rate For intrest = ");
	scanf("%d",&rate);
	
	intrest = (amt * rate)/100;	
	printf("Intrest = %d \n",intrest);
}
int intrest1(){
	int amt , rate , intrest ;
	
	printf("Enter Amount For intrest = ");
	scanf("%d",&amt);
	printf("Enter Rate For intrest = ");
	scanf("%d",&rate);
	
	intrest = (amt * rate)/100;	
	return intrest;
}
int main(){
	intrest();
	
	int intrest;
	intrest = intrest1();
	printf("intrest = %d \n",intrest);

}