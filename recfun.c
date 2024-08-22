#include<stdio.h>

void rec(){
	int rec , h,b;
	
	printf("Enter Rectangle Hight = ");
	scanf("%d",&h);
	printf("Enter Rectangle Bass = ");
	scanf("%d",&b);
	
	rec = h*b;
	
	printf("Rectangle = %d",rec);
}
int main(){
	rec();
}