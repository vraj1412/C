#include<stdio.h>
int main(){
	
	int n , i;
	int sum = 0;
	printf("Enter Value = ");
	scanf("%d",&n);
	int arr[n];
	
		printf("Enter Element = ");
	
	for(int i = 0;i < n;i++){
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	printf("Array sum = %d",sum	);
	
	
	

	return 0;
}