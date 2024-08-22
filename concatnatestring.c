#include <stdio.h>  
int main()  
{  
    char first_string[20];   
    char second_string[20]; 
    int i; 
    printf("Enter the first string :");  
    gets(first_string);  
   
    printf("Enter the second string :");  
    gets(second_string);  
    for(i=0;first_string[i]!='\0';i++);   
      
      
    for(int j=0;second_string[j]!='\0';j++)  
    {  
        
        first_string[i]=second_string[j];  
        i++;  
    }  
    first_string[i]='\0';  
   printf("Merge String : %s", first_string);  
return 0;  
}