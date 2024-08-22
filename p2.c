#include<stdio.h>
int main(){
	int  n ,sum = 0;
	
	printf("Enter Values = ");
	scanf("%d",&n);
	
	for(int i = 1;i <= n;i++){
	   if(i % 2 == 0){ 
		printf("%d \n",i*i);
	   }
	   else{
		   printf("%d \n",i);
	   }
		
	}
	
	
	
	
	
	return 0;
}