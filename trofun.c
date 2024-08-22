#include<stdio.h>

int tri(){
	int tri,h,b;
	
	printf("Enter triangle Hight = ");
	scanf("%d",&h);
	printf("Enter triangle Bass = ");
	scanf("%d",&b);
	
	tri = (h*b)/2;
	
	return tri;
}
int main(){
	int trii = tri();

	printf("Tri Area = %d",trii );
	
	return 0;
}