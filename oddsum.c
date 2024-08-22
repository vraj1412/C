#include<stdio.h>
int main(){
	int  n ,sum = 0;
	
	printf("Enter Values = ");
	scanf("%d",&n);
	
	for(int i = 1;i <= n;i+=2){
	    printf("%d \n",i);
		sum += i;
	}
	printf("sum = %d",sum);
	
	
	
	
	return 0;
}