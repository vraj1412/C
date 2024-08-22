#include<stdio.h>
void perfect(){
	int i ,n, rm , sum = 0;
	
	printf("Enter Number For Check = ");
	scanf("%d",&n);
	
	for(i = 1;i <= (n - 1);i++){
		rm = n % i;
		if(rm == 0){
			sum += i;
		}
	}
	if(sum == n){
	printf("%d num is Perfect number.",n);
	}
	else{
	printf("%d is not Perfect number.",n);
	}
}

int main(){
	perfect();

}