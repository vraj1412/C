#include<stdio.h>
int main(){
	int n;
	
	printf("Enter Array Size = ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i = 0;i <= n;i++){
		printf("Enter Value in %d = \n",i);
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i<= n;i++){
		printf("%d \n",arr[i]);
	}
	
}
