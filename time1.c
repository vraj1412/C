#include<stdio.h>
int main(){
	int sec , h ,m,s;
	
	printf("Enter Sec for time = ");
	scanf("%d",&sec);
	
	h = (sec / 3600) ;
	m = (sec - (3600 * h)) / 60;
	s = (sec - (3600 * h)) - (m*60);
	
	printf("time = %d : %d : %d",h,m,s);
	
	return 0;
}