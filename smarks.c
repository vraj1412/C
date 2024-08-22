#include<stdio.h>
int main(){
	
	

	int s[5];
	int sub[3];
	int sum = 0;
	for(int i = 0;i < 5;i++){
		sum=0;
		printf("Enter student Roll no = ");
		scanf("%d",&s[i]);
		for(int j = 0;j < 3;j++){
			printf("Enter Math marks = ");
			scanf("%d",&sub[j]);
			sum+=sub[j];
		}
	
			int per = sum /3;
			printf("Sum Of marks = %d \n",sum);
			printf("per = %d \n",per);
			
			if(per >= 80){
				printf("You got A \n");
			}else if(per >= 60 ){
				printf("You got B \n ");
			}else if(per >= 40 ){
				printf("You got C \n ");
			}else{
				printf("You Are Fail , Bhanva ma dhyan de dofa..\n");
			}
	}
	return 0;
}