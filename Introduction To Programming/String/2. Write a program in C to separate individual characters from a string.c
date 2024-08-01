//2. Write a program in C to separate individual characters from a string
#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char string[100],i;  
    printf("Enter a string:");
    scanf("%s",string);
    printf("Individual characters from given string:\n");      
    for(i = 0; i < strlen(string); i++){  
        printf("%c ", string[i]);  
    }  
          
    return 0;  
}  
