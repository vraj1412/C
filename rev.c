#include<stdio.h>


void revnum(){
	int rev = 0, rm , n;
	printf("Enter Number = ");
	scanf("%d",&n);
	
	while(n != 0){
		rm = n % 10 ;
		rev = rev * 10 + rm;
		n /= 10;
	}
	
	printf("Reverse num = %d",rev);
}
int main(){
    revnum();
	
	return 0;

}