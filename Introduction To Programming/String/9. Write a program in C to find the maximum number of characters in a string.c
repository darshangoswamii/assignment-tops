//9. Write a program in C to find the maximum number of characters in a string.

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int count=0,i;
	
	printf("Enter the string :");
	gets(str);
	
	str[strcspn(str, "\n")] = '\0';

    count = strlen(str);

    printf("The maximum number of characters in the string is: %d\n", count);

    return 0;
	
	
}
