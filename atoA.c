
#include<stdio.h>
int main(){
	char ch , ch1;
	
	printf("Enter character = ");
	scanf("%c",&ch);
	
	
	
	if(ch >= 'a' && ch <= 'z'){
		ch -= 32;
		printf("%c --> %c",ch+=32,ch);
	}
	else if(ch >= 'A' && ch <= 'Z'){
		ch += 32;
		printf("%c --> %c",ch-=32,ch);
	}
	
	return 0;
}