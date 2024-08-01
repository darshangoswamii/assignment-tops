//7. Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{
	char name1[100],name2[100];
	printf("\nEnter the string = ");
	gets(name1);
	printf("\nEnter the string = ");
	gets(name2);
	
	strcpy(name1,name2);
	printf("\nString name1 after copy = %s ",name1);
	printf("\nString name2 after copy = %s ",name2);
	
	return 0;
	
}
	
