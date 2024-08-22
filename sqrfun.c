#include<stdio.h>

int squr(){
	int squr ,h;
	
	printf("Enter Hight of Square = ");
	scanf("%d",&h);
	
	squr = h*h;
	
	return squr;
}
int main(){
	int sqr = squr();

	printf("Sqr Area = %d",sqr);
	
	return 0;
}