#include<stdio.h>
int main(){
	char ch , ch1;
	
	printf("Enter Character = ");
	scanf("%c",&ch);
	
	if(ch >= 'a' || ch <= 'z'){
		
		ch -= 32;
		printf("  %c",ch);
	}
	else if(ch >= 'A' || ch <= 'Z'){
		ch = ch + 32;
		printf("a --> %c",ch);
	}
	return 0;
	}