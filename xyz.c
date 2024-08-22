#include<stdio.h>
int main(){
	int  z;
	
	printf("enter value = ");
	scanf("%d",&z);
	
	if(z > 100 && z < 500){
		printf("X");
	}
	else if(z < 2000 || z > 3000){
		printf("Y");
	}
	else{
		printf("No data..");
	}
	return 0;
}