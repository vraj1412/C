#include<stdio.h>

int main(){
	char ch[50];
	char ch1[50];
	int i , len = 0 , temp;
	
	printf("Enter First String = ");
	scanf("%s",&ch);
	printf("Enter Second String = ");
	scanf("%s",&ch1);
	
	printf("Merge String = %s %s",ch,ch1);
	
	return 0;
}