#include<stdio.h>
int main(){
	int i,j,a[3][3] ,utri = 0,ltri = 0,dai =0;
	
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
			if(i < j){
				
				utri += a[i][j];
				
			}
		   else if(i > j){
			     
			    ltri += a[i][j];
				
			}
			else{
			     
			
			     dai += a[i][j];
				 
			}
			
		}
			
		printf("\n");
	}
	printf("\n");
	printf("sum of Upper Tri = %d \n",utri);
	printf("sum of Lower Tri = %d \n",ltri);
	printf("sum of Daiagonal Num = %d",dai);
	
	
}