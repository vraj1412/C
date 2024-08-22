#include<stdio.h>
void p1(){
	int i ,j;
	
	for(i = 1;i <= 5;i++){
		for(j = 1;j <= 5;j++){
			printf("* ");
		}
		printf("\n");
	}
	
}
void p3(int i,int j){
	int d;
	int p;
	
	for(d = i;d <= j;d++){
		for(p = i;p <= j;p++){
			printf("* ");
		}
		printf("\n");
	}
}

int main(){
	printf("1st :\n");
	p1();
	printf("2nd :\n");
	p3(1,5);
	printf("3rd :\n");
	p3(1,10);
	printf("4th :\n");
	p3(1,20);
	
	
	
	
}

