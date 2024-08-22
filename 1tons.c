#include<stdio.h>
int main(){
	int i , n = 10,sum = 0;
	
	for(i = 1;i <= n;i++){
	    printf("%d \n",i);
		sum += i;
	}
	printf("sum = %d",sum);
	
	
	
	
	return 0;
}