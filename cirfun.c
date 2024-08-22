#include<stdio.h>

void cir(){
	int cir , r;
	
	printf("Enter Circle Redius = ");
	scanf("%d",&r);
	
	cir = 3.14 * r * r;
	
	printf("circle = %d",cir);
}
int main(){
	cir();
}