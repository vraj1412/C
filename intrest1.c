#include<stdio.h>
void intrest(int amt,int rate){
	int  intrest ;
	
	intrest = (amt * rate)/100;	
	printf("Intrest = %d \n",intrest);
}
int intrest1(int amt,int rate){
	int intrest ;
	
	
	
	intrest = (amt * rate)/100;	
	return intrest;
}
int main(){
    int amt , rate;
	intrest(10000,20);
	
	int intrest;
	intrest = intrest1(10000,40);
	printf("intrest = %d \n",intrest);

}