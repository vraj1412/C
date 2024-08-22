#include<stdio.h>
int main(){
    int i , t;
	
	printf("Enter Income = ");
	scanf("%d",&i);
	if(i < 2500){
		printf("No Tex");
	}
	else if(i > 2500 && i < 5000){
		t = i * 0.10;
		printf("Total Tex = %d",t);
	}else if(i > 5000 && i < 10000){
	    t = i * 0.20;
		printf("Total Tex = %d",t);
	}else {
	    t = i * 0.30;
		printf("Total Tex = %d",t);
	}
	
	
	
}