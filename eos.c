#include<stdio.h>
int main(){
	
	int n , i;
	int evensum = 0, oddsum = 0;
	printf("Enter Value = ");
	scanf("%d",&n);
	int arr[n];
	
		printf("Enter Element = ");
	
	for(int i = 0;i < n;i++){
		scanf("%d",&arr[i]);
	}
	
	for( i = 0;i < n;i++){
		
		if(arr[i] % 2 == 0){
			evensum += arr[i];
		}
		else{
			oddsum += arr[i];
		}
	}
	printf("Evensum = %d",evensum);
	printf("Oddnsum = %d",oddsum);
	

	return 0;
}