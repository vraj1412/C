#include<stdio.h>
int main(){
	int i , j;
	
	for(i = 5;i >= 1; i--){
		for(int k = i;k <= 5;k++){
			printf("  ");
		}
		for(j = i;j >= 1;j--){
			printf("%d ",j);
		}
		printf(" \n");
	}
}