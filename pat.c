#include<stdio.h>
void p1(){
	int i ,j;
	
	for(i = 1;i <= 5;i++){
		for(j = 1;j <= i;j++){
			printf("* ");
		}
		printf("\n");
	}
	
}
int p2(){
	int i ,j;
	
	for(i = 1;i <= 5;i++){
		for(j = 1;j <= i;j++){
			return i;
		}
	}
}
void p3(int i,int j){
	int i ,j;
	
	for(i = 1;i <= 5;i++){
		for(j = 1;j <= i;j++){
			printf("* ");
		}
	}
}
int p4(int i,int j){
	int i ,j;
	
	for(i = 1;i <= 5;i++){
		for(j = 1;j <= i;j++){
			return j;
		}
	}
}
int main(){

	p1();
}

