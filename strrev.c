#include<stdio.h>

int main(){
	char ch[50];
	int i , len = 0 , temp;
	
	printf("Enter String = ");
	scanf("%s",&ch);
	for( i = 0; ch[i] != '\0';i++){
		len++;
	}
	
	 for (i = 0; i < len / 2; i++)  
    {  
        
        temp = ch[i];  
        ch[i] = ch[len - i - 1];  
        ch[len - i - 1] = temp;  
    } 
	
	printf("Result = %s",ch);

}