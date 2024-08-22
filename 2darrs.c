#include<stdio.h>
int main(){
	int i,j,a[3][3] , b[3][3],sum = 0;
	
	printf("First Array : ");
	for( i = 0;i < 3;i++){
		for( j = 0;j < 3;j++){
			printf("Enter Elememt = ");
			scanf("%d",&a[i][j]);
		
		}
		printf("\n");
	}
	
	for( i = 0;i < 3;i++){
		for( j = 0;j < 3;j++){
			printf("%d ",a[i][j]);
			sum += a[i][j];
		}
		printf("\n");
	}
	printf("second Array : ");
	for( i = 0;i < 3;i++){
		for( j = 0;j < 3;j++){
			printf("Enter Elememt = ");
			scanf("%d",&b[i][j]);
		
		}
		printf("\n");
	}
	
	for( i = 0;i < 3;i++){
		for( j = 0;j < 3;j++){
			printf("%d ",a[i][j]);
			sum += b[i][j];
		}
		printf("\n");
	}
	printf("Sum = %d",sum);
	
}