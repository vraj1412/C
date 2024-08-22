#include <stdio.h>
int main()
{
    int i, j;
    char k = 'A';

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++){
			if(j % 2 == 0){
				
		    printf("%c ",k+32);
			}
			else{
				
				printf("%c ",k);
			}
			k++;
		
		}
        printf("\n");
    }
    return 0;
}