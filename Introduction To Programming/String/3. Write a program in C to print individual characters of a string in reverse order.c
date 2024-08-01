//3. Write a program in C to print individual characters of a string in reverse order
#include<stdio.h>
#include<string.h>
int main()
{
	char string[100],i;  
    printf("Enter a string:");
    scanf("%s",string);
    printf("Individual characters from given string:\n");      
    for(i = strlen(string)-1; i >= 0; i--)
	{  
        printf("%c ", string[i]);  
    }  
          
    return 0;  
}
