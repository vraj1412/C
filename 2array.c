#include<stdio.h>
int main(){
	int n;
	int p;
	
	printf("Enter 1 Array Size = ");
	scanf("%d",&n);
	printf("Enter 2 Array Size = ");
	scanf("%d",&p);
	
	int a[n];
	int arr[p];
	
	for(int i = 0;i < n;i++){
		printf("Enter Value in %d = \t",i);
		scanf("%d",&a[i]);
		
	}
	for(int i = 0;i< n;i++){
		printf("%d \n",a[i]);
	}
	
	
	for(int i = 0;i < p;i++){
		printf("Enter Value in %d = \t",i);
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i< p;i++){
		printf("%d \n",arr[i]);
	}
}
